#pragma once
#include <vector>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {};
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {};
};

class Solution
{
private:
	TreeNode* helper(std::vector<int>& nums, int left, int right);
public:
	TreeNode* sortedArrayToBST(std::vector<int>& nums);
};

