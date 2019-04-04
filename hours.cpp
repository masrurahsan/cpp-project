#include<iostream>
using namespace std;

int main()
{   
 	int totalSeconds= time(0);
 	int currentSeconds= totalSeconds%60;
 	int totalMinutes= totalSeconds/60;
 	int currentMinutes= totalMinutes%60;
 	int totalHours= totalMinutes/60;
 	int currentHour= totalHours%24;
 	cout<< "current time is"<< current hours << ":" << current minutes << ":" << current seconds<< ":"<< "GMT";
	return 0;
}
