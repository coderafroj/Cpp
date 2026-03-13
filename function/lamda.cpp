#include <iostream>
using namespace std;
int main(){
    auto course=[](string name){
        cout<<"your course is "<<name;
    };
    course("python");
}