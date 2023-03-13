#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                cout << "NO" << endl;
                return 0;
            }
            char ch = st.top();
            st.pop();
            if ((s[i] == ')' and ch == '(') or ((s[i] == '}' and ch == '{')) or ((s[i] == ']' and ch == '[')))
            {
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if (st.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}