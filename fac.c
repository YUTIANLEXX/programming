#include <stdio.h>
long fac(int n)
{
	long f;
	if (n == 1)
	{
		f = 1;
	}
	else
	{
		f = n*fac(n - 1); // '�ݹ��ϵ'
	}
	return f;
}
int main()
{
	int n;
	long y;
	printf("������n(n<13):");
	scanf("%d", &n);
	if (n > 12)
	{
		printf("�����n��������12������������n��\n");
		return;
	}
	y = fac(n);
	printf("%d!=%d\n", n, y);
	return 0;
}