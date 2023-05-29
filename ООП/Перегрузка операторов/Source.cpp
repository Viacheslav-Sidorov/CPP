#include <iostream>
#include "Point.h"

using namespace std;

void main()
{
	Point* p1 = new Point(45, 22);
	Point p2(78, 33);
	cout << p1;
	cout << p2;
	cout << (*p1 + p2);
}