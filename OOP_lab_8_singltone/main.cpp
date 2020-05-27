#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
	rectangle* rec1 = rectangle::instance(15, 20);
	rectangle* rec2 = rectangle::instance(200, 214);
	cout << "*rec1: " << *rec1 << endl;
	cout << "*rec2: " << *rec2 << endl;
}