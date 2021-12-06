#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int q, op, x;
    cin >> q;
    stack<int> s1, s2, temp;
    for (int i = 0; i < q; i++)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> x;
            s1.push(x);
        }
        else if (op == 2)
        {
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            s2.pop();
        }
        else if (op == 3)
        {
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            cout << s2.top() << "\n";
        }
    }
}