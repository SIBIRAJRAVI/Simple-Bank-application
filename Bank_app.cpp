// Simple Bank Management System
#include <iostream>
#include <cstdlib>
using namespace std;

class bank
{
    string name, address, ch;
    float balance;

public:
    void open_account();
    void deposit_account();
    void withdraw_account();
    void check_account();
};

void bank::open_account()
{
    cout << "Enter Your Full Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Your Address: ";
    getline(cin, address);
    cout << "Account Type Choose saving (s) or current (c): ";
    cin >> ch;
    
    cout << "Enter Amount For Deposit: ";
    cin >> balance;
    
    if(ch=="s"){
        if(balance<500){
            cout<<"enter a minimum amount of 500 for savings account"<<"\n";
        }
        else{
            cout << "\nAccount Successfully Created!" << endl;  
        }
    }
    else if (ch=="c"){
        if(balance<5000){
            cout<<"enter a minimum amount of 5000 for current account"<<"\n";
        }
        else{
            cout << "\nAccount Successfully Created!" << endl;    
        }
       
    }
    else{
        cout << "\nAccount Successfully Created!" << endl;
        
    }
}

void bank::deposit_account()
{
    float bal;
    cout << "Enter How Much You Deposit: ";
    cin >> bal;
    balance += bal;
    
    cout << "Your Current Balance is: " << balance << endl;
}

void bank::check_account()
{
    cout << "Your Name: " << name << endl;
    cout << "Your Address: " << address << endl;
    cout << "Your Account Type: " << ch << endl;
    if(ch=="s"){
        if(balance<500){
            cout<<"Need to deposite amount"<<"\n";
        }
        else{
            cout << "Your Balance: " << balance << endl;
            
        }
    }
    else if (ch=="c"){
        if(balance<5000){
            cout<<"Need to deposite amount"<<"\n";
        }
        else{
             cout << "Your Balance: " << balance << endl;
            
        }
    }
}

void bank::withdraw_account()
{
    float amount;
    cout << "Enter Your Withdraw Money: ";
    cin >> amount;
    balance -= amount;
    cout << "After withdraw your current Balance: " << balance << endl;
}

int main()
{
    int answer;
    char x;
    bank obj;

    do
    {
        system("cls");
        cout << "\n\nBank Management System" << endl
             << endl;
        cout << "1) Open Account" << endl
             << endl;
        cout << "2) Deposit Money" << endl
             << endl;
        cout << "3) Withdraw Money" << endl
             << endl;
        cout << "4) Check Account" << endl
             << endl;
        cout << "5) Exit" << endl
             << endl;
        cout << "Select An Option from here 1/2/3/4/5: ";
        cin >> answer;
        switch (answer)
        {
        case 1:
            cout << "\n1) Open Account" << endl
                 << endl;
            obj.open_account();
            break;
        case 2:
            cout << "\n2) Deposit Money" << endl
                 << endl;
            obj.deposit_account();
            break;
        case 3:
            cout << "\n3) Withdraw Money" << endl
                 << endl;
            obj.withdraw_account();
            break;
        case 4:
            cout << "\n4) Check Account" << endl
                 << endl;
            obj.check_account();
            break;
        case 5:
            cout << "\nExiting program..." << endl;
            exit(0);
        default:
            cout << "\nENTER VALID OPTION" << endl;
        }

        cout << "\nDo you want to continue (y/n)? ";
        cin >> x;
    } while (x == 'y' || x == 'Y');

    cout << "\nExiting program..." << endl;
    return 0;
}
