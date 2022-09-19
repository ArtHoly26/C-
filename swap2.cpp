#include <iostream>

using namespace std;


template <class T>
 void foo(T &a, T &b)
{
	T res = a;
	a = b;
	b = res;
}




void main()
{
	setlocale(LC_ALL, "Rus");
	double a = 5.5;
	double b = 3.4;

	cout << a << endl;
	cout << b << endl;
	cout << "Swap" << endl;
	foo(a, b);
	cout << a << endl;
	cout << b << endl;

	
	
	

}