#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    int cost;

    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3)
    {
        cost = 10000 + num1 * 1000;
    }
    else if (num1 == num2 || num1 == num3)
    {
        cost = 1000 + num1 * 100;
    }
    else if (num2 == num3)
    {
        cost = 1000 + num2 * 100;
    }
    else
    {
        if (num1 > num2 && num1 > num3)
        {
            cost = num1 * 100;
        }
        else if (num2 > num1 && num2 > num3)
        {
            cost = num2 * 100;
        }
        else
        {
            cost = num3 * 100;
        }
    }

    cout << cost;

    return 0;
}