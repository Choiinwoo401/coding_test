#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

int count_bar(stack<char> cs) {
    int count =0,check=0;
    char s=cs.top();
    while(1) {
        if(cs.empty())
            break;
        s=cs.top();
        cs.pop();
        if(s==')') {
            if(cs.top()==')') {
                check++;
            }
            else {
                cs.pop();
                count+=check;
            }
        }
        else {
            count++;
            check--;
        }
    } 
    return count;
}

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    stack<char> cs;
    cin >> s;
    int len=s.size();
    for(int i=0;i<len;i++) {
        cs.push(s[i]);
    }
    cout << count_bar(cs) <<'\n';
}

int main(void) {
    init();
    return 0;
}