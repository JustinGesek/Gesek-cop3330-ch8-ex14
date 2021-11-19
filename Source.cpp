#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "Source.h"
using namespace std;


int main()
{
	int i = 5;
	printValue(i);
	printReference(i);
	return 0;
}

void printValue(int const i)
{
	cout << i << endl;
}

void printReference(int const& i)
{
	cout << i << endl;
}