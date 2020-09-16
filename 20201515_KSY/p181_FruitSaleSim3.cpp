#include <iostream>
using namespace std;

class FruitSeller
{
private:
    const int APPLE_PRICE;
    int numOfApples;
    int myMoney;
public:
    FruitSeller(int price, int num, int money)
        : APPLE_PRICE(price), numOfApples(num), myMoney(money)
    {
    }
    int SaleApples(int money)
    {
        //예제 FruitSaleSim2.cpp와 동일하므로 생략합니다.
    }
    void ShowSalesResult() const
    {
        //예제 FruitSalesSim2.cpp와 동일하므로 생략합니다.
    }
};

class FruitBuyer
{
private:
    int myMoney;
    int numOfApples;
public:
    FruitBuyer(int money)
        : myMoney(money), numOfApples(0)
    {
    }
    void BuyApples(FruitSeller &seller, int money)
    {
        //예제 FruitSalesSim2.cpp와 동일하므로 생략합니다.
    }
    void ShowBuyResult() const
    {
        //예제 FruitSaleSim2.cpp와 동일하므로 생략합니다.
    }
};

int main(void)
{
    // 예제 FruitSalesSim2.cpp와 동일하므로 생략합니다.
}
