// .h - ��� ��������� �������� ������ (��� ����������)
#include <cmath>
// ����� - ��������� ����� ������
// � ������ ���� ���� ���� (����������) � ������ (�������)
class Point
{
	// �������� ���� ������
	// ���������� �����
private:
	int x;
	int y;
public:
	// ����������� ������ (���������� ��� �������� �������)
	// ����������� �� ���������� ������� ����������
	Point(int x, int y);
	// ���������� ������������ (������� � ����� �� ������, �� � ������� �����������)
	Point();
	double GetDistance(Point* p);
	double GetDistance(int x, int y);
};

