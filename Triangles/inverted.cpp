#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Size:";
    int n;
    cin>>n;
    for (int i=0 ;i<n; i++)
    {
        for (int j= 0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for (int k=0;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}