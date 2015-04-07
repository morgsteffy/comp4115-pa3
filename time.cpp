
#include <cmath>
#include <complex>
#include <cstring>
#include <iostream>


std::string time(int seconds)
{
	std::string timeString;
	int hours;
	int minutes;

	minutes= seconds / 60;
	seconds = seconds % 60;

	hours = minutes / 60;
	minutes = minutes % 60;

	timeString = std::to_string(hours) + " hours, " + std::to_string(minutes) 
		+ " minutes, and " + std::to_string(seconds) + ".";


    return timeString;
}