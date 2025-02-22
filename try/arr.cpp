#include <iostream>
using namespace std;

void traversal(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter Size: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    traversal(arr,size);
    


}