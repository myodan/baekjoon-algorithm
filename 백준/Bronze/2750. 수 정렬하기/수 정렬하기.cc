#include <iostream>

int main()
{
    int length = 0, temp = 0;
    std::cin >> length;

    int input[length] = {};

    for (int i = 0; i < length; i++)
    {
        std::cin >> input[i];
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (input[i] < input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << input[i] << std::endl;
    }

    return 0;
}