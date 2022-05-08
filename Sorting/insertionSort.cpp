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



};
int main () {

int arr[] = {58,98,63,85,74};
int n = sizeof(arr) / sizeof(arr[0]);
for(int i=1;i<=n-1;i++){
    for(int j =i-1;j>=01;j--){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }else{
            break;
        }
    }
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
    return 0;
}
