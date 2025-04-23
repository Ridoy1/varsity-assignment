// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void reverse_dig(int &num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    num = rev;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;

    reverse_dig(a);
    reverse_dig(b);

    swap(a, b);

    cout << "After reversing and swapping:\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}
