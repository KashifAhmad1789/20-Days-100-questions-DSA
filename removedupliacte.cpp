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

int duplicate (int arr[],int n){
// CODE HERE
int count =0;
for(int i=0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if(arr[i]==arr[j])
            cout<<arr[i]<<" ";
            count++;
    }
}
cout<<"the number of repeating elemnt is"<<endl;


};
int main () {

int arr[] = {1,2,2,3,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
duplicate(arr,n);


return 0;
}