#include <iostream>

using namespace std;

int main()
{
    int input;

    while (cin >> input)
    {
        int num = 0;
        for (int i = 1; i <= input; i++)
        {
            num = (num * 10 + 1) % input;

            if (num % input == 0)
            {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}