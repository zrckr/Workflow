#include <iostream>
#include "Array.h"

using namespace lab;
using namespace std;

int main()
{
	unsigned short width = 8;

	matr_t A = { {1, 5, 2,}, {0.7, 12, 5,}, {3, 0, 4} };
	matr_t B = { {1, 0, 0}, {2.9, 0, 0}, {3.1, 0, 0} };
	
	Matrix Arr(A);
	Matrix Brr(B);
	Matrix Rrr(3, 3);

	cout << "A:" << endl;
	cout << Arr.str(8, 2);

	Arr.inverse();
	Arr *= Brr;

	cout << "B:" << endl;
	cout << Brr.str(8, 2);
	cout << "X:" << endl;
	cout << Arr.str(8, 2);

	//cin.get();
}

