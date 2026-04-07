#include <iostream>
using namespace std;

class Bytecore{
    protected:
        int students;
        string branch;
    public:
        Bytecore(int std,string br):students(std),branch(br){
            cout<< "bcc constructer called "<<students<<endl;

        }
        virtual void add(){
            cout<<"addmissin now studnents "<<students<<endl;
        }
        virtual void enquiry(){
            cout<<"enquiry of bytecore "<<endl;
        }
        virtual ~Bytecore(){
            cout<<"bytecor destructer called"<<endl;
        }
};

class Student:public Bytecore{
    public:
        Student(string branch):Bytecore(100,branch){
            cout<<"student constructer called"<<endl;
        }
        void add()override{
            cout<<"addminsino override"<<endl;
        }
        void enquiry()override{
            cout<<"Enquiry done"<<endl;
        }
        ~Student(){
            cout<<"student destructer called"<<endl;
        }
};
class Admin:public Bytecore{
    public:
        Admin(string branch):Bytecore(150,branch){
            cout<<"ADminconstructer called"<<endl;
        }
        void add() override{
            cout<<"admin or add"<<endl;

        }
        ~Admin(){
            cout<<"admin destructe called";
        }
};

// class Owner:public Admin{
//     public:
//         void add() override{
//             cout<<"owner adding student"<<endl;
// }
// }


int main (){
    Bytecore* std1= new Student("kesarpur");
    Bytecore* std2= new Admin("nariywal");
    std1->enquiry();
    std1->add();

    std2->enquiry();
    std2->add();
     
    delete std1;
    delete std2;

}