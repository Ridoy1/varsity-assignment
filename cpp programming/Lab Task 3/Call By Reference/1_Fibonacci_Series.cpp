// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void fibonacci(int n, int &a, int &b)
{
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
}

int main()
{
    int n;

    cin >> n;

    int f = 0, s = 1;
    fibonacci(n, f, s);

    return 0;
}
