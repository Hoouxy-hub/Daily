乘法口诀for语句运用
#include<stdio.h>
int main()
{
	int q, e, result;
	for (q = 9; q >= 1; q--)
	{
		for (e = 1;e <= q; e++)
		{
			printf("%d*%d=%d ", q, e, result = q * e);//%d后面加空格可以让输出结果不相连
		}
		printf("\n");
	}
	return 0;
}
