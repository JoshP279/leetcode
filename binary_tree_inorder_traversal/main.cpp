#include "Solution.h"
#include "iostream"

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    std::vector<int> orderTraveral = Solution().inorderTraversal(root);

    for (int num : orderTraveral) {
        std::cout << num << std::endl;
    }

	return 0;
}