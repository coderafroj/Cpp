#include <iostream>
using namespace std;
int main(){
  
   int marks[10];
   cout<<"Enter number of student to add:- ";
   int n;
   cin>>n;
    string name[n];
   for (int i = 0; i < n; i++)
   {
    cout <<"Enter student name : "<<i+1<<endl;
    cin >> name[i];
   }
   for(int i=0;i<n;i++){
    cout << "student "<<i+1<<" "<<name[i]<<endl;
   }
   
    
}