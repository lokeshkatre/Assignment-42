#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> queue1, queue2;
    int v=23;
    for(int i=0; i<5; i++)
    {
        queue1.push(v);
        v++;
    }
    for(int i=0; i<4 ;i++)
    {
        queue2.push(v+2);
        v++;
    }
    queue1.swap(queue2);

    cout << "queue1 : ";
    while(!queue1.empty())
    {
        cout << queue1.front() << " ";
        queue1.pop();
    }
    cout<< endl << "queue2 : ";
    while(!queue2.empty())
    {
        cout<< queue2.front() << " ";
        queue2.pop();
    }

}