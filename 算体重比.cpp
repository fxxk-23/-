#include<stdio.h>
int main(void) {
	printf("请输入体重，身高");
		double T, S, A;
	scanf_s("%lf,%lf", &T, &S);
	A = T / (S * S);
	printf("体重比为：%lf", A);
	return 0;
}