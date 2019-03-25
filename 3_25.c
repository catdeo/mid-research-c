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
//ģ�������������볡��
/*char passward[] = "2754ska";
char key[]="";
int i = 0;
printf("���������룺>");
scanf("%s", &key);
for (;i<2;i++)
{
if (strcmp("2754ska", key) == 0)
{
break;
}
else
{
printf("���ٴ��������룺>");
scanf("%s", &key);
}
}
if (i < 2)
{
printf("��¼�ɹ�\n");
}
else
{
printf("������������\n");
}*/

// ��дһ�����򣬿���һֱ���ռ����ַ�,�����Сд�ַ��������Ӧ�Ĵ�д�ַ�,������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//int ch;
//printf("������һ���ַ�:>");
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
