#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<char> q;
    q.push('a');
    q.push('b');
    q.push('g');
    q.pop();
    cout<<endl << "Queue after poping is: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}