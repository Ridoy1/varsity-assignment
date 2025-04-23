// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void applyDiscount(float prices[], int n, float discountPercent)
{
    for (int i = 1; i <= n; i++)
    {
        prices[i] = prices[i] - (prices[i] * discountPercent / 100);
    }
}

int main()
{
    int n;
    cin >> n;

    float prices[100];

    for (int i = 1; i <= n; i++)
    {
        cin >> prices[i];
    }

    float discount;
    cin >> discount;

    applyDiscount(prices, n, discount);

    cout << "\nPrices after discount:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "Product " << i << ": " << prices[i] << "/-" << endl;
    }

    return 0;
}
