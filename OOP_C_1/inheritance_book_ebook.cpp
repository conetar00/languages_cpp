#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    char *title;
    char *isbn;
    int price;

public:
    Book(char *in_title, char *in_isbn, int in_price)
        : price(in_price)
    {
        title = new char[strlen(in_title) + 1];
        strcpy(title, in_title);
        isbn = new char[strlen(in_isbn) + 1];
        strcpy(isbn, in_isbn);
    };
    void ShowBookInfo()
    {
        cout << "Title : " << title << endl;
        cout << "ISBN : " << isbn << endl;
        cout << "Price : " << price << endl;
    };
    ~Book()
    {
        delete[] title;
        delete[] isbn;
    };
};

class EBook : public Book
{
private:
    char *DRMKey;

public:
    EBook(char *in_title, char *in_isbn, int in_price, char *in_DRMKey)
        : Book(in_title, in_isbn, in_price)
    {
        DRMKey = new char[strlen(in_DRMKey) + 1];
        strcpy(DRMKey, in_DRMKey);
    };
    void ShowEBookInfo()
    {
        ShowBookInfo();
        cout << "DRM Key : " << DRMKey << endl;
    };
    ~EBook()
    {
        delete[] DRMKey;
    };
};

int main(void)
{
    Book book("C", "222-12345-440-0", 20000);
    book.ShowBookInfo();
    cout << endl;

    EBook ebook("C++ (E)", "444-12345-880-0", 40000, "abc3d6e9fgh");
    ebook.ShowEBookInfo();
    cout << endl;

    return 0;
}