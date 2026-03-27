#include<iostream>
using namespace std;
int main(){
    int pcmMarks[3][3]={
        {65,76,87},
        {98,46,79},
        {90,76,98}
    };
    for(int i=0;i<3;i++){
        cout<<"student: "<<i+1<<" marks"<<endl;
        for(int j=0;j<3;j++){
            cout<<pcmMarks[i][j]<<endl;
        }
    }
}