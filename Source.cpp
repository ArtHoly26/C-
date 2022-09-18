#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	const int rows = 3;
	const int cols = 3;
	int arr[rows][cols];
	int sum = 0;
	int sumElement;

	sumElement = rows * cols;

	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<"Enter elements:" << endl;
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		cout << "\n";
		for (int j = 0; j < cols; j++)
		{
			cout << "\t" << arr[i][j];
			
			
			
		}
	}
	cout << endl;
	cout << "---------------------------" << endl;

	for (int i = 0; i < rows; i++)
	{
		cout << "\n";
		
		for (int j = 0; j < cols; j++)
		{
			
			sum = sum + arr[i][j];

		}
	}
	cout << "Averege arefmet = " << (double)sum/sumElement << endl;
	return 0;

	
	
	

}