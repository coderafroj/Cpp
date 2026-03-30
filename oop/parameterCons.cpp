#include<iostream>
#include <vector>
using namespace std;
class LoginForm{
    public:
        string username;
        string password;
        int uid;
        vector<string>isCheck;
        //paramter constructer
        LoginForm(int id,string name,string p,vector<string> check){
            uid=id;
            username=name;
            password=p;
            isCheck=check;
            cout<<"parameter constructer";
        }
        //member function
        void seeDetails(){
            cout<<"unique id is "<<uid<<endl;
            cout<<"username is "<<username<<endl;
            cout<<"password is "<<password<<endl;
            cout<<"check backend server this check "<<endl;
            for(string data:isCheck){
                cout<<data<<endl;
            }

        }  

};
int main(){
    LoginForm user1(1729,"coderafroj","afroj@2007",{"isLogin","isLogOut","isAdmin"});
    // cout<<user1.password<<endl<<user1.uid<<endl<<user1.username;
    user1.seeDetails();
    LoginForm user2(1730,"everymomentmatters","firoj@2001",{"Isowner","isadmin"});
    user2.seeDetails();
    LoginForm copy=user1;
    copy.seeDetails();
    

    return 0;
}