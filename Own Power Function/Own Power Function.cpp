// Own Power Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

double powerFunction(double A, double B)
{
	double ans = A;
	int i = 1;
	while (i < B) {
		ans = ans * A;
		i++;
	}
	return ans;
}


int main()
{

	cout << powerFunction(3.0, 4.0) << endl;
    return 0;
}

