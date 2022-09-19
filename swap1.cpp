#include <iostream>

using namespace std;


void foo(int *pa, int *pb)
{
	int res1, res2;
	res1 = (*pa);
	res2 = (*pb);
	
	(*pa) = res2;
	(*pb) = res1;

	

}


void main()
{
	setlocale(LC_ALL, "Rus");
	int a = 10, b = 20;

	foo(&a, &b);
	
	
	cout << a << endl;
	cout << b << endl; 
	
	
}