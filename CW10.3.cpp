#include <iostream>
using namespace std;
static int  List[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


struct Date 
{
    int year;
    int month;
    int day;
};

Date Tommorow(Date today);

int main() 
{
    Date today;
    Date tomorrow;

    printf("Enter the today day ");
    cin >> today.day;

    printf("Enter the month ");
    cin >> today.month;

    printf("Enter te year ");
    cin >> today.year;
    tomorrow = Tommorow(today);
    cout << tomorrow.day << " " << tomorrow.month << " " << tomorrow.year;
    return 0;

}

Date Tommorow(Date today)
{
    Date tommorow;
    if(today.year % 4 == 0)
        List[1] = 29;
    else
        List[1] = 28;
    if(today.day == List[today.month - 1])
    {
        if(today.month == 12)
        {
            tommorow.day = 1;
            tommorow.month = 1;
            tommorow.year = today.year + 1;
        }
        else
        {
            tommorow.day = 1;
            tommorow.month = today.month + 1;
            tommorow.year = today.year ;    
        }


    }
    else
    {
        tommorow.day = today.day + 1;
        tommorow.month = today.month;
        tommorow.year = today.year;
    }

    return tommorow;
}