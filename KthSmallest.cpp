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

int solve (int arr[],int n, int k){
// CODE HERE
sort(arr,arr+n);
return arr[k -1];


};
int main () {

int arr[] = {7,10,4,3,20,15,6,5,1};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 3;
cout<<solve(arr,n,k);


return 0;
}