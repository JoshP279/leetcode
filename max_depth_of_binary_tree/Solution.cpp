#include "Solution.h"
#include <algorithm>
int Solution::maxDepth(TreeNode* root) {
	if (root == nullptr) {
		return 0;
	}
	else return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}