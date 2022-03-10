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
		f = n*fac(n - 1); // '递归关系'
	}
	return f;
}
int main()
{
	int n;
	long y;
	printf("请输入n(n<13):");
	scanf("%d", &n);
	if (n > 12)
	{
		printf("输入的n超出上限12，请重新输入n。\n");
		return;
	}
	y = fac(n);
	printf("%d!=%d\n", n, y);
	return 0;
}