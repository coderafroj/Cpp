
#include <iostream>
using namespace std;
int main(){
	int hour;
	cout << "Enter Time (0-23)";
	cin>>hour;
	if(hour>8 && hour<18){
		cout <<"shop is OPEN";
	}else{
		cout<<"shop is CLOSED";
	}
}
