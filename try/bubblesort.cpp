#include<iostream>
using namespace std;
int main(){
    int arr[] = {20,10,60,25,80};
    int n = 5;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}