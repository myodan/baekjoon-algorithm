#include <iostream>

int main()
{
    int current_hour = 0;
    int current_minute = 0;
    int set = 0;

    std::cin >> current_hour >> current_minute;
    std::cin >> set;

    int oven_hour = set / 60 + current_hour;
    int oven_minute = set % 60 + current_minute;

    if (oven_minute >= 60)
    {
        oven_hour += oven_minute / 60;
        oven_minute = oven_minute % 60;
    }

    if (oven_hour >= 24)
    {
        oven_hour -= 24;
    }

    std::cout << oven_hour << ' ' << oven_minute;

    return 0;
}