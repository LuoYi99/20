/*
题目：
汉诺塔求解
*/
/*
思路：
假设搬运n个从A到B借助C
那么
先将上面n-1个搬运到C
然后将第n个搬运到B
最后将C上的n-1个搬运到B
以此类推
*/
#include<stdio.h>
#include<string.h>
void hnt(int n,char from,char to,char help)
{
	if(n==1)
	{
		printf("from %c to %c\n",from,to);
		return;
	}
	hnt(n-1,from,help,to);
	printf("from %c to %c\n",from,to);
	hnt(n-1,help,to,from);
}
void main()
{
	hnt(4,'A','B','C');
}
