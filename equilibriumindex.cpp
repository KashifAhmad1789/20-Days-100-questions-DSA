#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here
/*
int equilibriumarray (int arr[],int n){
// CODE HERE
int i, j, leftsum, rightsum;
for(i=0;i<n;i++){
    leftsum =0;

    for (j = 0; j < i; j++)
    {
        
        leftsum = leftsum + arr[j];
    }
    rightsum =0;
    for(j=i+1;j<n;j++){
        rightsum = rightsum + arr[j];
    }
    if(leftsum ==rightsum) return i;
}
*/
// second method

int equilibriumarray (int arr[],int n){
// CODE HERE
int sum=0, leftsum =0;
for(int i=0;i<n;i++){
    sum = sum +arr[i];
}
for(int i =0;i<n;i++){
    sum -=arr[i];
    if(leftsum==sum)
        return i;
    
    leftsum = leftsum + arr[i];
}


return -1;


};
int main () {

    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << equilibriumarray(arr, arr_size);
    return 0;
}
