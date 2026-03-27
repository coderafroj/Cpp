#include <iostream>
#include <vector>
using namespace std;
class Student{
    public:
        //data member (attribute)
        string name;
        int age;
        vector<string> hobbies;//list of hobbies for student
        string address;
        //member function
        void showDetails(){
            cout<<"Student Name: "<<name<<endl;
            cout<<"Student Age: "<<age<<endl;
            for(string hobby:hobbies){
                cout<<hobby<<" ";
            }
            cout<<endl;
        }
    };
int main(){
    Student std1;
    std1.name="Afroj";
    std1.age=19;
    std1.address="kesarpur";
    std1.hobbies={"coding","programming"};
    std1.showDetails();
    Student std2;
    std2.name="firoj ";
    std2.age=23;
    std2.address="bareilly";
    std2.hobbies={"trqavling ","reading"};
    std2.showDetails();
}