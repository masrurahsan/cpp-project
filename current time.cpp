#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int totalSeconds= time(0);
	int currentSeconds= totalSeconds%60;
	int totalMinutes= totalSeconds/60;
	int currentMinute= totalMinutes%60;
	int totalHours= totalMinutes/60;
	int currentHour= totalHours % 24;
	cout<< "current time is" << currentHour << ":" << currentMinute << ":" << currentSeconds <<"GMT";
	
	
	
	
	return 0;
}
