
#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
	cout <<"Enter your name:-";
	//input lena
	getline(cin,name);//space ke baad ka bhi count krta hai
	cout <<"Hello "<<name<< "tell your age"<<name;
	cin >>age;//space ke baad ka count nhi karta hai
	cout <<"Name: "<<name << "\nAge: "<<age;
	
}
