#include <iostream>
#include<string >

using namespace std;






int main()
{
	setlocale(LC_ALL, "RUS");
	bool cont = true;

	cout << "Доступные операции: \n + сложить \n - отнять \n * умножить \n / разделить \n ! факториал \n";

	while (cont)
	{
		cout << "Введите первое число: ";
		float num_1;
		cin >> num_1;

		cout << "Введите операцию:";
		char oper;
		cin >> oper;

		cout << "Введите второе число: ";
		float num_2;
		cin >> num_2;

		if (oper == '+')
		{

			cout << "Результат: " << num_1 << "+" << num_2 << "=" << num_1 + num_2 << endl;
			cout << "\nПродолжить? y-да n-нет \n";
			char ans;
			cin >> ans;
			if (ans == 'y')
			{
				cont = true;
			}
			else if (ans == 'n')
			{
				cont = false;
			}
		}
		else if (oper == '-')
		{
			cout << "Результат: " << num_1 << "-" << num_2 << "=" << num_1 - num_2 << endl;
			cout << "\nПродолжить? y-да n-нет \n";
			char ans;
			cin >> ans;
			if (ans == 'y')
			{
				cont = true;
			}
			else if (ans == 'n')
			{
				cont = false;
			}
		}
		else if (oper == '*')
		{
			cout << "Результат: " << num_1 << "*" << num_2 << "=" << num_1 * num_2 << endl;
			cout << "\nПродолжить? y-да n-нет \n";
			char ans;
			cin >> ans;
			if (ans == 'y')
			{
				cont = true;
			}
			else if (ans == 'n')
			{
				cont = false;
			}
		}
		else if (oper == '/')
		{
			cout << "Результат: " << num_1 << "/" << num_2 << "=" << num_1 / num_2 << endl;
			cout << "\nПродолжить? y-да n-нет \n";
			char ans;
			cin >> ans;
			if (ans == 'y')
			{
				cont = true;
			}
			else if (ans == 'n')
			{
				cont = false;
		
		
			}

			
			
				
			
		}

	}
	system("PAUSE");
	return 0;

}





