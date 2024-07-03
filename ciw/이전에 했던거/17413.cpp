#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;


void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> ch;
    string s;
    string answer;
    getline(cin,s);
    int len =s.size(),i=0;
    while(i!=len) {
        if(s[i]=='<') {
            if(!ch.empty()) {
                int len_st=ch.size();
                for(int i=0;i<len_st;i++) {
                    answer+=ch.top();
                    ch.pop();
                }
            }
            for(int j=i;j<=len;j++) {
                if(s[j]=='>') {
                    answer+=s[j];
                    i=j;
                    break;
                }
                answer+=s[j];
            }
        }
        else if(s[i]==' ') {
            if(ch.empty())  { 
                i++;
                continue;
            }
            int len_st=ch.size();
            for(int i=0;i<len_st;i++) {
                answer+=ch.top();
                ch.pop();
            }
            answer+=' ';
        }
        else {
            ch.push(s[i]);
        }
        i++;
    }
    if(!ch.empty()) {
        int len_st=ch.size();
        for(int i=0;i<len_st;i++) {
            answer+=ch.top();
            ch.pop();
        }
    }
    cout << answer <<'\n';
    return;
}

int main(void) {
    init();
    return 0;
}