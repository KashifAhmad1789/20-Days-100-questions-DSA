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

int factorial (int n){
// CODE HERE
// E ==> f(5) == 5.4.3.2.1
// ewf ==> f(5) == 5.f(4)

if(n<=1) return 1;
return n * factorial(n-1);


};


int main () {

int n = 5;
cout<<factorial(5);

return 0;
}