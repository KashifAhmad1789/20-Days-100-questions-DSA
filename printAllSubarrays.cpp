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

void printAllSubarrays(int arr[], int n){
    // CODE HERE

int i, j;
for(i=0;i<n;i++){
    int sum = 0;
    for(j =i;j<n;j++){
        sum = sum + arr[j];
        if(sum==0){
            cout<<i<<"...."<<j<<endl;
        }
    }
}
};
int main () {

    int nums[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(nums) / sizeof(nums[0]);

    printAllSubarrays(nums, n);

    return 0;

    
}