#include <iostream>
using namespace std;


class Atm{
    private:

        string name;
        int age;
        long long int mobilenum;
        float balance;
        string acc_number;
       
    public:

        Atm(string usr_name, int usr_age,int usr_bal,string usr_acc_num,long long int usr_mob_num){

            name = usr_name;
            age = usr_age;
            balance = usr_bal;
            acc_number = usr_acc_num;
            mobilenum =  usr_mob_num;
        
        }

        void menu(){

            cout << endl << "------------------------------Welcome to the Virtual ATM System----------------------------------" << endl;
            cout << "Select an option or type -1 to exit: " << endl << endl;
            cout << "1. Check your Balance" << endl;
            cout << "2. Withdraw Cash" << endl;
            cout << "3. Fetch User Details" << endl;
            cout << "4. Update Mobile Number" << endl << endl; 

        }

        void checkbal(){
            cout << "Your account balance is: " << balance << endl;
        }

        void cashwithdraw(float w_amount){

            balance = balance - w_amount;
            cout << "Amount Withdrawn !" << endl; 

        }

        void getdetails(){
            cout << "User Name: " << name << endl;
            cout << "User Age: " << age << endl;
            cout << "User Mobile Number: " << mobilenum << endl;
            cout << "User Balance: " << balance << endl;
            cout << "User Account Number: " << acc_number << endl;
        }

        void updateno(int newnum){
            mobilenum = newnum;
            cout << endl << "Mobile Number Updated !" << endl;
        }

};


int main(){

    Atm usr1("Rohan Gupta",27,54000,"63AX323291Q",9891278124); 

    int op;
    float withdraw_amt;
    long long int newnum;


    while(1){
        
        usr1.menu();

        cout << "Your Choice: "; cin >> op;


        if(op==1){
            usr1.checkbal();
            
        }
        else if(op==2){
            cout << "Enter Withdraw Amount: " ; cin >> withdraw_amt;
            usr1.cashwithdraw(withdraw_amt);
        }
        else if(op==3){

            usr1.getdetails();
        }
        else if(op==4){
            cout << "Enter your new mobile number: "; cin >> newnum;
            usr1.updateno(newnum);
        }
        else if(op==-1){
            break;
        } 
        else{
            cout << "Please enter a valid Operation !" << endl;
        }

    }


    return 0;
}