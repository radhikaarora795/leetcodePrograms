#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    int maxDiameter=0;
public:
    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);

        maxDiameter=max(maxDiameter,left+right);

        return 1+max(left,right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};

int main() {
    
    return 0;
}