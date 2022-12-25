#include <iostream>
#include <queue>
using namespace std;

struct applicant
{
    string name;
    string currentTime;
};
    applicant getEntry()
    {
        applicant temp;
        int intTime = 30 * 60;
        cout << "Enter your name : " << endl;
        cin >> temp.name;
        cout << "Enter Current Time" << endl;
        cin >> temp.currentTime;
        return temp;
    }

int main()
{
   queue<applicant> q;
   int n;
   cout<< " Enter no of applicants "<<endl;
   cin >> n;

   for(int i=0; i<n ;i++){
     q.push(getEntry());
   }
   applicant temp;
   for(int i=0 ; i < n; i++)
   {
        temp = q.front();
        cout << "Applicant Name : " << temp.name <<"    Your Interview time is : " << temp.currentTime << endl;
        q.pop();
   } 
}