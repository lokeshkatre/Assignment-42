#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(32);
    q.push(12);
    q.push(21);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}