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

void findMaximumProduct (int arr[],int n){
// CODE HERE
if(n<2) return;
int max_product = INT_MIN;
int max_i, max_j;
for(int i=0;i<n-1;i++){
    for(int j =i+1;j<n;j++){
        if(max_product<arr[i]*arr[j]){
            max_product = arr[i]*arr[j];
            max_i=i,max_j = j;
        }
    }
    
}
cout << arr[max_i] << ".." << arr[max_j] << endl;
};
int main () {

    int arr[] = {-10, -3, 5, 6, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaximumProduct(arr, n);

    

    return 0;
}