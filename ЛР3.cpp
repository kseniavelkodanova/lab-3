#include <iostream>
using namespace std;

/*Дано три числа.Знайти середнє з них(тобто число, розташоване між
  найменшим і найбільшим).*/
void task_if13(); // завдання 1 декларація функції

/* Дано координати точки на площині(x, y).
   Визначити, чи потрапляє точка в фігуру заданого кольору (або групу фігур)
   і вивести відповідне повідомлення. */
void task_geom25_2();// завдання 2 декларація функції

/* Обчислити площу і периметр плоскої фігури. */
void task_geom25_3();// завдання 3 декларація функції
 
int main() {
	int menu;
	cout << "Task1: 1\nTask2: 2\nTask3: 3" << endl;
	cout << "Task number:";
	cin >> menu;
	// перемикання між завданнями
	switch (menu)
	{
	case 1: task_if13(); break; // Завдання 1
	case 2: task_geom25_2(); break; // Завдання 2
	case 3: task_geom25_3(); break; // Завдання 3
	default: cout << "Wrong task! (Only 1,2, 3)" << endl; //повідомлення про помилку
	}
	system("pause");
	return 0;
}
// завдання 1 реалізація
void task_if13()
{
	int num1, num2, num3;
	cout << "************* If 13 *****************" << endl;
	cout << "Three number`s: ";
	cin >> num1 >> num2 >> num3;
	// перевірка коректності даних !!!
	if (!cin) {
		//повідомлення про помилку
		cout << "Must be numeric!";
	}
	else {  // дані коректні
		if (num1 > num2) { // порівняння першого числа і другого числа
			if (num3 > num1) { // порівняння третього числа і першого
				cout << "Answer is number 1" << endl;
			}
			else {
				cout << "Answer is number 3" << endl;
			}
		}
		else {
			if (num3 > num2) { // порівняння другого числа і третього числа
				cout << "Answer is number 2" << endl;
			}
			else {
				cout << "Answer is number 3" << endl;
			}
		}
	}
}

// завдання 2 реалізація
void task_geom25_2() {
	float x, y, a, r;
	cout << "*********** Point in geometry region 25 ************" << endl;
	cout << "Parameters a, r:";
	cin >> a >> r;
	// перевірка коректності даних !!!
	if (!cin || a <= 0 || r <= 0 || !(r < a/2))
		//повідомлення про помилку
		cout << "Must be numeric, positive, non-zero, r<a/2!"<<endl;
	else // дані коректні
	{
		cout << "Point x, y:";
		cin >> x >> y;
			// перевірка коректності даних !!!
			if (!cin) {
				cout << "Must be numeric!" << endl;
			}
			else
			{
				// обчислення для кола
				float crcl = x * x + y * y;
				// чверть кола
				if (crcl <= r*r && x<0 && y<0)
					cout << "In region!" << endl;
				// частка квадрата
				else if (x > -y && x < a/2 && -y < a/2 && crcl > r*r && x > 0 && y < 0)
					cout << "In region!" << endl;
				else cout << "Out of region!" << endl;
			}
	}
}

// завдання 3 реалізація
void task_geom25_3()
{
	float a, r;
	cout << "*********** Area and perimeter in geometry region 25 ************" << endl;
	cout << "Parameters a, r:";
	cin >> a >> r;
	// перевірка коректності даних !!!
	if (!cin || a <= 0 || r <= 0 || !(r < a / 2))
		//повідомлення про помилку
		cout << "Must be numeric, positive, non-zero, r<a/2!" << endl;
	else // дані коректні
	{
		// обчислення площі для чверті кола
		float sc = (r * r * 3.14) / 4;
		// обчислення периметра для чверті кола
		float pc = (2 * r * 3.14) / 4;
		// обчислення площі для частки квадрата
		float ss = (a / 2) * (a / 2) * sin(3.14 / 4) - (r * r * 3.14) / 8;
		// обчислення периметра для частки квадрата
		float ps = a / 2 + (a / 2 * 1.4 - r) + (a / 2 - r) + (2 * ss / r);

		cout << "Area:"<<sc+ss << endl;
		cout << "Perimeter:" <<pc+ps<< endl;
	}
}


