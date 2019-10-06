#include<stdio.h>
void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a= 1;
	int b= 3;
	Swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
#include<stdio.h>
int get_year(int *year)
{
	int a = year;
	if (a%400==0||a%100==0 && a%4==0)
	{
		printf("%d", a);
	}
	else
	{
		printf("不是闰年");
	}
	return 0;
}
int main()
{
	int year = 2019;
	int i=get_year(&year);
	printf("%d", i);
	return 0;
	
}
#include<stdio.h>
int get_su(int n)
{
	int i = 0;
	for(i=2;i<n;i++)
	{if(n%i==0)
	{
		return 0;
	}
	}
	return 1;
}
int main()
{
	int i = 3;
	int a = get_su(i);
	if (a==1)
{
	printf("是素数");

}
	else {
		printf("不是素数");
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
void print()
{
	int n = 6; 
	int i = 0;
	int  j=0;
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%02d ",i,j,i*j);
		};
		printf("\n");
	}
}
int main()
{
	int n = 0;
	print(n);
	system("pause");
	return 0;

}

#include<stdio.h>
#include<string.h>
void init(int arr[10])               //初始化数组
{
	int j = 0;
	for (j = 0; j <= 9; j++)
	{
		arr[j] = j;
	}
}
void empty(int arr[10], int SZ)             //清空数组
{
	memset(arr, 0, SZ * sizeof(arr[0]));
}
void reverse(int arr[10], int SZ)           //逆置数组元素
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < SZ / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[SZ - 1 - i];
		arr[SZ - 1 - i] = temp;
	}
}
int main()
{
	int arr[10] = { 1,2,3,6,5,4,2 };
	int SZ = sizeof(arr) / sizeof(arr[0]);
	empty(arr, SZ);                  //清空数组
	init(arr);                       //初始化数组
	reverse(arr, SZ);                 //数组元素逆置
	int i = 0;
	return 0;
}
非递归
#include<stdio.h>
int main()
{
	int n = 3;
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++) 
	{
		ret *= i;

	}
	printf("%d\n", ret);
	return 0;
}
递归
#include<stdio.h>
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main()
{
	int n = 4;
	int c = factorial(n);
	printf("%d", c);
	return 0;
}
非递归
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d", strlen("abcd"));
	return 0;
}
#include<stdio.h>
void print(int n)
{ if (n>9)
{
	print(n / 10);
}
printf("%d", n % 10);
}
int main()
{
	int num = 1234;
	print( num);
	return 0;
}
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
} 
int mian()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}
#include <stdio.h>
int fib(int n)
{
	if (n <= 2)

		return 1;
	else
		return fib(n - 1) + fib(n - 2);

}
int main()
{
	int n = 5;
	printf("%d\n", fib(n));
	return 0;
}

#include<stdio.h>
int nPowersOfk(int n, int k)
{
	if (k == 0)
	{
		return 0;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n * nPowersOfk(n, k - 1);
	}
}
int main()
{
	int n = 3;
	int k = 2;
	printf("%d\n", nPowersOfk(n, k));
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int Digitsum(int n)
{
	if (n < 10)
	{
		return n;
	}

	return  n % 10 + Digitsum(n / 10);
}


int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d\n", Digitsum(n));
	system("pause");
}
