#include <iostream>
#include <cstring>

using namespace std;

namespace COM_POS
{
    enum
    {
        CLERK = 1,
        SENIOR = 2,
        ASSIST = 3,
        MANAGER = 4
    };

    void showPositionInfo(int p)
    {
        switch (p)
        {
        case 1:
            cout << "Clerk" << endl;
            break;
        case 2:
            cout << "Senior" << endl;
            break;
        case 3:
            cout << "Assist" << endl;
            break;
        case 4:
            cout << "Manager" << endl;
            break;
        };
    };
};

class NameCard
{
private:
    char *name;
    char *company;
    char *phone_number;
    int position_number;

public:
    NameCard(char *ptr_n, char *ptr_c, char *ptr_pn, int p)
    {
        name = new char[strlen(ptr_n) + 1];
        strcpy(name, ptr_n);

        company = new char[strlen(ptr_c) + 1];
        strcpy(company, ptr_c);

        phone_number = new char[strlen(ptr_pn) + 1];
        strcpy(phone_number, ptr_pn);

        position_number = p;
    };
    ~NameCard()
    {
        delete name;
        delete company;
        delete phone_number;
    };
    void showNameCardInfo();
};

int main(void)
{
    NameCard manClerk("Lee", "ABC_Company", "010-1111-2222", COM_POS::CLERK);
    NameCard manSenior("Hong", "DEF_Company", "010-3333-4444", COM_POS::SENIOR);
    NameCard manAssist("Kim", "GHI_Company", "010-5555-6666", COM_POS::ASSIST);

    manClerk.showNameCardInfo();
    manSenior.showNameCardInfo();
    manAssist.showNameCardInfo();

    return 0;
};

void NameCard::showNameCardInfo()
{
    cout << "-------- Name Card --------" << endl;
    cout << "Name : " << name << endl;
    cout << "Company : " << company << endl;
    cout << "Phone Number : " << phone_number << endl;
    cout << "Position : ";
    COM_POS::showPositionInfo(position_number);
    cout << endl;
    cout << "-------- --------" << endl;
};
