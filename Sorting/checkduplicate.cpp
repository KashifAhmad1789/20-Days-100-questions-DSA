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

void solve (int arr[],int n){
// CODE HERE
sort(arr,arr+n);
int dup = -1;
int i;
for( i=0;i<=n-1;i++){
    if(arr[i]==arr[i+1]){
        dup = arr[i];
        break;
    }
}

cout<<dup<<endl;


};
int main () {

int arr[] = {7,6,5,4,3,5,3};
int n = sizeof(arr) / sizeof(arr[0]);
solve(arr,n);



return 0;
}