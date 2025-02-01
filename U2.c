#define _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
int main()
{
	printf("Programming in C is fun!");
	return 0;
}
*/

//#include<stdio.h>
//int main()
//{
//	printf("* * * *\n");
//	printf(" * * *\n");
//	printf("  * *\n");
//	printf("   *\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int C = 0;
//	int F = 150;
//	C = 5 * (F - 32) / 9;
//	printf("%d", C);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float h;         //注意是浮点数
//	int t = 3;
//	int g = 10;
//	h = 0.5 * g * t * t;
//	printf("height = %.2f", h);   //保留两位小数
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int C, F;
//	scanf("%d", &F);
//	C = 5*(F-32) / 9;
//	printf("Celsius = %d", C);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%d + %d = %d\n", m, n, m + n);
//	printf("%d - %d = %d\n", m, n, m - n);
//	printf("%d * %d = %d\n", m, n, m * n);
//	printf("%d / %d = %d\n", m, n, m / n);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	float x;
//	scanf("%f", &x);
//	if (x != 0)
//	{
//		printf("f(%.1f) = %.1f", x, 1 / x);
//	}
//	else
//		printf("f(%.1f) = %.1f", x,x);
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float x = 0;
//	scanf("%f", &x);
//	if (x >= 0)
//	{
//		printf("f(%.2f) = %.2f", x, sqrt(x));
//	}
//	else
//		printf("f(%.2f) = %.2f", x, pow(x+1,2)+2*x+1/x);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int F,lower, upper;
//	float C;
//	scanf("%d %d", &lower, &upper);
//	F = lower;
//	C = 5.0 * (F - 32) / 9.0;
//	if (lower <= upper && upper <= 100)
//	{
//		printf("fahr celsius\n");
//		printf("%d%6.1f", F, C);
//		for (F = lower + 2; F <= upper; F += 2)
//		{
//			C = 5.0 * (F - 32) / 9.0;
//			printf("\n%d%6.1f", F, C);
//		}
//	}
//	else
//		printf("Invalid.");
//	
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	double sum = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("sum = %.6f", sum);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	double sum = 0;
//	for (int i = 1; i <= N; i ++) {
//		sum += 1.0 / (2 * i - 1);
//	}
//	printf("sum = %.6f", sum);
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	double sum = 0;
//	int flag = 1;
//	for (int i = 1; i <= N; i ++) {
//		sum += 1.0 / (3 * i - 2)*flag;
//		flag *= -1;
//	}
//	printf("sum = %.3lf", sum);
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++) {
//		printf("pow(3,%d) = %.0f\n", i, pow(3, i));
//	}
//
//	return 0;
//}

/*
double fact(int n)
{
	//int n = 0;
	//scanf("%d", &n);
	double fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int result = 0;
	result = fact(n) / fact(m) / fact(n - m);
	printf("result = %d", result);
	return 0;
}

*/



//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int Sum = 0;
//	float Average = 0;
//	Sum = a + b + c + d;
//	Average = Sum / 4.0;   //注意：即使average本身是float型的，在使用/时也要保证两边有小数
//	printf("Sum = %d; Average = %.1f", Sum, Average);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	float cost = 0;
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("Invalid Value!");
//		return 0;
//	}
//	else if (n >= 0 && n <= 50)
//	{
//		cost = 0.53 * n;
//	}
//	else
//	{
//		cost = 50 * 0.53 + (n - 50) * (0.53 + 0.05);
//	}
//	printf("cost = %.2f", cost);
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int A = 0;
//	double B = 0;
//	for (int i = m; i <= n; i++) {
//		A += i * i;
//		B += 1.0 / i;
//	}
//	double S = A + B;
//
//	printf("sum = %.6lf", S);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int flag = 1;
//	float sum= 0;
//	for (int i = 1; i <= N; i++) {
//		sum += i * 1.0 / (2 * i - 1) * flag;
//		flag *= -1;
//	}
//	printf("%.3f", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N = 0;
//	double sum = 0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		sum += sqrt(i);
//	}
//	printf("sum = %.2lf", sum);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	int item = 1;        //注意：用来累乘时，初始是1不是0！！！！！
	int sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		item *= i;
		sum += item;
	}
	printf("%d", sum);
	return 0;
}












