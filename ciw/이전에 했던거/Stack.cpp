#include <iostream>
#include <vector>

using namespace std;

vector<char> stacks;

void s_push(char a) {
    stacks.push_back(a);
    return;
}

void s_pop() {
    if(stacks.empty()) {
        cout << "자료가 없습니다.\n";
    }
    else{
        int len=stacks.size();
        cout << stacks[0] <<'\n';
        stacks.erase(stacks.begin());
    }
    return;
}

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << "1 : ";
    s_pop();
    cout << "2 : ";
    s_push('a');
    cout << "\n3 : ";
    s_pop();
    
}

int main( void) {
    init();
    return 0;
}