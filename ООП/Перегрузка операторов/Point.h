#include <cmath>
#include <ostream>
class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y);
	Point();
	double GetDistance(Point* p);
	double GetDistance(int x, int y);
	// friend - �������, ������� ����� ������ � �������� ������ ������
	//          ������ ������� �� �������� ������� ������.
	friend std::ostream& operator<< (std::ostream& out, const Point* point);
	friend std::ostream& operator<< (std::ostream& out, const Point& point);
};

