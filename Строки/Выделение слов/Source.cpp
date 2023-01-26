#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void main()
{
	// ������ ���������, ����� ������ stringstream
	string str, word;
	string signs = ",!;:.\'\"";
	getline(cin, str);

	cout << "--- I ������ ---" << endl;
	stringstream ss(str);

	while (ss >> word)
		cout << word << endl;


	cout << "--- II ������ ---" << endl;
	// ������������� ������ ������� strtok
	char* ptr;

	ptr = strtok((char*)str.c_str(), signs.c_str());
	while (ptr)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, signs.c_str());
	}
}