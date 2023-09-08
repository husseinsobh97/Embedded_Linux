#include<iostream>

enum WeekDays : uint8_t
{
    MONDAY=1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
    WEEK_DAYS=7
};
int main()
{
 constexpr std::uint16_t TEN_DAYS =10;

 std::uint16_t current=0;
 std::cin >> current;
 std::uint16_t meet_day=(current+TEN_DAYS) %WEEK_DAYS;
std::string day="";

switch (meet_day)
{
case MONDAY:
    day="Monday";
    break;

case TUESDAY:
    day="Tuesday";
    break;

default:
    day="";
    break;
}

std::cout <<"will meet on " << day <<std::endl;
    return 0;
}