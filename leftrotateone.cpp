
#include <iostream>

using namespace std;
void leftrotateone(int arr[], int n){
    int temp = arr[0];
    for(int i =0;i<n;i++){
        arr[i]= arr[i+1];
    
    }
    arr[n-1] = temp;
    // // right rotetae method
//     int x = arr[n-1];
//     for(int i=n-1;i>0;i--){
//         arr[i] = arr[i-1];
//     }
//   arr[0] = x;
}
void rotate(int arr[], int n, int d){
    for(int i=0;i<d;i++){
        leftrotateone(arr,n);
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    rotate(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
