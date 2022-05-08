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

void targetSumtriplet(int arr[], int n, int target){
sort(arr,arr+n);
for(int i =0;i<n;i++){
    int ntar = target - arr[i];
    int j = i+1;
    int k = n -1;
    while(j<k){
        if(arr[j]+arr[k]>ntar){
            k--;
        }else if(arr[j]+arr[k]<ntar){
            j++;
        }else{
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            j++;
            k--;
        }
    }
}
}
int main () {

int arr[] = {1,9,6,4,8,3,12,14,24,10,15};
int n = sizeof(arr) / sizeof(arr[0]);
int target = 25;

targetSumtriplet(arr,n,target);

    return 0;
}