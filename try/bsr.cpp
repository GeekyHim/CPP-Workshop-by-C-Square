
#include <iostream>
using namespace std;


// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int ele = 10;
    int low;
    int high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == ele)
            cout<<mid;
            break;
        // If x greater, ignore left half
        if (arr[mid] < ele)
            low = mid + 1;
        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }
    if (low>high){
        cout<<ele<<" is not in the array!";
    }
}
