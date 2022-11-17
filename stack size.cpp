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
    cout<< "Size : "<< s.size()<<endl;
   int cnt=0;

    while(!s.empty())
    {
             s.pop();
             cnt++;
    }
    cout<< "Size : "<<cnt<<endl;
}

