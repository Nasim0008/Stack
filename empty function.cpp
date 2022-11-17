#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    stack<int>s;
    int sum =0;
    for(auto u:v)
    {
        s.push(u);
    }
    while(!s.empty())
    {
        cout<< s.top()<< " ";
        sum+=s.top();
        s.pop();
    }
    cout<<endl;
    cout<<sum<<endl;

}

