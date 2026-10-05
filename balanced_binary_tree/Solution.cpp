#include "Solution.h"
#include <queue>
bool Solution::isBalanced(TreeNode* root) {
	return height(root) != -1;
}

int Solution::height(TreeNode* node) {
	if (node == nullptr) {
		return 0;
	}

	int left = height(node->left);

	if (left == -1) {
		return -1;
	}

	int right = height(node->right);

	if (right == -1) {
		return -1;
	}

	if (std::abs(left - right) > 1) {
		return -1;
	}

	return 1 + std::max(left, right);
}