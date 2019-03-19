#include <bits/stdc++.h>
using namespace std;
int findRepeatingElement(int arr[], int low, int high)
{
    low = 0 , high = n-1;
    if (low > high)
        return -1;
 
    int mid = (low + high) / 2;
    if (arr[mid] != mid + 1)
    {
        if (mid > 0 && arr[mid]==arr[mid-1])
            return mid;
        return  findRepeatingElement(arr, low, mid-1);
    }
    return findRepeatingElement(arr, mid+1, high);
    else
    {
    cout<<"Unique";
}
int main()
{
    int  arr[] = {1, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = findRepeatingElement(arr, 0, n-1);
    if (index != -1)
        cout << arr[index];
    return 0;
}
