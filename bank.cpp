#include <iostream>
#include <math.h>

using namespace std;

class Account {
    protected:
        string name;
        int accno;
        string atype;
        int bal;
    
    public:
        static int to_assign;

        void display() { 
            cout << "==================================================" << endl;
            cout << "Holder's name: " << name <<endl;
            cout << "Account number: " << accno << endl;
            cout << "Account Type: " << atype << endl;
            cout << "Balance: " << bal << endl;
            cout << "==================================================" << endl;
        }

        void deposit() {
            int n;
            cout << "==================================================" << endl;
            cout << "ENTER AMOUNT TO DEPOSIT: ";
            cin >> n;

            bal = bal+n;

            cout << "DEPOSITED " << n << "SUCCESSFULLY" << endl;
            cout << "==================================================" << endl;
        }
};

int Account::to_assign = 1;

class CurrentAccount: protected Account {
    
    int penalty = 5;

    public:
        CurrentAccount() {
            cout << "========ABCD BANK ACCOUNT CREATION UTILITY========" << endl;
            cout << "\n ACCOUNT TYPE => CURRENT" << endl << endl;

            atype = "CURRENT";

            accno = to_assign++;

            cout << "ENTER ACCOUNT HOLDER'S NAME: ";
            cin >> name;

            bal=1000;
            cout << "==================================================" << endl;

        }

        void minbal() {
            if (bal >= 500) {
                cout << "NO PENALTY IMPOSED" << endl;
            } else {
                bal = bal - penalty;
                cout << "**** PENALTY OF " << penalty << " IMPOSED DUE TO LOW BALANCE ****" << endl;
            }
        }

        
        void withdraw() {
            int n;
            cout << "==================================================" << endl;
            cout << "ENTER AMOUNT TO WITHDRAW: ";
            cin >> n;

            if (bal<n) {
                cout << "**** INSUFFICIENT BALANCE ****" << endl;
            } else {

                bal = bal-n;

                cout << "DEPOSITED " << n << "SUCCESSFULLY" << endl;
            }

            minbal();
            cout << "==================================================" << endl;
        }
};

class SavingsAccount: protected Account {
    int intrest_rate = 7;
    int intrest_times = 0;

    public:
        SavingsAccount() {
            
            cout << "========ABCD BANK ACCOUNT CREATION UTILITY========" << endl;
            cout << "\n ACCOUNT TYPE => SAVINGS" << endl << endl;

            atype = "SAVINGS";
            
            accno = to_assign++;

            cout << "ENTER ACCOUNT HOLDER'S NAME: ";
            cin >> name;

            bal=1000;
            cout << "==================================================" << endl;
        }

        int intrest() {
            intrest_times++;
            int i = bal * pow((1 + ( intrest_rate / 100 )),  intrest_times);

            return (i-bal);
        }

        
        void withdraw() {
            int n;
            cout << "==================================================" << endl;
            cout << "ENTER AMOUNT TO WITHDRAW: ";
            cin >> n;

            if (bal<n) {
                cout << "**** INSUFFICIENT BALANCE ****" << endl;
            } else {
                bal = bal-n;
                cout << "DEPOSITED " << n << "SUCCESSFULLY" << endl;
            }
            cout << "==================================================" << endl;
        }
};

int main() {

    CurrentAccount ca; SavingsAccount sa;
    
    return 0;
}