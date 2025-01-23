#include<iostream>
using namespace std;
void b(int arr[],int s){
int temp;
for(int i=0; i<s; i++){
    for(int j=0; j<s-1-i; j++){
        if(a[j]>a[j+1]){
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
}
int main(){
    int a[]={11,23,99,88,7};
    int s=sizeof(a)/sizeof (a[0]);

    cout<<a[j];
}
