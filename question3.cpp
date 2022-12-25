#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(23);

    if(q.size()==0)
    cout<<"Queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;

    q.pop();
    if(q.size()==0)
    cout<<"Queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;
    
    q.pop();
    if(q.size()==0)
    cout<<"Queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;

}
