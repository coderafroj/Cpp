#include<iostream>
using namespace std;

int* student(int n){
    int* fee=new int[n];
    for(int i=0;i<n;i++){
        fee[i]=(i+1)*10;
    }
    return fee;

}

int main(){
    int n=6;
    int* fees=student(n);
    for(int i=0;i<n;i++){
        cout<<fees[i]<<endl;
    }
    delete[] fees;

}