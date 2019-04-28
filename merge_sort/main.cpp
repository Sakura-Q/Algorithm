#include <iostream>
using namespace std;
void print(int a[],int n){
    for (int i = 0; i <n ; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merge(int a[],int tmp[],int s,int m,int n){
    int pb=0;
    int p1=m;
    int p2=s+1;
    while(p1<=s&&p2<=n){
        if(a[p1]<a[p2])
            tmp[pb++]=a[p1++];
        else
            tmp[pb++]=a[p2++];
    }
    while(p1<=s)
        tmp[pb++]=a[p1++];
    while (p2<=n)
        tmp[pb++]=a[p2++];
    for (int j = 0; j < n-m+1; ++j) {
        a[m+j]=tmp[j];
    }
}
void mergesort(int a[],int m,int n, int tmp[]){
    if(m<n){
        int p=m+(n-m)/2;
        mergesort(a,m,p,tmp);
        mergesort(a,p+1,n,tmp);
        merge(a,tmp,p,m,n);
        print(a,10);

    }
}
int main(){

    int a[10]={3,1,5,7,2,4,9,6,10,8};
    int b[10];
    mergesort(a,0,10,b);
//    print(a,10);
    return 0;

}