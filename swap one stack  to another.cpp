#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< "Before swapint "<<endl;
    vector<int>v(5);
    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    stack<int>stack1;
    for(auto u:v)
    {
        stack1.push(u);
    }

    vector<int>p(5);
    for(int i=0; i<5; i++)
    {
        int b;
        cin>>b;
        p.push_back(b);
    }
    stack<int>stack2;
    for(auto u:p)
    {
        stack2.push(u);
    }
     stack1.swap(stack2);
    cout<< "After Swapping "<<endl;
    cout<< "First stack: ";
    while(!stack1.empty())
    {
        cout<< stack1.top()<< " ";
        stack1.pop();
    }
    cout<<endl;
    cout<< "Second stack: ";
    while(!stack2.empty())
    {
        cout<< stack2.top()<< " ";
        stack2.pop();
    }
    cout<<endl;

}

