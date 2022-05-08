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
int largest = INT_MIN;
int smallest = INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]>largest) largest = arr[i];
    if(arr[i]<smallest) smallest = arr[i];

}
cout << "largest number is " << largest<<endl<< "smallest number is " << smallest << endl;
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
solve(arr,n);


return 0;
}