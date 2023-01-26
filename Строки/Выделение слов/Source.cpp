#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void main()
{
	// Способ выделения, через потоки stringstream
	string str, word;
	string signs = ",!;:.\'\"";
	getline(cin, str);

	cout << "--- I способ ---" << endl;
	stringstream ss(str);

	while (ss >> word)
		cout << word << endl;


	cout << "--- II способ ---" << endl;
	// Использование старой функции strtok
	char* ptr;

	ptr = strtok((char*)str.c_str(), signs.c_str());
	while (ptr)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, signs.c_str());
	}
}