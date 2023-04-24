#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
	�������
	��������� ������, ������� ������ ���� {����: ��������}
	���� - �������� (�� ����� �����������)
	���� ����� � �������� ����� ���� ��������
*/

// ���������� ���-�� ������� ������� � ������
void main()
{
	string str;
	// ���� - �����, �������� - ���-��
	map<char, int> dict;
	getline(cin, str);

	// ���������� ����
	dict.insert(make_pair(' ', 0));

	for (char c : str)
	{
		// ���� ������ ������� ��� ��� � �������
		if (dict.find(c) == dict.end())
			// ���������� ����� �� ���������
			dict[c] = 1;
		else
			// ��������� �������� �� ������������ �����
			dict[c]++;
	}

	for (pair<char, int> item : dict)
	{
		// first - ����
		// second - ��������
		cout << item.first << " : " << item.second << endl;
	}
}