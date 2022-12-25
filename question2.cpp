#include <iostream>
#include <queue>
#include <math.h>
#include <time.h>
using namespace std;
class Ticket
{
public:
    string passenger;
    int tnumber;
};
Ticket ticket_counter(queue<Ticket> q)
{
    Ticket temp;
    cout << "Enter your name: ";
    cin >> temp.passenger;
    srand(time(NULL));
    temp.tnumber = rand();
    return temp;
}

void printTicket(queue<Ticket> q)
{
    Ticket temp;
    cout << "| Ticket Number  |      Passenger Name         |" << endl;
    cout << "|----------------------------------------------|" << endl;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        cout << "       " << temp.tnumber << "             " << temp.passenger<< endl;
    }
    cout << "|----------------------------------------------|"<<endl;
}
int main()
{
    queue<Ticket> q;
    int size;
    cout << "Enter the number of Passenger : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        q.push(ticket_counter(q));
    }
    printTicket(q);
}