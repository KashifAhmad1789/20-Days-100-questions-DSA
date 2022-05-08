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

int maxsumsubarray (int arr[],int n){
// CODE HERE
int cur_sum =arr[0];
int max_sum=arr[0];
for(int i =1;i<n;i++){
    
    cur_sum = max(arr[i],cur_sum+arr[i]);

    if(cur_sum>max_sum){
        max_sum = cur_sum;
    }
    
}
 return max_sum;
};
int main () {

    // int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    // int arr[] = {1};
     int arr[] = {5,4,-1,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxsumsubarray(arr, n) << endl;

    return 0;
}