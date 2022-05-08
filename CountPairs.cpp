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

int solve (int arr[],int n,int key){
// CODE HERE
int count =0;
for(int i=0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(arr[i]+arr[j]==key)
            count++;
    }
}
return count;
};
int main () {

int arr[] = {1,5,7,1,-1};
int n = sizeof(arr) / sizeof(arr[0]);
int k =6;
cout<<solve(arr,n,k)<<endl;



return 0;
}