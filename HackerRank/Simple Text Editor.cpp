#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    stack<string> stack;
    int Q;
    cin >> Q;
    string s = "";
    for (int i = 0; i < Q; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            string added;
            cin >> added;
            stack.push(s);
            s += added;
        }
        else if (op == 2)
        {
            int del;
            cin >> del;
            stack.push(s);
            s = s.substr(0, s.size() - del);
        }
        else if (op == 3)
        {
            int printed;
            cin >> printed;
            cout << s[printed - 1] << "\n";
        }
        else if (op == 4)
        {
            s = stack.top();
            stack.pop();
        }
    }
}