#include <iostream>
using namespace std;
void print(int a[],int n){
    for (int i = 0; i <n ; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
//void bubblesort(int a[],int n)
//{
//    for (int i = 0; i <n ; ++i) {
//        for (int j = 0; j <n-i-1; ++j) {
//         if(a[j]>a[j+1]){
//             int tmp=a[j+1];
//             a[j+1]=a[j];
//             a[j]=tmp;
//         }
//        }
//    }
//
//}
void bubblesort(int *a,int n){
    int i=n-1;
    while(i>0){
        int pos=0;
        for (int j = 0; j <i ; ++j) {
            if(a[j+1]<a[j]){
             int tmp=a[j+1];
             a[j+1]=a[j];
             a[j]=tmp;
         }
            pos=j;
        }
        i=pos;
    }
}


int main(){

    int a[10]={3,1,5,7,2,4,9,6,10,8};
    int b[10];
   bubblesort(a,10);
   print(a,10);
    return 0;

}
