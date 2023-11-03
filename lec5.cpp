#include <iostream>
using namespace std;
int main()
{
    // int a, b;
    // a = 3;
    // b = 5;
    // cout << "a&b: " << (a & b) << endl;
    // cout << "a|b: " << (a | b) << endl;
    // cout << "~a: " << (~a) << endl;
    // cout << "a^b: " << (a ^ b) << endl;
    // cout << (19 << 1) << endl;
    // cout << (19 << 2) << endl;
    // cout << (21 >> 1) << endl;
    // cout << (21 >> 2) << endl;
    // cout << (a++) << endl;
    // cout << (++a) << endl;
    // cout << (a--) << endl;
    // cout << (--a) << endl;
    // int a, b = 1;
    // a = 10;
    // if (++a)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << (++b);
    // }

    // int a;
    // int n = 5;
    // int b = 4;
    // for (a = 1; a <= n; a++)
    // {
    //     cout << a << endl;
    // }

    // int s, n, i;
    // cin >> n;
    // s = 0;
    // for (i = 0; i <= n; i++)
    // {
    //     s += i;
    // }
    // cout << s << endl;

    // int b, c, a, i;
    // cin >> c;
    // a = 0;
    // b = 1;
    // for (i = 1; i <= c; i++)
    // {
    //     int nextn = a + b;
    //     cout << nextn << endl;
    //     a = b;
    //     b = nextn;
    // }

    // int a, c, b;
    // cin >> c;
    // b = 0;
    // for (a = 1; a <= c; a++)
    // {
    //     if (c % a == 0)
    //     {
    //         b = b + 1;
    //     }
    //     else
    //     {
    //         b = b;
    //     }
    // }
    // if (b == 2)
    // {
    //     cout << "Prime";
    // }
    // else
    // {
    //     cout << "Not Prime";
    // }

    int c, a, d, e;
    d = 1;
    e = 0;
    cin >> c;
    while (c != 0)
    {
        a = c % 10;
        c = c / 10;
        d = d * a;
        e = e + a;
    }
    cout << d - e;
}