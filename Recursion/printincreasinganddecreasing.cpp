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

void printincreasingdecreasing (int n){
// CODE HERE
if(n==0) return;
cout<<n<<endl;
printincreasingdecreasing(n-1);
cout<<n<<endl;

// Expectation ==> pdi(4) = 43211234
// Faith ==>  pdi(3) = 3 2 1 1 2 3 
// ewf ==> pdi(4) = 4 pdi(3) 4

};
int main () {

int n =5;
printincreasingdecreasing(n);



return 0;
}