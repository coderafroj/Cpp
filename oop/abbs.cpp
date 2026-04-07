    #include <iostream>
    using namespace std;
    
    class Students{
        public:
            virtual void loginStudent()=0;
            virtual void ageCheker()=0;
            virtual void learning()=0;

        void addstudent(){
            ageCheker();
            learning();
            loginStudent();
        }

    };
    //derive class
    class Student:public Students{
        void loginStudent() override{
            cout<<"student is login"<<endl;
        }
        void ageCheker() override{
            cout<<"student age is true"<<endl;
        }
        void learning() override{
            cout<<"Student is runing learning\n";
        }

    };
    int main(){
        Student firoj;
        firoj.addstudent();
        
    }