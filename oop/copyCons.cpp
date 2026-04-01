#include<iostream>
#include <vector>
using namespace std;
class Chai{
    public:
        string* name;
        int serving ;
        vector<string> ingredients;
        void see(){
            cout<<"chai name "<<*name<<endl;
            cout<<"serving "<<serving<<endl;
            for(string ing:ingredients){
                cout<<ing<<" ";

            }
            cout<<endl;
        }
        //constructer
        Chai(string chaiName,int serve,vector<string>ing){
            name=new string(chaiName);
            serving=serve;
            ingredients=ing;

        }
        ~Chai(){
            delete name;
            cout<<"destructer called";
        }
        Chai(Chai& other){
        name=new string(*other.name);
        serving=other.serving;
        ingredients=other.ingredients;
            
        }
};
int main(){
    Chai Lemon("lemon tea",4,{"water ","tea leaves"});
    cout<<"og chai\n";
    Lemon.see();
    cout<<"copy chai\n";
    Chai copy=Lemon;
    copy.see();
    *Lemon.name="orange chai";//change value in original
    copy.see();
    cout<<"modified og\n";
    Lemon.see();
    cout<<"copy chaiafter modified\n";
    copy.see();//no effect copy seprately value add;

// 
}
