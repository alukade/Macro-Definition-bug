#include<stdio.h>
#define SQUARE(x) ((x)*(x))

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		printf("%d��ƽ����%d\n", i-1, SQUARE(i++));//չ����((i++)*(i++)),����������ջ��
		/*i++���������ټӣ��ʵ�һ��Ϊ1X1����Ϊ�������Σ�������3-1��ƽ��*/
	}
	return 0;
}