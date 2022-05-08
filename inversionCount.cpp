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

int inversion (int arr[],int n){
// CODE HERE
int inversioncount =0;
int i, j;
for(i=0;i<n-1;i++){
    for(j =i+1 ;j<n;j++){
        if(arr[i]>arr[j])
            inversioncount++;
    }
}
return inversioncount;
};
int main () {

    int arr[] = {1, 20, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << inversion(arr, n);

    return 0;
}
