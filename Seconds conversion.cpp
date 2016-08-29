
#include <iostream>

using namespace std;

int main()
{
    long input_seconds = 3840305;

    const int months=2592000;
    const int years=31104000;
    const int cseconds_in_day = 86400;
    const int cseconds_in_hour = 3600;
    const int cseconds_in_minute = 60;
    const int cseconds = 1;

    long long year=input_seconds/years;
    long long month=(input_seconds%years)/months;
    long long days = (input_seconds%months) / cseconds_in_day;
    long hours = (input_seconds % cseconds_in_day) / cseconds_in_hour;
    long minutes = ((input_seconds % cseconds_in_day) % cseconds_in_hour) / cseconds_in_minute;
    long seconds = (((input_seconds % cseconds_in_day) % cseconds_in_hour) % cseconds_in_minute) / cseconds;
    cout << input_seconds << " seconds is " <<year<<" Years "<<month<<" months "<< days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds.";

    cin.get();
    return 0;
}
