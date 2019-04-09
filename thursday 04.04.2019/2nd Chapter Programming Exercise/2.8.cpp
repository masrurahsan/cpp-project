#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int timeZoneOffset;
    cout << "Enter the time zone offset to GMT: ";
    cin >> timeZoneOffset;

    int totalSeconds = time(0);
	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = (totalHours + timeZoneOffset) % 24;


	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currentSecond;

    return 0;
}
