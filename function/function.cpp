#include <iostream>
using namespace std;
//function syntax
/*
    returnType funtionName(parameter){
    //code
    }
*/
int temp(int temp){
    return temp;
}
void greet(){
    cout<<"Hello buddy\n";
}
//decleration of funtion
int serveChai(int cups);

//default value set ex black tea is deafult value
//seveChai same name but funtion overloading function descide parameter aspect 
void serveChai(string chai="black tea"){
    cout<<"serving "<<chai;
}
int main(){
    int tempr=temp(10);
    serveChai();
    greet();
    // cout <<tempr;

}
//defination of funtion
int serveChai(int cups){
    cout <<"serving "<<cups<<" of cups\n";
}