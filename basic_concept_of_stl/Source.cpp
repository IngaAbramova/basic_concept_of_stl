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
	cout << "������� �������" << endl;
	cout << "1.������� �����" << endl;
	cout << "2.������� ����� �� �����" << endl;
	cout << "3.�������� �����" << endl;
	cout << "4.����������� �� ����������� �����" << endl;
	cout << "5.������� ��� �����" << endl;
	cout << "6.�������� ��������" << endl;
	cout << "7.������� ��������� � �������� ��������" << endl;
	cout << "8.������������ �������" << endl;
	cout << "9.����������� �������" << endl;
	cout << "10.����������� �� �������� �����" << endl;
	cout << "11.������� ��������" << endl;
	cout << "12.������� ��������� �������" << endl;
	cout << "0.�����" << endl;
	cin >> comand;
	while (comand != 0)
	{
		if (comand == 1)
		{
			int n;
			cout << "����������: ";
			cin >> n;
			for (int i = 0; i < n;i++)
			{
				NUMBERS.push_back(rand());
			}
		}
		if (comand == 2)
		{
			cout << "���� �����: " << endl;
			for (int i = 0; i < NUMBERS.size();i++)
			{
				cout << NUMBERS[i] << endl;
			}

		}
		if (comand == 3)
		{
			float a;
			cout << "�����: " << endl;
			cin >> a;
			NUMBERS.push_back(a);
		}
		if (comand == 4)
		{

			sort(NUMBERS.begin(), NUMBERS.end());
			cout << "����������: " << endl;
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
			cout << "����� �������� ��������(������� �����): " << endl;
			cin >> a;
			cout << "�� ����� �������� ��������(������� �����): " << endl;
			cin >> b;
			replace(NUMBERS.begin(), NUMBERS.end(), a, b);
		}
		if (comand == 7)
		{
			int a;
			cout << "�����: " << endl;
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
			cout << "����������: " << endl;
			for (int i = 0; i < NUMBERS.size();i++)
			{
				cout << NUMBERS[i] << endl;
			}
		}
		if (comand == 11)
		{
			int a;
			cout << "����� �������:" << endl;
			cin >> a;
			int b;
			cout << "���������� �����: " << endl;
			cin >> b;
			NUMBERS.insert(NUMBERS.begin() + b - 1, a);
		}
		if (comand == 12)
		{
			int a;
			cout << "������� �����, ������� ������ �������: " << endl;
			cin >> a;
			it = find(NUMBERS.begin(), NUMBERS.end(), a);
			NUMBERS.erase(it);
		}
		cout << "������� �������" << endl;
		cout << "1.������� �����" << endl;
		cout << "2.������� ����� �� �����" << endl;
		cout << "3.�������� �����" << endl;
		cout << "4.����������� �� ����������� �����" << endl;
		cout << "5.������� ��� �����" << endl;
		cout << "6.�������� ��������" << endl;
		cout << "7.������� ��������� � �������� ��������" << endl;
		cout << "8.������������ �������" << endl;
		cout << "9.����������� �������" << endl;
		cout << "10.����������� �� �������� �����" << endl;
		cout << "11.������� ��������" << endl;
		cout << "12.������� ��������� �������" << endl;
		cout << "0.�����" << endl;
		cin >> comand;
	}
	system("pause");

}
