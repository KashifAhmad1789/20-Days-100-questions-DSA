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

int occurance (int arr[],int n, int x){
// CODE HERE
int count =0;
for(int i=0;i<n;i++){
    if(arr[i]==x) count++;
   
}

return count;
};
int main () {

int arr[] = {0, 5, 5, 5, 4};
int n = sizeof(arr) / sizeof(arr[0]);
int x =5;
cout<<occurance(arr,n,x)<<endl;



return 0;
}