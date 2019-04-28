//基本思想：将一个记录插入已排序好的有序表中，从而得到一个新的记录，数增1的有序表，即，现将序列的第一个记录看成
//是一个有序的子序列，然后从第二个记录逐个进行插入，直到整个序列有序为止；
#include<iostream>
using namespace std;
void print(int a[], int n, int i)
{
	cout << i << ";";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

}
void InsertSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i]<a[i-1])
		{
			int j = i - 1;
			int x = a[i];//哨兵
//			a[i] = a[i - 1];
			while (x<a[j])
			{
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = x;
		}
		print(a, n, i);
	}


}
int main()
{
	int a[8] = { 3, 1, 5, 7, 2, 4, 9, 6 };
	InsertSort(a, 8);
	print(a, 8, 8);

}
