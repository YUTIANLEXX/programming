#include <stdio.h>
#include <stdlib.h>

int main()
{
	double dSalary, dTax = 0, dNetlncome = 0;
	printf("�����������µ�����\n");
	scanf("%lf", &dSalary);
	if (dSalary <= 3500)
	{
		dTax = 0;
	}
	else if (dSalary <= 5000)
	{
		dTax = (dSalary - 3500)*0.03;
	}
	else if (dSalary <= 8000)
	{
		dTax = (dSalary - 3500)*0.1 - 105;
	}
	else if (dSalary <= 12500)
	{
		dTax = (dSalary - 3500)*0.2 - 555;
	}
	else if (dSalary <= 38500)
	{
		dTax = (dSalary - 3500)*0.25 - 1005;
	}
	else if (dSalary <= 58500)
	{
		dTax = (dSalary - 3500)*0.3 - 2755;
	}
	else if (dSalary <= 83500)
	{
		dTax = (dSalary - 3500)*0.35 - 5505;
	}
	else
	{
		dTax = (dSalary - 3500)*0.45 - 13505;
	}
	dNetlncome = dSalary - dTax;
	printf("������Ӧ�ɸ�������˰%.2lfԪ��˰������%.2lfԪ��\n", dTax, dNetlncome);
	return 0;
}