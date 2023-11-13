#include <iostream>
#include <cstring>
using namespace std;

class FriendInfo
{
private:
    char *name;
    int age;

public:
    FriendInfo(char *input_name, int input_age)
        : age(input_age)
    {
        name = new char[strlen(input_name) + 1];
        strcpy(name, input_name);
    };
    void ShowFriendInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    };
    ~FriendInfo()
    {
        delete[] name;
    };
};

class FriendDetailInfo : public FriendInfo
{
private:
    char *address;
    char *phone_number;

public:
    FriendDetailInfo(char *input_name, int input_age, char *input_address, char *input_phone_number)
        : FriendInfo(input_name, input_age)
    {
        address = new char[strlen(input_address) + 1];
        strcpy(address, input_address);
        phone_number = new char[strlen(input_phone_number) + 1];
        strcpy(phone_number, input_phone_number);
    };
    void ShowFriendDetailInfo()
    {
        ShowFriendInfo();
        cout << "Address : " << address << endl;
        cout << "Phone Number : " << phone_number << endl;
    };
    ~FriendDetailInfo()
    {
        delete[] address;
        delete[] phone_number;
    };
};

int main(void)
{
    FriendDetailInfo friend1("KKK", 22, "Seoul-1", "010-1234-5678");
    FriendDetailInfo friend2("LLL", 24, "Seoul-2", "010-8765-4321");
    friend1.ShowFriendDetailInfo();
    friend2.ShowFriendDetailInfo();

    return 0;
}