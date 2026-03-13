//pass by value/call by value
// pass by reference/call by reference
#include <iostream>
using namespace std;
void payment(int cash){
    cash=cash*2;
    cout <<"yout payment is "<<cash<<endl;
}
int main(){
    int amount=1200;
    payment(amount);
    cout <<"og amount is "<<amount<<endl;

     
}