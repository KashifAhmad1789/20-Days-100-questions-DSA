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

void Polynomial (int arr[],int n){
// CODE HERE



};
int main () {

int arr[] = {1,2,3,4,5};
int n  =3;int x = 10;
int c = n;
int pox = x;
int ans =0;
while(c>=1){
    int term = c*pox;
    ans += term;
    c--;
    pox = pox *x;

}

cout<<ans;


return 0;
} 