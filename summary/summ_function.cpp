#include <iostream>
using namespace std;
int chaiOrder(string chai[],int &n){
    cout<<"How much cups chai  would you like\n";
    cin>>n;
    cin.ignore();
    cout<<"which types of tea would you like?\n";
    for(int i=1;i<=n;i++){
        cout<<"type "<<":"<<i<<endl;
        getline(cin,chai[i]);
    }
return 1;

    
}
int seeOrder(string chai[],int n){
    cout<<"your order: \n";
    for(int i=1;i<=n;i++){
        cout <<i<<"."<<chai[i]<<endl;
    }
    return 0;

}

int main(){

     int n;
     string chai[100];
     chaiOrder(chai,n);
     seeOrder(chai,n);

}