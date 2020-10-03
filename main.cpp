#include <iostream>
using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      :Leung Man Hin \n";
	cout << "Student ID: 19147439A\n";
	cout << "Class     : 101A\n";
}

void Q1()
{
	double r;
	double h;
	double SA;
	cout << "Input radius (cm)\n";
	cin >> r ;
	cout << "input height (cm)\n";
	cin >> h ;
	double PI = 3.14159265;
	SA = 2 * PI * r * (r + h);
	cout << "Surface area =" << SA << "cm^2";
	// Insert your codes for Question 1 here
}

void Q2()
{
	int y, m, d;
	cout << "Input year\n";
	cin >> y;
	cout << "Input month\n";
	cin >> m;
	cout << "Input day\n";
	cin >> d;
	if (y < 1 || m < 1 || m>12 || d < 1 || d>31||((m==4||m==6||m==9||m==11)&&d>30)|| (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) && (m == 2 )&&(d>29)||(y % 4 != 0 && m==2&&d>28)) {
		cout << "Invalid date";
	}
	else {
		switch (d) {
		case 1 && 21 && 31: cout << d << "st";
			break;
		case 2 && 22:cout << d << "nd";
			break;
		case 3 && 23: cout << d << "rd";
			break;
		default: cout << d << "th";
		}
		switch (m) {
		case 1:cout << "January" << y;
			break;
		case 2:cout << "February" << y;
			break;
		case 3:cout << "March" << y;
			break;
		case 4:cout << "April" << y;
			break;
		case 5:cout << "May" << y;
			break;
		case 6:cout << "June" << y;
			break;
		case 7:cout << "July" << y;
			break;
		case 8:cout << "Augest" << y;
			break;
		case 9:cout << "September" << y;
			break;
		case 10:cout << "October" << y;
			break;
		case 11:cout << "November" << y;
			break;
		case 12:cout << "December" << y;
			break;
		}
	}
		// Insert your codes for Question 2 here
}

void Q3()
{
	int n;
	int sum;
	cout << "Number of integer required";
	cin >> n;
	for (int m = 0; m <= n; m++) {
		cout << 4 * 7 * m<<endl;
		sum = sum + 4 * 7 * m;
	}
	cout << (double)sum/(double)n;

	// Insert your codes for Question 3 here
}

void Q4()
{
	// Given code for user input size
	int size;
	cout << "Input size: ";
	cin >> size;
	for (int n = 2 * size; n > 0; n--) {
		for (int x = 1; x < 2 * size + 1; x += 2) {
			cout <<(n," ")<< (x,"*") ;
		}
	}
	for (int n = 1; n < size; n++) {
		for (int x = 2 * size - 1; x > 0; x -= 2) {
			for (int y = 1; y < 2 * size - 1; y += 1) {
				for (int i = 2 * size - 1; i > 0; x -= 2) {
					cout << (n, "  ") << (x, "*") << (y, " ") << (i, "*");
				}
			}
		}
	}




	// Insert your codes for Question 4 here
}

// GIVEN CODES, DO NOT MODIFY 
// BEGIN
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '0': showInfo(); break;
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case '4': Q4(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END
