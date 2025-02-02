#include<iostream>
using namespace std;

 void selectionSort(int arr[],int n){
         
         for(int i=0;i<n;i++){
            int si=i;
            for(int j=i+1;j<n;j++){
               if(arr[j]<arr[si]){
                 si=j;
               }
            }
            swap(arr[i],arr[si]);
         }
 }

int main(){
     int arr[]={5,1,3,2,4};
     int n=sizeof(arr)/sizeof(arr[0]);

     selectionSort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i];
     }
}