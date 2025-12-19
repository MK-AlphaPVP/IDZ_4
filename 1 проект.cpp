#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	double x, epsilon;
	double s = 0.0;
	double a = 0.0;
	int n = 1;

	cout << "Введите x (x должен быть больше 0.5): ";
	cin >> x;

	if (x <= 0.5)
	{
		cout << "Ошибки, вы ввели x <= 0.5";
		return 1;

	}
	cout << "Введите необходимую точность эпсилон (0 < eps << 1): ";
	cin >> epsilon;

	if (epsilon <= 0 || epsilon > 1) 
	{
		cout << "Ошибки, введём на подходящий условию эпсилон";
		return 1;

	}

	do 
	{
		a = pow(x - 1, n) / (n * pow(x, n));
		s += a;
		n++;

	} while (fabs(a) >= epsilon);
	cout << "Результат вычисленной суммы: " << s << endl;
	cout << "Количество слагаемых в найденной сумме: " << n - 1;

	return 0;
}