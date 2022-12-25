#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(9);
    q.push(3);
    q.push(4);
    cout << "Size of queue is " << q.size()<<endl;

    cout<<"front element of queue is  "<< q.front() <<endl;
    cout<<"back element of queue is  "<< q.back() <<endl;
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    if (q.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
        cout << "queue is not empty" << endl;
}