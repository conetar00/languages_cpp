class FruitSeller
{
private:
    int apple_price;
    int apple_num;
    int money;

public:
    void InitMembers(int price, int num, int m);
    int PriceApple();
    int SellApple(int m);
    void ShowSellResult() const;
};

class FruitBuyer
{
private:
    int apple_num;
    int money;

public:
    void InitMembers(int m);
    bool BuyApple(FruitSeller &seller, int m);
    void ShowBuyResult() const;
};