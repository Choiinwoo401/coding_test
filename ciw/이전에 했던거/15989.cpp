#include <iostream>
#include <vector>

using namespace std;

int T;
int num;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int dp[10005][3]={0,};

    dp[0][1]=1;
    dp[1][1]=1;
    for(int i=2;i<10001;i++) {
        dp[i][1]=dp[i-1][1];
        dp[i][2]=dp[i-2][1]+dp[i-2][2]; 
        if(i>2)
            dp[i][3]=dp[i-3][1]+dp[i-3][2]+dp[i-3][3];
    }
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        cout <<dp[N][1]+dp[N][2]+dp[N][3]<<'\n';
    }    
}

int main(void) {
    init();
    return 0;
} 