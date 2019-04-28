#include <iostream>
using namespace std;
void print(int a[],int n){


    for (int j = 0; j <n ; ++j) {
        cout<<a[j]<<" ";
    }
    cout<<endl;
}
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
int  partition(int a[],int low,int high){
    int p=a[low];
    while (low<high){

        while(low<high&&a[high]>=p)
            --high;
        swap(a[low],a[high]);
        while(low<high&&a[low] <=p)
            low++;
        swap(a[low],a[high]);
    }
    print(a,10);
    cout<<" "<<low<<" "<<endl;
    return low;
}
void quicksort(int a[],int low,int high){

    if(low<high){

        int pr=partition(a,low,high);
        quicksort(a,low,pr-1);
        quicksort(a,pr+1,high);
    }

}
int main(){

    int a[10]={3,1,5,7,2,4,9,6,10,8};
    print(a,10);
    quicksort(a,0,9);
    print(a,10);
    return 0;
}