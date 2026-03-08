
#include <iostream>
 using namespace std;
 int main(){
 int cup;
  cout<<"How many order cup of tea:-";
  cin>>cup;
  double ppa=20.99,totalPrice,discount;
  totalPrice=ppa*cup;
  if(cup>20){
  	discount=0.20;
  	
  }else if(cup>=10 && cup<=20){
     discount=0.10;
  }else{
  	discount=0;
  }
  totalPrice-=discount*totalPrice;
  cout <<"Total price for discount:-"<<totalPrice;
  
 }
