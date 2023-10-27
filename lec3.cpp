#include <iostream>
using namespace std;
int main()
{
    // int a, b;
    // cout << "If Else Statement" << endl;
    // cin >> a >> b;
    // if (a > b)
    // {
    //     cout << a << "is Greater than" << b << endl;
    // }
    // else
    // {
    //     cout << b << " is Greater Than" << a << endl;
    // }

    // if (a > 0)
    // {
    //     cout << a << "Positive" << endl;
    // }
    // else if (a < 0)
    // {
    //     cout << a << "Negative" << endl;
    // }
    // else
    // {
    //     cout << a << "zero" << endl;
    // }
    // int a = 'A';
    // if (a >= 48 && a <= 57)
    // {
    //     cout << "numbers" << endl;
    // }
    // else if (a >= 65 && a <= 90)
    // {
    //     cout << "Capital" << endl;
    // }
    // else
    // {
    //     cout << "Small" << endl;
    // }

    // int a = 0;
    // int i = 1;
    // int b;
    // cin >> b;
    // while (i <= b)
    // {
    //     a = a + i;
    //     i = i + 1;
    // }
    // cout << a << ' ';

    // int a = 0;
    // int i = 0;
    // int b;
    // cin >> b;
    // while (i <= b)
    // {
    //     a = a + i;
    //     i = i + 2;
    // }
    // cout << a << ' ';

    // int a, b;
    // cin >> b;
    // a = (b * 9) / 5 + 32;
    // cout << a << ' ';

    // int a;
    // int i;
    // cin >> a;
    // i = a - 1;

    // while ((i) > 1)
    // {
    //     if (a % i == 0)
    //     {
    //         cout << "Not Prime" << ' ';
    //         i = i - 1;
    //     }
    //     else
    //     {
    //         cout << "prime" << ' ';
    //         i = i - 1;
    //     }
    // }
    // int i = 0;
    // int j = 0;
    // while (j <= 18)
    // {
    //     if (i < 4)
    //     {
    //         cout << "*" << ' ';
    //         i = i + 1;
    //         j = j + 1;
    //     }
    //     else if (i == 4)
    //     {
    //         cout << endl;
    //         i = 0;
    //         j = j + 1;
    //     }
    // }
    int i = 1;
    int j = 0;
    int k = 0;
    while (k <= 11)
    {
        if (j < 3)
        {
            cout << i << " ";
            j = j + 1;
            k = k + 1;
        }
        else if (j == 3)
        {
            cout << endl;
            i = i + 1;
            j = 0;
            k = k + 1;
        }
    }
}
