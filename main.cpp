#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
#include "students.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Students student;
	string name, lastname;
	cout << "Введите имя: ";
	getline(cin, name);
	cout << "Введите фамилию: ";
	getline(cin, lastname);

	student.set_name(name);
	student.set_lastname(lastname);

	int scores[5], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Оценка " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	student.set_scores(scores);
	float average_ball = sum / 5.0;
	student.set_average_ball(average_ball);
	cout << "Студент: " << student.get_name() << ", " << student.get_lastname() << " его средний балл составляет " << student.get_average_ball() << std::endl;

	return 0;
}
