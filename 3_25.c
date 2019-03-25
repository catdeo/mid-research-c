#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Bin_Search(int arr[], int key,int* p)
{
	int left = 0;
	int right = *p;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int tmp = (sizeof(arr1)/sizeof(arr1[0]) - 1);
	int a = 0;
	a=Bin_Search(arr1,7,&tmp);
	printf("%d\n", a);
	system("pause");
	return 0;
}
//模拟三次密码输入场景
/*char passward[] = "2754ska";
char key[]="";
int i = 0;
printf("请输入密码：>");
scanf("%s", &key);
for (;i<2;i++)
{
if (strcmp("2754ska", key) == 0)
{
break;
}
else
{
printf("请再次输入密码：>");
scanf("%s", &key);
}
}
if (i < 2)
{
printf("登录成功\n");
}
else
{
printf("超出输入上限\n");
}*/

// 编写一个程序，可以一直接收键盘字符,如果是小写字符就输出对应的大写字符,如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//int ch;
//printf("请输入一个字符:>");
//while ((ch = getchar()) != EOF)
//{
//	if ('a' <= ch && ch <= 'z')
//	{
//		printf("%c\n", ch - 32);	
//	}
//	else
//		if ('A' <= ch && ch <= 'Z')
//	    {
//			printf("%c\n", ch + 32);
//	    }
//		else
//		{
//			if ('0' <= ch && ch <= '9')
//				;
//			else
//				;
//		}       
//}
