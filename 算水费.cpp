#include<stdio.h>
int main(void) {
	int x, y;
	printf("请输入用水量");
	scanf_s("%d", &x);
	if (x <= 15)
	{
		y = 4*x / 3;

	}
	else {
		y = 2.5*x - 10.5;
	}
	printf("水费：%d", y);
	return 0;
}