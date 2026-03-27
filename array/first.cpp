#include<iostream>
using namespace std;
int main(){
    //array is collection of same data type and contigous memory allocation
    int marks[5]={45,76,34,23,65};
    for(int i=0;i<5;i++){
        cout<<"marks "<<marks[i]<<endl;
    }
    string name[]={"afroj","firoj","rahul"};
    cout<<"first pos "<<name[0]<<endl;
    cout<<"second pos "<<name[1]<<endl;
    cout<<"third pos "<<name[2]<<endl;
}