#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string infix) {
    string postfix = "";
    stack<char> s;
    s.push('N');
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] >= 'a' && infix[i] <= 'z') postfix += infix[i];
        else if (isOperator(infix[i])) {
            while (s.top() != 'N' && precedence(s.top()) >= precedence(infix[i])) {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
        else if (infix[i] == '(') s.push(infix[i]);
        else if (infix[i] == ')') {
            while (s.top() != 'N' && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
    }
    while (s.top() != 'N') {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string infix;
        cin >> infix;
        cout << infixToPostfix(infix) << endl;
    }
    return 0;
}


#Question
https://www.codechef.com/problems/ONP?tab=statement
