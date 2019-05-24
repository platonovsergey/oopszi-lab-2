#include <iostream>
#include <math.h>
#include <locale>
using namespace std;

double f(double x);
bool isInArea(double x, double y);

void main()
{
	setlocale(LC_ALL, "RUS");
	
	double x, y;
	int k;

	printf("�������� ����� ������� (1 ��� 2):\n");
	printf(" - ������� �1\n");
	printf(" - ������� �2\n");
	printf("=============\n");
	printf("   ������� �");
	cin >> k;
	printf("\n");

	switch (k)
	{
		case 1: 
		{
			printf("������� x: ");
			cin >> x;
			printf("������� y: ");
			cin >> y;
			printf("=============\n");
			printf("���������: %o\n\n", isInArea(x, y));

			break;
		}
		case 2:
		{
			printf("������� x: ");
			cin >> x;
			printf("=============\n");
			printf("���������: %f\n\n", f(x));

			break;
		}
	}

	system("pause");

}

bool isInArea(double x, double y)
{
	double vector = sqrt(pow(x, 2) + pow(y, 2));
	if ( (vector <= 1 && (x >= -1 || x <= 1)) || ((x <= 1 && x >= 0) && (y <= 1 && y >= 1)) )
		return true;
	else
		return false;
}

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}