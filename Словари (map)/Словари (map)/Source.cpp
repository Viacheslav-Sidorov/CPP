#include <iostream>
#include <map>
#include <string>

using namespace std;

/*
	Словать
	Структура данных, которая хранит пары {ключ: значение}
	Ключ - уникален (не может повторяться)
	Типы Ключа и Значения могут быть различны
*/

// Определить кол-во каждого символа в строке
void main()
{
	string str;
	// ключ - буква, значение - кол-во
	map<char, int> dict;
	getline(cin, str);

	// Добавление пары
	dict.insert(make_pair(' ', 0));

	for (char c : str)
	{
		// Если такого символа ещё нет в словаре
		if (dict.find(c) == dict.end())
			// Добавление ключа со значением
			dict[c] = 1;
		else
			// Изменение значения по определённому ключу
			dict[c]++;
	}

	for (pair<char, int> item : dict)
	{
		// first - ключ
		// second - значение
		cout << item.first << " : " << item.second << endl;
	}
}