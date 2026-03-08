
#include <iostream>
  using namespace std;
  int main(){
   int choice ;
   cout <<"1.Green Tea\n 2.Lemon Tea\n 3.Black Tea";
   cout <<"Choos your fav tea:-";
   cin>>choice;
   switch(choice){
   case 1:
         cout<<"Green Tea :$10";
         break;
   case 2:
         cout<<"Lemon Tea:$5";
         break;
   case 3:
         cout <<"Black tea $3";
         break;
   default:
          cout<<"not avilable";
   	
   }

 }
