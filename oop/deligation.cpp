#include <iostream>
#include <vector>
using namespace std;

class Chai{
    public:
        string name;
        int serving;
        vector<string> ingredients;

        //deligation constructer
        Chai(string name):Chai(name,2,{"water","honey","milk"}){}

        Chai(string chai,int serve,vector<string> ing){
            name=chai;
            serving=serve;
            ingredients=ing;
        }
        void see(){
            cout<<"Chai is "<<name<<endl;
            cout<<"serve "<<serving<<endl;
            for(string ingredient:ingredients){
                cout<<ingredient<<" ";
            }
        }

};
int main(){
    Chai quic("fast chai",5,{"millk"});
    quic.see();

}