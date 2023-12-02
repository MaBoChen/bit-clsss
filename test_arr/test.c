#include <stdio.h>

//变长数组的意思是数组的大小就可以使用变量指定，但是数组一旦创建后，大小就无法改变了
//注意：变长数组不能初始化

int main()
{
	int n = 0;
	scanf("%d", &n);//10
	int arr[n];//变长数组了
	//给数组输入n个值
	int i = 0;
	for(i=0; i<n; i++)
	{
		arr[i] = i;
	}
	
	//输出n个值
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}


