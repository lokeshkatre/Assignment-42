#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<char> q;
    q.push('a');
    q.push('b');
    q.push('g');

    cout<< "The queue q is :";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}