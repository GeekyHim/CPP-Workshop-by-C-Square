#include <iostream>
using namespace std;

int main(){
    int ele;
    int arr[5] = {0,10,60,80,100};
    cout<<"Enter the search element:";
    cin>>ele
    for(int i=0;i<5;i++){
        if(arr[i]==ele){
            cout<<ele<<" is at "<<i<<" index";
        }
    }  
}