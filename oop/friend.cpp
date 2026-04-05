#include <iostream>
using namespace std;

 class Coder{
    private:
        int code;
        string name;
    public:
        Coder(int c,string n):code(c),name(n){}
        // same to above
        // Coder(int c){
        //     code=c;
        // }
        friend string C(Coder codes);
 };
 string C(Coder codes){
     return codes.name;
     
 }
int main(){
    Coder code1(4,"afroj");
    cout<<C(code1);
    

}