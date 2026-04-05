#include <iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    public:
        BankAccount(string number,double money){ 

            accountNumber=number;
            balance=money;

        }
        double getBalence(){
            return balance;
        }
        void deposit(double amount){
            if(amount>0){
                balance+=amount;

            }
            else{
                cout<<"invalid deposit";
            }

        }
        void withdrawl(double amount){
            if(amount>0 &&amount<=balance){
                balance-=amount;
            }
            else{
                cout<<"bhk";
            }
        }
        void see(){
            cout<<balance<<endl;
            cout<<accountNumber<<endl;
        }
};
int main(){
    BankAccount user1("2353",10000);
    // user1.see();
    cout<<user1.getBalence();
    user1.deposit(10000);
    user1.withdrawl(500);
    user1.see();
}