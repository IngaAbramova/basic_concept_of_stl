#include <vector>
#include<iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	vector <int> NUMBERS;
	vector<int>::iterator it;
	setlocale(LC_ALL, "Russian");
	int comand = -1;
	cout << "Введите команду" << endl;
	cout << "1.Создать числа" << endl;
	cout << "2.Вывести числа на экран" << endl;
	cout << "3.Добавить число" << endl;
	cout << "4.Сортировать по возрастанию числа" << endl;
	cout << "5.Удалить все числа" << endl;
	cout << "6.Заменить элементы" << endl;
	cout << "7.Подсчет элементов с заданным знчением" << endl;
	cout << "8.Максимальный элемент" << endl;
	cout << "9.Минимальный элемент" << endl;
	cout << "10.Сортировать по убыванию числа" << endl;
	cout << "11.Вставка элемента" << endl;
	cout << "12.Удалить выбранный элемент" << endl;
	cout << "0.Выйти" << endl;
	cin >> comand;
	while (comand != 0)
	{
		if (comand == 1)
		{
			int n;
			cout << "Количество: ";
			cin >> n;
			for (int i = 0; i < n;i++)
			{
				NUMBERS.push_back(rand());
			}
		}
		if (comand == 2)
		{
			cout << "Ваши числа: " << endl;
			for (int i = 0; i < NUMBERS.size();i++)
			{
				cout << NUMBERS[i] << endl;
			}

		}
		if (comand == 3)
		{
			float a;
			cout << "Число: " << endl;
			cin >> a;
			NUMBERS.push_back(a);
		}
		if (comand == 4)
		{

			sort(NUMBERS.begin(), NUMBERS.end());
			cout << "Сортировка: " << endl;
			for (int i = 0; i < NUMBERS.size();i++)
			{
				cout << NUMBERS[i] << endl;
			}
		}
		if (comand == 5)
		{
			NUMBERS.clear();
		}
		if (comand == 6)
		{
			int a, b;
			cout << "Какие элементы заменить(введите число): " << endl;
			cin >> a;
			cout << "На какие элементы заменить(введите число): " << endl;
			cin >> b;
			replace(NUMBERS.begin(), NUMBERS.end(), a, b);
		}
		if (comand == 7)
		{
			int a;
			cout << "Число: " << endl;
			cin >> a;
			cout << count(NUMBERS.begin(), NUMBERS.end(), a) << endl;
		}
		if (comand == 8)
		{
			it = max_element(NUMBERS.begin(), NUMBERS.end());
			cout << *it << endl;
		}
		if (comand == 9)
		{
			it = min_element(NUMBERS.begin(), NUMBERS.end());
			cout << *it << endl;
		}
		if (comand == 10)
		{
			sort(NUMBERS.rbegin(), NUMBERS.rend());
			cout << "Сортировка: " << endl;
			for (int i = 0; i < NUMBERS.size();i++)
			{
				cout << NUMBERS[i] << endl;
			}
		}
		if (comand == 11)
		{
			int a;
			cout << "Новый элемент:" << endl;
			cin >> a;
			int b;
			cout << "Порядковый номер: " << endl;
			cin >> b;
			NUMBERS.insert(NUMBERS.begin() + b - 1, a);
		}
		if (comand == 12)
		{
			int a;
			cout << "Введите число, которое хотите удалить: " << endl;
			cin >> a;
			it = find(NUMBERS.begin(), NUMBERS.end(), a);
			NUMBERS.erase(it);
		}
		cout << "Введите команду" << endl;
		cout << "1.Создать числа" << endl;
		cout << "2.Вывести числа на экран" << endl;
		cout << "3.Добавить число" << endl;
		cout << "4.Сортировать по возрастанию числа" << endl;
		cout << "5.Удалить все числа" << endl;
		cout << "6.Заменить элементы" << endl;
		cout << "7.Подсчет элементов с заданным знчением" << endl;
		cout << "8.Максимальный элемент" << endl;
		cout << "9.Минимальный элемент" << endl;
		cout << "10.Сортировать по убыванию числа" << endl;
		cout << "11.Вставка элемента" << endl;
		cout << "12.Удалить выбранный элемент" << endl;
		cout << "0.Выйти" << endl;
		cin >> comand;
	}
	system("pause");

}
