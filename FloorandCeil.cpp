#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;

    // write your code here
    int left =0;
    int right = arr[n-1];
    int floor = -1;
    int ceil = -1;
    while(left<=right){
        int mid = (left + right)/2;
        if(data>arr[mid]){
            left = mid + 1;
        //left to mid all are small and mid is greatest of them
        floor = arr[mid];
        }else if(data<arr[mid]){
            right = mid -1;
            ceil = arr[mid];
        }else{
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
    }
   cout<<floor<<endl<<ceil<<endl;
}