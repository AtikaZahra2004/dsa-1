// #include<iostream>
// using namespace std;
// void insrt(int arr[],int s){
//     for(int i=0; i<s; i+){
//         int mn=i;
//     }
//     while(mn>=0 && arr[mn]<[mn-1]){
// int tmp;
// tmp=arr[mn-1];
// arr[mn-1]=arr[mn];
// arr[mn]=tmp;
// mn--;
//     }
// }
// cout<<"\n after insrtion \n";
// for(int i=0; i<s; i++){
//     cout<<arr[i]<<"\t";
// }

// int main(){
//     int arr[]={10,5,50,2,20};
//     int s=sizeof(arr)/sizeof (arr[0]);
//     for(int i=0; i<s; i++){
//         cout<<arr[i]<<"\t"
//     }
//     insrt(arr,s)
// }

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
       
       for(int i=1;i<=n;i++){
            int key=arr[i];
            int j=i-1;

            while(j>=0 && arr[j]>key){

                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
       }
}

int main(){
    int arr[]={5,2,4,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


}