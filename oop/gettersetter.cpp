#include <iostream>
#include <vector>
using namespace std;

class Add{
    private:
        string name;
        vector<string>courses;
        int rollNo;
    public:
        Add(){
            name="coderafroj";
            rollNo=1;
            courses={"adca","mdca"};

        }
        Add(string studentName,int roll,vector<string>content){
            name=studentName;
            rollNo=roll;
            courses=content;

        }
        //gettter 
        string getName(){
            return name;
        }
        //setter
        void setName(string n){
            name=n;
        }


};

int main(){
    Add one;
    one.setName("afroj");
    cout<<one.getName();

}