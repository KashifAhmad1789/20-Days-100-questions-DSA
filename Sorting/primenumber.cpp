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
int n = 101;

for(int x =2;x<=n;x++){
    bool xisprime = true;

    for(int div =2;div*div<=x;div++){
        if(x%div==0){
            xisprime = false;
        
        }
    }
    if(xisprime==true){
        cout<<x<<endl;
    }
}



return 0;
}