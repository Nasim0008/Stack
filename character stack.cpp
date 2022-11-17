
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char>s;
    s.push('A');
     s.push('B');
     s.push('C');
     s.push('D');
     s.push('E');
     while(!s.empty())
     {
         cout<<s.top()<<endl;
         s.pop();
     }
}

