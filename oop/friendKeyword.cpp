#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int noOfStudent;
    public:
        //constructer parameter alag syntax
        Student(string stdName,int nos):name(stdName),noOfStudent(nos){}
        friend bool cmp(const Student &std1,const Student &std2);
        void display()const{
            cout<<"name: "<<name<<endl;
            cout<<"number of student: "<<noOfStudent;
        }
};
bool cmp(const Student &std1,const Student &std2){
    return std1.noOfStudent>std2.noOfStudent;
}
int main(){
    Student std1("afroj",7);
    Student std2("arjun",8);
    
    
    if(cmp(std1,std2)){
        cout<<"student first more student"<<endl;

    }else{
        cout<<"less student first"<<endl;

    }

  

}