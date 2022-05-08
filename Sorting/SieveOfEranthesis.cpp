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

//int arr[] = {1,2,3,4,5};
int n =100 ;
bool arr[n + 1];

for(int i =2;i*i<n;i++){
    if(arr[i]==false){
        for(int ja=i;i*ja<n;ja++){
            arr[i*ja] = true;
        }
    }
}
for(int i=2;i<n;i++){
    if(arr[i]==false){
        cout<<i<<endl;
    }
}


return 0;
}