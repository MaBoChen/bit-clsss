#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���ӣ�����һ���������ж��Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("����\n");
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//
//	return 0;
//}


//����һ�����䣬 >= 18�����������꣬����������δ����

//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("����������\n");
//	}	
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	if (num == 0)
//		printf("���������0\n");
//	else
//	{
//		if (num > 0)
//			printf("�������������\n");
//		else
//			printf("��������Ǹ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	if (num == 0)
//		printf("���������0\n");
//	else if (num > 0)
//		printf("�������������\n");
//	else
//		printf("��������Ǹ���\n");
//
//	return 0;
//}
//


//����һ����������������������ж�����������ż�������������������������������������

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		//�ж�������ż��
//		if (num % 2 == 0)
//		{
//			printf("ż��\n");
//		}
//		else
//		{
//			printf("����\n");
//		}
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//  ����һ���˵�����
//  ������� < 18�꣬��ӡ"����"
//	���������18����44���ӡ"����"
//	���������45����59���ӡ"������"
//	���������60����89���ӡ"����"
//	���90�����ϴ�ӡ"������"

//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����\n");
//	else //>=18
//	{
//		if (age <= 44)
//			printf("����\n");
//		else //>44
//		{
//			if (age <= 59)
//				printf("������\n");
//			else //>59
//			{
//				if (age <= 89)
//					printf("����\n");
//				else
//					printf("������\n");
//			}
//		}
//	}
//	return 0;
//}

//
//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����\n");
//	else if (age <= 44)
//		printf("����\n");
//	else if (age <= 59)
//		printf("������\n");
//	else if (age <= 89)
//		printf("����\n");
//	else
//		printf("������\n");
//
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}
//

//<������C/C++���>
//



//int main()
//{
//	printf("%d\n", 2 == 2);
//	return 0;
//}
//


//int main()
//{
//	int a = 0;
//	if (a == 3)//�ж����
//	{
//
//	}
//	a = 3;//��ֵ
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (3 == a)//�ж����
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//a = 3;//��ֵ
//	return 0;
//}
//
//

//
//int main()
//{
//	int age = 10;
//	//18<=age<=40
//	//if (18 <= age <= 40)
//	if(age>=18 && age<=40)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//
//    //if (a > 5)
//    //    b = 3;
//    //else
//    //    b = -3;
//
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//    return 0;
//}
//
//

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	printf("%d\n", m);
//
//	return 0;
//}
//

//int main()
//{
//	int b = 0;
//	int c = 4;
//	int a = (a=3, a+3, b=c*3, c=2*a+b);
//	//       a=3       b=12   c=18
//	//���ű��ʽ�����������һ�μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	return 0;
//}
//


//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	//flagΪ�٣�������һЩ��
//	if (flag == 0)
//	{
//		printf("do some thing\n");
//	}
//	if (!flag)
//	{
//		printf("do some thing\n");
//	}
//	return 0;
//}
//
//


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month==1 || month==2  || month==12)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	//(()&&())||()
//	//if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	//{
//	//	printf("����\n");
//	//}
//	//else
//	//{
//	//	printf("��������\n");
//	//}
//
//	if ((year % 4 == 0) && (year % 100 != 0))
//	{
//		printf("����\n");
//	}
//	else if (year % 400 == 0)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    //i = a++ && ++b && d++;
//
//    i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//
//    //
//    return 0;
//}
//

//��ϰ����������һ������ֵ�������3֮�������
//0 1 2
//

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("������0\n");
//	else if (num % 3 == 1)
//		printf("������1\n");
//	else
//		printf("������2\n");
//
//	return 0;
//}
//

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	}
//
//	return 0;
//}



//int main()
//{
//	int num = 0.0;
//	int n = 1;
//	scanf("%d", &num);
//	switch (num%3)//���ͱ��ʽ
//	{
//	case 0://���ͳ������ʽ
//		printf("������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������������1~7������\n");
//		break;
//	}
//	return 0;
//}


//1. ����1 - 5��������ǡ������ա�;
//2. ����6 - 7���������Ϣ�ա�

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������������1~7������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	//while (1)
//	//	printf("hehe\n");
//
//	return 0;
//}

//��ϰ������Ļ�ϴ�ӡ 1~10 ��ֵ


//int main()
//{
//	//i��ѭ������
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//		++i;//����
//	}
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//1234
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//forѭ��
//forѭ�� �ѳ�ʼ�����������ж��������ַ�����һ��
//

//int main()
//{
//	int i = 0;//ѭ������
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int sum =  0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3 == 0)
//			sum = sum + i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	int sum =  0;
	for (i = 3; i <= 100; i+=3)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}



