#include<bits/stdc++.h>
using namespace std;

class BankAccount{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string account_holder,string address,int age, string password){
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand()%1000000000;
        this->balance = 0;
        cout<<"Your account number is: "<<this->account_number<<endl;
    }

    int get_balance(string password){
        if(this->password==password){
            return this->balance;
        }
        else{
            return this->balance;
        }
    }
    void add_money(string pass, int amount){
        if(this->password==pass){
            this->balance+=amount;
            cout<<"Add money successful."<<endl;
        }else{
        cout<<"Password didn't match."<<endl;
        }
    }
    void deposit_money(string pass, int amount){
        if(this->password==pass){
            this->balance-=amount;
            cout<<"Deposit money successful."<<endl;
        }else{
        cout<<"Password didn't match."<<endl;
        }
    }
    friend class MyCash;
};

BankAccount* create_account(){
    string account_holder, address, password;
    int age;
    cout<<"CREATE ACCOUNT"<<endl;
    cout<<"Enter Your Name: ";
    cin.ignore();
    getline(cin, account_holder);
    cout<<"Enter Your Address: ";
    getline(cin, address);
    cout<<"Enter Your Age: ";
    cin>>age;
    cout<<"Create a Password: ";
    cin>>password;

    BankAccount* myAccount= new BankAccount(account_holder, address, age, password);
    return myAccount;
}

void add_money(BankAccount *myAccount){
string password;
int amount;
cout<<"ADD MONEY"<<endl;
cout<<"Enter Your Password: "<<endl;
cin>>password;
cout<<"Enter amount to store: "<<endl;
cin>>amount;
myAccount->add_money(password,amount);
cout<<"Your Bank Balance is: "<<myAccount->get_balance(password)<<endl;
}
void deposit_money(BankAccount *myAccount){
string password;
int amount;
cout<<"DEPOSIT MONEY"<<endl;
cout<<"Enter Your Password: "<<endl;
cin>>password;
cout<<"Enter amount to deposit: "<<endl;
cin>>amount;
myAccount->deposit_money(password,amount);
cout<<"Your Bank Balance is: "<<myAccount->get_balance(password)<<endl;
}
class MyCash{
protected:
    int balance;
public:
    MyCash(){
    this->balance=0;}
    void add_money_from_bank(BankAccount *myAccount, string password, int amount){
        if(myAccount->password==password){
            this->balance+=amount;
            myAccount->balance-=amount;
            cout<<"Add Money from Bank is Successful."<<endl;
        }else{
            cout<<"Password didn't match."<<endl;
        }
    }
    int show_balance(){
    return balance;
    }
};
void add_money_from_bank(MyCash *myCash, BankAccount *myAccount){
    string password;
    int amount;
    cout<<"ADD MONEY FROM BANK"<<endl;
    cout<<"Enter Password: ";
    cin>>password;
    cout<<"Enter Amount: ";
    cin>>amount;
    myCash->add_money_from_bank(myAccount, password, amount);
    cout<<"Your Bank Balance is: "<<myAccount->get_balance(password)<<endl;
    cout<<"My Cash Balance: "<<myCash->show_balance()<<endl;
}
int main(){
    BankAccount *myAccount = create_account();
    MyCash *myCash=new MyCash();
    while(true){
        cout<<"Select an Option: "<<endl;
        cout<<"1. Add Money to Bank"<<endl;
        cout<<"2. Deposit Money from Bank"<<endl;
        cout<<"3. Add Money to MyCash from Bank"<<endl;
        int option;
        cin>>option;
        if(option==1){
            add_money(myAccount);
        }
        else if(option==2){
            deposit_money(myAccount);
        }
        else if(option==3){
            add_money_from_bank(myCash,myAccount);
        }
        else{
            cout<<"Invalid Option."<<endl;
        }
    }
    }
