#include <iostream>
#include "fruit.cpp"

using namespace std;

int main(void)
{
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);

    FruitBuyer buyer;
    buyer.InitMembers(5000);

    cout << "-- Fruit Seller --" << endl;
    seller.ShowSellResult();
    cout << "-- Fruit Buyer --" << endl;
    buyer.ShowBuyResult();

    buyer.BuyApple(seller, -2000);

    cout << "-- Fruit Seller --" << endl;
    seller.ShowSellResult();
    cout << "-- Fruit Buyer --" << endl;
    buyer.ShowBuyResult();

    return 0;
}