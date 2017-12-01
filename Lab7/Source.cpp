#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using namespace std;

//Q1a------------------------------------------------------------------------------------------------
bool isMember(char c, string delim) 
{
	return (delim.find(c, 0) != string::npos); 
}

string getNext(string const & toExtract, int & pos, string const & delim)
{

	return (0);
}


void exercise1_a()
{

}

//Q1b------------------------------------------------------------------------------------------------

void processLine(string const & line)
{

}

void exercise1_b()
{

}

//Q2------------------------------------------------------------------------------------------------


void exercise2()
{

}

//Q3------------------------------------------------------------------------------------------------


void exercise3()
{

}

//Q4------------------------------------------------------------------------------------------------


void exercise4()
{

}

//Q5------------------------------------------------------------------------------------------------


void exercise5()
{

}

//Q6------------------------------------------------------------------------------------------------


void exercise6()
{

}

//Q7------------------------------------------------------------------------------------------------


void exercise7()
{

}

//Menu------------------------------------------------------------------------------------------------
int main()
{
	int exercise = -1;
	while (exercise != 0)
	{
		cout << "Select an exercise number (1-7) or 0 to exit: ";
		cin >> exercise;
		switch (exercise)
		{
		case 0:
			break;
		case 1:
		{
			char q1 = '1';
			while (q1 != '0')
			{
				cout << "Which sub excersise? (a or b, 0 to go back): ";
				cin >> q1;
				switch (q1)
				{
				case '0':
					break;
				case 'a':
					exercise1_a();
					break;
				case 'b':
					exercise1_b();
					break;
				default:
					cout << "That's not a choice." << endl;
				}
			}
			break;
		}
		case 2:
			exercise2();
			break;
		case 3:
			exercise3();
			break;
		case 4:
			exercise4();
			break;
		case 5:
			exercise5();
			break;
		case 6:
			exercise6();
			break;
		case 7:
			exercise7();
			break;

		default:
			cout << "Incorrect choice" << endl;
		}
	}
}

/*
case 1:
{
char q1 = '1';
while (q1 != '0')
{
cout << "Which sub excersise? (a or b, 0 to go back): ";
cin >> q1;
switch (q1)
{
case '0':
break;
case 'a':
exercise1_a();
break;
case 'b':
exercise1_b();
break;
default:
cout << "That's not a choice." << endl;
}
}
break;
}
*/