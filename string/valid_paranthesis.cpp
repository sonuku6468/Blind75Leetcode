#include <stack>
#include <string>
#include<bits/stdc++.h>
using namespace std;
bool checkParentheses(const string& str) {
 stack<char> stk;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[') {
            stk.push(c);
        } else if (!stk.empty() && (c == ')' && stk.top() == '(' ||
                                    c == '}' && stk.top() == '{' ||
                                    c == ']' && stk.top() == '[')) {
            stk.pop();
        } else {
            return false;
        }
    }
    return stk.empty();
}

int main()
{
    //code
    cout << checkParentheses("({})")<<endl;
    cout << checkParentheses("([{}])")<<endl;
    cout << checkParentheses("(\\[])")<<endl;
    cout << checkParentheses("{[MK]}")<<endl;
    
    return 0;
}