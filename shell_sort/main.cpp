//先将整个待排序的记录序列分割成若干子序列分别进行直接插入排序，待整个序列中的记录基本有序时，再对全体记录进行依次直接插入排序。

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

void ShellInsertSort(int a[], int n, int dk)
{
    for (int i = dk; i < n; i++)
    {
        if (a[i] < a[i - dk])
        {
            int j = i - dk;
            int x = a[i];
            a[i] = a[i - dk];
            while (x<a[j])
            {
                a[j + dk] = a[j];
                j -= dk;
            }
            a[j + dk] = x;
        }
        print(a, n, i);
    }


}
void shellsort(int a[], int n)
{
    int dk = n / 2;
    while (dk>=1)
    {
        ShellInsertSort(a, n, dk);
        dk =dk/2;
    }


}
int main()
{
    int a[8] = { 2, 5, 3, 9, 1, 5, 7, 4 };
//    ShellInsertSort(a,8,1);
    shellsort(a, 6);
    print(a, 8, 8);

}