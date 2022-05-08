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

int maxsumcontigous(int arr[],int n){
// CODE HERE
int cursum = arr[0];
int maxsum = arr[0];
for(int i=1;i<n;i++){
    
    cursum = max(arr[i], cursum+arr[i]);
    maxsum = max(maxsum,cursum);
}
return maxsum;

};
int main () {

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxsumcontigous(arr,n);

    return 0;
}