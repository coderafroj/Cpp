#include <iostream>
#include <vector>
using namespace std;
//class se instance banate hai to by default constructore call hota hai behind the scene
//a constructer is a special mathod that is automatically called when an object  of a class is crated.
//constructer has the same name as the class
class Chai{
public://access modifiers
    string chai;
    int servings;
    vector<string> ingredients;

    //default construtor

    Chai(){
        //instance bante hi ye value set ho jeygni
        chai="masala chai";
        servings=2;
        ingredients={"water ","tea leaves"};
        cout<<"constructor called"<<endl;
    }
    void show(){
        cout<<"chai name: "<<chai<<endl;
        cout<<"servings: "<<servings<<endl;
        for(string ing:ingredients){
            cout<<ing<<" ";
        }
    }

};

int main(){
    Chai chaiOne;//constructore call ho gya 
    //see value to defult ocnstrctor
    chaiOne.show();
    

}