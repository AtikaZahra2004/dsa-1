#include<iostream>
using namespace std;
void selectionsort(int arr[],int a){
    int attu;
    for(int i=0; i<s; i++){
        attu=i;
        for (int j=i+1; j<s; j++){
            if (arr[attu]>arr[j]){
                attu=j;
            }
        }
        if (attu!=i){
            int tmp;
            tmp=arr[i];
            arr[i]=arr[attu];
            arr[attu]=tmp;
        }
    }
}

int main(){
int arr[]={9,2,6,1,7}
int s=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<s; i++){
    cout<<arr[i]<<"\t";
}
cout<<"\n after applying selction sort \n";
selectionsort(arr,s);
for(int i=0; i<s; i++){
    cout<<arr[i]<<"\t";

}
}