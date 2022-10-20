#include <iostream>
#include <string>
using namespace std;

int dayofWeek(int month, int day, int year);

int main() {
	std::cout << "Enter a date or Q to quit: ";
	int month, day, year;
	cin >> month >> day >> year;
	if (cin.fail()) {
		return 1;
	}
	
	string monthname;
	string weekday;

	switch (month) {
	default: {
		monthname = "Error";
		break;
	}
	case(1): {
		monthname = "January";
		break;
	}
	case(2): {
		monthname = "February";
		break;
	}
	case(3): {
		monthname = "March";
		break;
	}
	case(4): {
		monthname = "April";
		break;
	}
	case (5): {
		monthname = "May";
		break;
	}
	case(6): {
		monthname = "June";
		break;
	}
	case (7): {
		monthname = "July";
		break;
	}
	case (8): {
		monthname = "August";
		break;
	}
	case(9): {
		monthname = "September";
		break;
	}
	case(10): {
		monthname = "October";
		break;
	}
	case (11): {
		monthname = "November";
		break;
	}
	case (12): {
		monthname = "December";
		break;
	}
	}
	switch (dayofWeek(month, day, year)) {
	default: {
		weekday = "Error";
		break;
		}
	case(0): {
		weekday = "Saturday";
		break;
	}
	case(1): {
		weekday = "Sunday";
		break;
	}
	case(2): {
		weekday = "Monday";
		break;
	}
	case(3): {
		weekday = "Tuesday";
		break;
	}
	case(4): {
		weekday = "Wednesday";
		break;
	}
	case(5): {
		weekday = "Thurday";
		break;
	}
	case(6): {
		weekday = "Friday";
		break;
		   }
	}
	std::cout << weekday << ", " << monthname << " " << day << ", " << year;
}

int dayofWeek(int month, int day, int year) {
	int q = day;
	int h;
	int m;
	if (month == 1) m = month + 12;
	else if (month == 2) m = month + 12;
	else m = month;
	int y;
	if (month > 2) y = year;
	else if (month <= 2) y = year - 1;

	h = (q + (((m + 1) * 26) / 10) + y + (y / 4) + 6 * (y / 100) + (y / 400)) % 7;
	return h;
}