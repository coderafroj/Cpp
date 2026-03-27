#include <iostream>
using namespace std;

int sumArray(int studentFee[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=studentFee[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter number of student:-";
    cin>>size;
    int fee[size];
    for(int i=0;i<size;i++){
        cout<<"Enter fee student: "<<i+1<<endl;
        cin>>fee[i];
    }
    int total=sumArray(fee,size);
    cout<<"total fees is- "<<total;
}