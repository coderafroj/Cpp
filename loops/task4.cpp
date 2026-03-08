#include <iostream>
 using namespace std;
 int main(){
 string response;
 while(true){
 	cout<<"do you want to more tea:-";
 	getline(cin,response);
 	if(response=="stop"){
 		break;
 	}
 	cout<<"\nDo you want another tea:-\n";
 }
 cout<<"no more tea served\n";

}
