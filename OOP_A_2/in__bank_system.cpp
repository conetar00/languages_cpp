// In Progress

#include <iostream>
#include <cstring>

#define ARR_MAX 100
#define NAME_MAX 20

using namespace std;

// Header File Section

class Menu
{
private:
    int menu_n;

public:
    void showSystemMenu();
    void selectSystemMenu();

    void openAccount();
    void depositMoney();
    void withdrawalMoney();
    void showAccountInfo();
};

class Account
{
private:
    int a_id;
    int balance;
    char *c_name;

public:
    Account(int id, int money, char *name)
    {
        a_id = id;

        balance = money;

        c_name = new char[(strlen(name) + 1)];
        strcpy(c_name, name);
    }
    ~Account()
    {
        delete c_name;
    };

    void getAccountId();
    void getBalance();
    void getCustomerName();
};

// Main File Section

Account *acc_arr[ARR_MAX];
int acc_num = 0;

int main(void)
{
    Menu menu;

    menu.showSystemMenu();
    menu.selectSystemMenu();

    return 0;
};

// Source File Section

void Menu::showSystemMenu()
{
    cout << "-------- Menu --------" << endl;
    cout << "1. Open Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. Account Information" << endl;

    cout << "0. Exit" << endl;
};
void Menu::selectSystemMenu()
{
    int n;

    cout << "Enter a Number : ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << endl;
        cout << "START : Open Account" << endl;
        cout << endl;
        openAccount();
        break;
    case 2:
        cout << endl;
        cout << "START : Deposit" << endl;
        cout << endl;
        depositMoney();
        break;
    case 3:
        cout << endl;
        cout << "START : Withdrawal" << endl;
        cout << endl;
        withdrawalMoney();
        break;
    case 4:
        cout << endl;
        cout << "START : Account Information" << endl;
        cout << endl;
        showAccountInfo();
        break;

    case 0:
        cout << endl;
        cout << "<< ALERT : Exit >>" << endl;
        cout << endl;
        break;
    };
};

void Menu::openAccount()
{
    int a_id;
    int balance;
    char c_name[NAME_MAX];

    cout << "Enter an Account ID : ";
    cin >> a_id;
    cout << "Enter a Balance : ";
    cin >> balance;
    cout << "Enter a Customer Name : ";
    cin >> c_name;

    cout << endl;
    cout << "-------- New Account Information --------" << endl;
    cout << "Account ID : " << a_id << endl;
    cout << "Balance : " << balance << endl;
    cout << "Customer Name : " << c_name << endl;
    cout << endl;

    acc_arr[acc_num] = new Account(a_id, balance, c_name);
    acc_num++;
};
void Menu::depositMoney()
{
    cout << "TEST : TRUE" << endl;
};
void Menu::withdrawalMoney()
{
    cout << "TEST : TRUE" << endl;
};
void Menu::showAccountInfo()
{
    int id;
    int n = -1;

    cout << "Enter an Account ID : ";
    cin >> id;

    for (int i = 0; i < ARR_MAX; i++)
    {
        if ((acc_arr[i]->getAccountId(id)) == id)
        {
            n = i;

            break;
        }
        else
        {
            continue;
        }
    }

    if (0 <= n <= ARR_MAX)
    {
        cout << "-------- Account Information --------" << endl;
        cout << "Account ID : " << id << endl;
        cout << "Balance : " << acc_arr[n]->getBalance() << endl;
        cout << "Customer Name : " << acc_arr[n]->getCustomerName() << endl;
    }
};

void Account::getAccountId()
{
    cout << "TEST : TRUE" << endl;
};
void Account::getBalance()
{
    cout << "TEST : TRUE" << endl;
};
void Account::getCustomerName()
{
    cout << "TEST : TRUE" << endl;
};