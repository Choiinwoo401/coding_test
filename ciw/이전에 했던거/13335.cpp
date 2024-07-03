#include <iostream>
#include <vector>

using namespace std;

int N,W,L,answer=1;
vector<int> t;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> L >> W;
    for(int i=0;i< N;i++) {
        int k;
        cin >> k;
        t.push_back(k);
    }
    int check=1,check2=0;
    int k=t[0];
    answer+=L*N;
    while(1) {
        if(k>W) {

            continue;
        }
    }
    cout << answer <<'\n';
}

int main(void) {
    init();
    return 0;
}




/*
5 5 18
7 1 9 3 8


4 2 10
7 4 5 6

2 + 3 + 2

*/