#include <iostream>


#define MAX_NUM 16

using namespace std;

int N;
int answer=0;
int cur[MAX_NUM];

bool check_loc(int x) {
    for(int i=0;i<x;i++) {
         if(cur[i]==cur[x] || abs(cur[x]-cur[i])==x-i) return false;
        
    }

    return true;

}

void dfs_check(int x) {
    if(x==N) {
        for(int i=0;i<N;i++) {
            cout << cur[i] << ' ';
        }
        cout <<'\n';
        answer++;
        return;
    }
    for(int i=0;i<N;i++) {
        cur[x]=i;
        
        if(check_loc(x)) 
            dfs_check(x+1);
    }
}

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>N;
    dfs_check(0);
    cout <<answer <<'\n';
}

int main(void) {
    init();
    return 0;
}