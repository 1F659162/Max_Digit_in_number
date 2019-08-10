#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int number ;
	int max = 0 ;
	do
	{
		cout << "Enter number : ";
		cin >> number;
		if (number == 0) break;
		else
		{
			while(number != 0)
			{
				if((number % 10) > max) max = number %10;
				number = number / 10 ;
			}
			cout << "Maximum of number is : " << max << endl << endl;
		}
		max = 0;
	}while(true) ;
	return(0);
}
