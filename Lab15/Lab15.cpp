#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;

float PowerA3(float a1, float &b1)
{
    b1 = pow(a1, 3);
    return b1;
}

int Sign(float &x1)
{
    if (x1 < 0) x1 = -1;
    if (x1 == 0) x1 = 0;
    if (x1 > 0) x1 = 1;
    return x1;
}

float RingS(float r1, float r2)
{
    float pi = 3.14;
    return pi * (r1*r1-r2*r2);
}

int Quarter(float x2, float y2)
{
    if (x2 > 0 && y2 > 0) x2 = 1;
    if (x2 < 0 && y2 > 0) x2 = 2;
    if (x2 < 0 && y2 < 0) x2 = 3;
    if (x2 > 0 && y2 < 0) x2 = 4;
    return x2;
}

float Fact2(int n)
{
    float n1=1;
    if (n % 2 != 0)
    {
        for (int t = 1; t <= n; t = t + 2)
        {
            n1 = n1 * t;
        }
    }
    if (n % 2 == 0)
    {
        for (int t = 2; t <= n; t = t + 2)
        {
            n1 = n1 * t;
        }
    }
    return n1;
}





int main()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    float a, b;
    int n;

    /*
    //1
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        PowerA3(a, b);
        cout << b << endl;
    }

    //2
    cin >> a >> b;
    cout << Sign(a) + Sign(b) << endl;

    //3
    for (int j = 0; j < 3; j++)
    {
        cin >> a >> b;
        cout << RingS(a,b) << endl;
    }
    */

    //4
    for (int k = 0; k < 3; k++)
    {
        cin >> a >> b;
        cout << Quarter(a, b) << endl;
    }

    //5
    cin >> n;
    cout << Fact2(n) << endl;
}
