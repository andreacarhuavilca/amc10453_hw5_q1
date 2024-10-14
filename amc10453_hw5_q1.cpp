

#include <iostream>
using namespace std;

int main()
{

	int n;


	cout << "Please enter a positive integer: " ;
	cin >> n;




	for (int i = 1; i <= n; i++) //for loop that determines rows and columns based on user input
	{
		for (int j = 1; j <= n; j++) //for loop that prints product and makes new colums
		{

			cout << i * j << "\t"; // used to insert tabs

		}

		cout << endl;
	}


	return 0;
}

