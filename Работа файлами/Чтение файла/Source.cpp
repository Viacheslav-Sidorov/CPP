#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	setlocale(0, "RU");
	ifstream in("input.txt");
	string line;

	while (!in.eof())
	{
		getline(in, line);
		cout << line << endl;
	}

	in.close();
}