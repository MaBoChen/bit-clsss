#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	/*int m = 3 + 5;
//	int n = m - 2;
//
//	printf("%d\n", m);
//	printf("%d\n", n);*/
//
//	/*int num = 5;
//	printf("%d\n", num * num);*/
//
//	printf("%d\n", 6 / 3);
//	printf("%d\n", 6 / 4);//1
//	printf("%f\n", 6 / 4.0);//1
//	printf("%f\n", 6.0 / 4);//1
//	printf("%f\n", 6.0 / 4.0);//1
//
//
//
//	// / ���ŵ����˶���������ʱ�򣬼�������������������������֮�����~
//	//%f ��ר��������ӡ�������� - float,С�����Ĭ���Ǵ�ӡ6λ
//	//%lf ��ӡdouble���͵ĸ�������
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    printf("%d\n", score);
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 3.5;
//    printf("%d\n", a);
//
//    return 0;
//}


//int main()
//{
//	int ret = 6 % 4;//1....2
//	printf("%d\n", ret);//2
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 100;
//	////����������ͬʱ��һ����ʼֵ����г�ʼ��
//
//	//a = 200;//��ֵ
//
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	c = b = a + 3;//������ֵ�������������θ�ֵ�ġ�
//
//	printf("%d %d\n", b, c);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//	//a = a + 3;
//	//a = a-3;
//	//a = a*3;
//	//a = a/3;
//	a /= 3;//���ϸ�ֵ
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	//a = a + 1;
//	//a += 1;
//	//a++;//����++
//	//++a;//ǰ��++
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++
//	//a=a+1, b=a;
//	//����ھ�����+1����ʹ�ã�
//
//	printf("a=%d\n", a);//11
//	printf("b=%d\n", b);//11
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++
//	//b=a, a=a+1;
//	//����ھ�����ʹ�ã���+1
//
//	printf("a=%d\n", a);//11
//	printf("b=%d\n", b);//10
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//11
//	printf("%d\n", a);//11
//
//
//	return 0;
//}

//-- �Ͳ�����

//int main()
//{
//	int a = 10;
//	int b = --a;//ǰ��--
//	//a=a-1, b=a
//	//��--����ʹ��
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//����--
//	//b=a,a=a-1
//	//��ʹ�ã���--
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	printf("%d\n", (++a) + (++a) + (++a));//������룬��������ģ�����
//
//	return 0;
//}
//

//int main()
//{
//	int a = -10;
//	printf("%d\n", -a);
//	return 0;
//}

//
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	//5.5
//	//6.7
//	return 0;
//}
//

//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello\nworld\n");
//	//printf("there are 3 apples\n");
//	//printf("there are %d apples\n", 3);
//	//printf("there are %d apples\n", 5);
//
//	//printf("zhangsan will come tonight\n");
//	//printf("%s will come tonight\n", "����");
//	//printf("%s will come tonight\n", "lisi");
//
//	//printf("%s˵�������� %d ��\n", "�仨", 12);
//	//int num = 10;
//	//printf("%d\n", num);
//	//printf("%f\n", num);
//
//
//
//	return 0;
//}
//


//
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", 123); 
//    printf("%5d\n", 123);//�Ҷ���
//    printf("%5d\n", 1234567);//�Ҷ���
//    printf("%-5dhehe\n", 123);//�����
//
//
//
//    return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    printf("%12f\n", 123.45);
//    return 0;
//}
//
//int main()
//{
//	printf("%+d\n", 10);
//	printf("%+d\n", -10);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("Number is %.2f\n", 5.2678);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%6.2f\n", 123456.5);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%*.*f\n", 8, 2, 0.5);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    printf("%.3s\n", "hello world");
//    return 0;
//}
//


//int main()
//{
//	int score = 0;
//	printf("������ɼ�:");
//	//����
//	scanf("%d", &score);//�ṩ���ǵ�ַ
//	printf("%d", score);
//
//	return 0;
//}

//int main()
//{
//	char arr[6] = { 0 };
//	scanf("%s", arr);//�������������ǵ�ַ�����ﲻ��Ҫȡ��ַ
//	printf("%s\n", arr);
//
//	return 0;
//}
//




//int main()
//{
//	int i = 0;
//	int j = 0;
//	float x = 0.0f;
//	float y = 0.0f;
//
//	scanf("%d%d%f%f", &i, &j, &x, &y);//1 -20 3.4 -4.0e3
//
//	printf("i = %d\n", i);
//	printf("j = %d\n", j);
//	printf("x = %f\n", x);
//	printf("y = %f\n", y);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int x;
//    float y;
//
//    // �û����� "    -13.45e12# 0"
//    //0.45*10^12
//    scanf("%d", &x);
//    printf("%d\n", x);
//    scanf("%f", &y);
//    //0.449999994880
//    printf("%f\n", y);
//    return 0;
//}

//int main()
//{
//	//int n = 10;
//	//char arr[10] = { 0 }; 
//	//scanf("%s", arr);
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//EOF;//-1
//
//	int ret = scanf("%d%d%d", &a, &b, &c);
//	printf("ret = %d\n", ret);
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//	return 0;
//}

//һ������
//
// 
//��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*while (scanf("%d %d", &a, &b) == 2)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//	*/
//
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	char ch = '0';
//	//scanf("%d", &a);
//	//printf("%d\n", a);
//
//	scanf(" %c", &ch);
//	printf("%cxxxxx\n", ch);
//
//	return 0;
//}

//
//int main()
//{
//	char arr1[10] = { 0 };//abc\0
//	char arr2[10] = { 0 };//def\0
//
//	scanf("%s %s", arr1, arr2);//   abc  def
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    char name[11];
//    scanf("%10s", name);
//    printf("%s\n", name);
//
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

#include <stdio.h>

int main()
{
    int year = 0;
    int month = 0;
    int day = 0;

    //scanf("%d-%d-%d", &year, &month, &day);
    //2023-11-22
    scanf("%d%*c%d%*c%d", &year, &month, &day);
    printf("%d %d %d\n", year, month, day);
    return 0;
}

