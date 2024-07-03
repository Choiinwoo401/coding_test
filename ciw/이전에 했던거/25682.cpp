#include <iostream>

using namespace std;

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    int c,n;
    cin >> a>>b>>c>>n;
    if(c-a>0) {
        if(n>=b/(c-a)) cout << 1<<'\n';
        else cout << 0 << '\n';
    }
    else if(c-a<0) {
        cout << 0;
    }
    else {
        if(b<=0) cout << 1<<'\n';
        else cout << 0 <<'\n';
    }
}

int main(void) {
    init();
    return 0;
}