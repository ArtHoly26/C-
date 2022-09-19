#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	const int rows = 3;
	const int cols = 3;
	int arr[rows][cols];
	int rows1, rows2, rows3;
	
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
	
	rows1 = arr[0][0] + arr[0][1] + arr[0][2];
	rows2 = arr[1][0] + arr[1][1] + arr[1][2];
	rows3 = arr[2][0] + arr[2][1] + arr[2][2];
	cout << rows1 << endl;
	cout << rows2 << endl;
	cout << rows3 << endl;

	if (rows1>rows2&&rows1>rows3)
	{
		cout << "Max is first row" << endl;
	}
	else if (rows2>rows1&&rows2>rows3)

	{
		cout << "Max is second row" << endl;
	}
	else if (rows3>rows1&&rows3>rows2)
	{
		cout << "Max is third row  " << endl;
	}
	else
	{
		cout << "Rows equal" << endl;
	}

	return 0;

	
	
	

}