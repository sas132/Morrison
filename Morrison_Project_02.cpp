#include <iostream>
using namespace std;

int main ()
{
	int  Free_Miles, input_num;
	double  Daily_Fee, Overage_Fee;
	bool input_correct = true;
	char input_char, exit_char;
do{
	do
	{
		cout << "Which vehicle are you interested in? (enter E, S, L, V or T): ";
		cin >> input_char;
		input_correct = true;
		
		switch(input_char)
		{
		case 'E':
		case 'e':
			Daily_Fee = 45.90;
			Free_Miles = 40;
			Overage_Fee = 0.25;
			break;
		case 'L':
		case 'l':
			Daily_Fee = 85.50;
			Free_Miles = 200;
			Overage_Fee = 0.35;
			break;
		case 'S':
		case 's':
			Daily_Fee = 57.75;
			Free_Miles = 120;
			Overage_Fee = 0.40;
			break;
		case 'T':
		case 't':
			Daily_Fee = 55.00;
			Free_Miles = 150;
			Overage_Fee = 0.50;
			break;
		case 'V':
		case 'v':
			Daily_Fee = 55.00;
			Free_Miles = 150;
			Overage_Fee = 0.50;
			break;
		default:
			cout << "Enter only E, S, L, V or T." << endl;
			input_correct = false;
			break;
		}			
	
	} while (input_correct == false);
do
{
	input_correct = false;
	cout << "How many miles do you estimate you'll drive? (1-812): ";
	cin >> input_num;
	if (1 <= input_num && 812 >= input_num)
	{
		input_correct = true;
	}
	else
	{
		cout << "Please enter a number between 1 and 812, inclusive." << endl;
	}
} while (input_correct == false);
double economy_daily = 45.90;
double sport_daily = 57.75;
double luxury_daily = 85.50;
double van_daily = 55.00;
double truck_daily = 55.00;
int economy_miles = 40;
int sport_miles = 120;
int luxury_miles = 200;
int van_miles = 150;
int truck_miles = 150;
double economy_overage_fee = 0.25;
double sport_overage_fee = 0.40;
double luxury_overage_fee = 0.35;
double van_overage_fee = 0.50;
double truck_overage_fee = 0.50;
double economy_total, sport_total, luxury_total, van_total, input_total, truck_total;
if(economy_miles >= input_num)
{
economy_total = economy_daily;
}
else
{
economy_total = economy_daily + (input_num - economy_miles) * economy_overage_fee;
}
if(sport_miles >= input_num)
{
sport_total = sport_daily;
}
else
{
 sport_total = sport_daily + (input_num - sport_miles) * sport_overage_fee;
}
if (luxury_miles >= input_num)
{
luxury_total = luxury_daily;
}
else
{
luxury_total = luxury_daily + (input_num - luxury_miles) * luxury_overage_fee;
}
if (van_miles >= input_num)
{
van_total = van_daily;
}
else
{
van_total = van_daily + (input_num - van_miles) * van_overage_fee;
}
if (truck_miles >= input_num)
{
truck_total = truck_daily;
}
else
{
truck_total = truck_daily + (input_num - truck_miles) * truck_overage_fee;
}
if (Free_Miles >= input_num)
{
input_total = Daily_Fee;
}
else
{
input_total = Daily_Fee + (input_num - Free_Miles) * Overage_Fee;
}
double economy_difference = input_total - economy_total;
double sport_difference = input_total - sport_total;
double luxury_difference = input_total - luxury_total;
double van_difference = input_total - van_total;
double truck_difference = input_total - truck_total;
cout << "The charges are $" << input_total << endl;
if (economy_difference > 0)
{
	cout << "By switching to the Economy vehicle you would save $" << economy_difference << endl;
}
if (sport_difference > 0)
{
	cout << "By switching to the Sport vehicle you would save $" << sport_difference << endl;
}
if (luxury_difference > 0)
{
	cout << "By switching to the Luxury vehicle you would save $" << luxury_difference << endl;
}
if (van_difference > 0)
{
	cout << "By switching to the Van vehicle you would save $" << van_difference << endl;
}
if (truck_difference > 0)
{
	cout << "By switching to the Truck vehicle you would save $" << truck_difference << endl;
}
	cout << "Do you want to go again (y/n)? ";
	cin >> exit_char;

}while(exit_char == 'y'||exit_char == 'Y' );
cout << "Thank you for using this program. Goodbye." << endl;
return 0;
}

