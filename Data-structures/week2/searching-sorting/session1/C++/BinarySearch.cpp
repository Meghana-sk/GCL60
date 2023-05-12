#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int n) {
    int start = 0, end = n - 1; //[2,4,6,7,9]
    int mid; // start = 3, end = 4 mid=3
    while(start <= end) {
        mid = start + (end - start) / 2;
        if(target < arr[mid]) {
            end = mid - 1;
        } else if(target > arr[mid]) {
            start = mid + 1; // start = 4
        } else 
            return mid;
    }
    return -1;
}

int main()
{
    int a[] = {2,4,6,7,9};
    cout<<binarySearch(a, 7, 5);
    return 0;
}
