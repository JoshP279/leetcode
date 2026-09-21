#include "Solution.h"
#include "iostream"
#include <vector>
#include <stack>

std::vector<int> Solution::inorderTraversalRecursive(TreeNode* root) {
	std::vector<int> values = {};

	if (root == nullptr) {
		return values;
	}
	
	std::vector<int> left = inorderTraversalRecursive(root->left);

	values.insert(values.end(), left.begin(), left.end());

	values.push_back(root->val);

	std::vector<int> right = inorderTraversalRecursive(root->right);

	values.insert(values.end(), right.begin(), right.end());

	return values;
}


std::vector<int> Solution::inorderTraversal(TreeNode* root) {
	std::vector<int> values = {};

	if (root == nullptr) {
		return values;
	}

	std::stack<TreeNode*> stack;

	TreeNode *curr = root;

	while (curr != nullptr || !stack.empty()) {
		while (curr != nullptr) {
			stack.push(curr);
			curr = curr->left;
		}
		
		curr = stack.top();

		stack.pop();

		values.push_back(curr->val);

		curr = curr->right;
	}

	return values;
}