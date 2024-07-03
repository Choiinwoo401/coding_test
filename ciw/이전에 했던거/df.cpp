#include <iostream>
#include <vector>
#include <stack>
#define N 111111

using namespace std;
typedef long long ll;

struct s1 {
	int idx;
	ll h;
};

int n;
int idx;
ll ans = 0;
ll arr[N];

int main() {
	cin >> n;
	stack<s1> s;

	arr[n] = 0;

	for (int i = 0; i <= n; i++) {
		if (i < n) cin >> arr[i]; 

		idx = i;

		while (!s.empty() && s.top().h >= arr[i]) {
			idx = s.top().idx;
			ll w = ll(i) - ll(idx);
			ans = max(ans, w * s.top().h);
			s.pop();
		} 
		
		s.push({ idx, arr[i] });
	} 
	cout << ans << '\n';
}