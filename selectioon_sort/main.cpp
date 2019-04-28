//每次找最小的记录，与第i个进行互换
#include<iostream>
using namespace std;
void print(int a[], int n,int i)
{
	cout << i + 1 << ";";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";

	}
	cout << endl;
}
int selectminkey(int a[], int n, int i)
{
	int k = i;
	for (int j = i + 1; j < n; j++)
	{
		if (a[j]<a[k])
		{
			k=j;
		}
	}
	return k;
}
void SimpleSelectionSort(int a[], int n)
{
	int key, tmp;
	for (int i = 0; i < n; i++)
	{
		key = selectminkey(a, n, i);
		if (key!=i)
		{
			tmp = a[i];
			a[i] = a[key];
			a[key] = tmp;
		}
		print(a, n, i);
	}



}
int main()
{
	int a[8] = { 3, 1, 5, 4, 2, 7, 9, 6 };
	SimpleSelectionSort(a,8);
	print(a, 8, 8);
}