#include <iostream>
#include <vector>
#include <string>

using namespace std;

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cap=4;
    int n=5;
    int deliveries[5] = {1,0,3,1,2};
    int pickups[5]={0,3,0,4,0};
    long long answer = -1;
    vector<int> deli,pick;
    int i=n-1,check=0;
    while(i>=0) {
        if(check==0 && deliveries[i]>0) {
            check=n;
            deli.push_back(i+1);
        }
        if(deliveries[i]>0) {
            if(check>=deliveries[i]) {
                check-=deliveries[i];
                deliveries[i]=0;
                i--;
            }
            else {
                deliveries[i]-=check;
                check=0;
            }
        }
    }
    i=n-1;
    check=0;
    while(i>=0) {
        if(check==0 && pickups[i]>0) {
            check=n;
            pick.push_back(i+1);
        }
        if(pickups[i]>0) {
            if(check>=pickups[i]) {
                check-=pickups[i];
                pickups[i]=0;
                i--;
            }
            else {
                pickups[i]-=check;
                check=0;
            }
        }
    }
    int len_pick=pick.size();
    int len_deli=deli.size();
    if(len_pick>len_deli) {
        for(int i=0;i<len_pick-len_deli;i++) {
            deli.push_back(0);
        }
    }
    else if(len_pick<len_deli){
        for(int i=0;i<len_deli-len_pick;i++) {
            pick.push_back(0);
        }
    }
    for(int i=0;i<len_pick;i++) {
        if(deli[i]>pick[i]) {
            answer+=deli[i]*2;
        }
        else {
            answer+=pick[i]*2;
        }
    }
}

int main(void) {
    init();
    return 0;
}