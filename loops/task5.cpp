
#include <iostream>
 using namespace std;
 int main(){
 string language[5]={"python","java","javascript","assembly","cpp"};
 for(int i=0;i<=5;i++){
 if(language[i]=="assembly"){
 cout <<"skipping "<<language[i]<<"..\n";
 	continue;
 }
 	cout<<"learn "<<language[i]<<"...\n";
 }
 

}
