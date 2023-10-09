#include "fruit.h"

using namespace std;

// Seller
void FruitSeller::InitMembers(int price, int num, int m)
{
    apple_price = price;
    apple_num = num;
    money = m;
};
int FruitSeller::PriceApple()
{
    return apple_price;
};
int FruitSeller::SellApple(int m)
{
    apple_num -= (m / apple_price);
    money += m;

    return (m / apple_price);
};
void FruitSeller::ShowSellResult() const
{
    cout << "(SELLER) Apple : " << apple_num << endl;
    cout << "(SELLER) Money : " << money << endl;
};

// Buyer
void FruitBuyer::InitMembers(int m)
{
    apple_num = 0;
    money = m;
};
bool FruitBuyer::BuyApple(FruitSeller &seller, int m)
{
    if (m < seller.PriceApple())
    {
        cout << "<<<< ERROR : Can't Buy Apple >>>>" << endl;

        return false;
    }

    apple_num += (seller.SellApple(m));
    money -= m;

    return true;
};
void FruitBuyer::ShowBuyResult() const
{
    cout << "(BUYER) Apple : " << apple_num << endl;
    cout << "(BUYER) Money : " << money << endl;
};
