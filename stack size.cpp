#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string>s;
    s.push("Nasim");
    s.push("pen");
    s.push("Mobile");
    s.push("Calculator");
    s.push("Tessue");
    cout<< s.size()<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}

