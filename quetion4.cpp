#include <iostream>
#include <queue>
#include<algorithm>
using namespace std;
int main()
{
    bool choice = 1;
    queue<string> q;
    string str;
    while(choice)
    {
        cout << "Press 1 for more words else 0" << endl;
        cin >> choice;
        if(choice==0)
        break;
        cout << "Enter a word string" << endl;
        cin >> str;
        q.push(str);
    }
    int size=q.size();
    string temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = q.front();
        q.pop();
    }
    sort(temp,temp+size);
    for(int i=0;i<size;i++)
    {
        q.push(temp[i]);
    }
    cout<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" "<<endl;
        q.pop();
    }
    return 0;
}