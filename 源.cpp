#include<stdio.h>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		printf("%d的平方是%d\n", i-1, SQUARE(i++));//展开：((i++)*(i++)),从右往左传入栈中
		/*i++是运算完再加，故第一次为1X1，因为加了两次，所以是3-1得平方*/
	}
	return 0;
}