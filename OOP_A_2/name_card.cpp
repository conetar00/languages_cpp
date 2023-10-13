#include <iostream>
#include <cstring>

using namespace std;

namespace COM_POS
{
    enum
    {
        CLERK,
        SENIOR,
        ASSIST,
        MANAGER
    };

    void showPositionInfo(int p)
    {
        switch (p)
        {
        case 0:
            cout << "Position : Clerk" << endl;
            break;
        case 1:
            cout << "Position : Senior" << endl;
            break;
        case 2:
            cout << "Position : Assist" << endl;
            break;
        case 3:
            cout << "Position : Manager" << endl;
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
    void showNameCardInfo()
    {
        cout << "---- Name Card Info ----" << endl;
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Phone Number : " << phone_number << endl;
        COM_POS::showPositionInfo(position_number);
    };
};

int main(void)
{
    NameCard manClerk("Lee", "ABC_Com", "010-1111-2222", COM_POS::CLERK);
    NameCard manSenior("Hong", "DEF_Com", "010-3333-4444", COM_POS::SENIOR);
    NameCard manAssist("Kim", "GHI_Com", "010-5555-6666", COM_POS::ASSIST);

    manClerk.showNameCardInfo();
    manSenior.showNameCardInfo();
    manAssist.showNameCardInfo();

    return 0;
};