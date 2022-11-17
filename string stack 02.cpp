#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   stack<char>st;
  for(auto u:s)
  {
      st.push(u);
  }
  while(!st.empty())
  {
      cout<<st.top()<<endl;
      st.pop();
  }
}

