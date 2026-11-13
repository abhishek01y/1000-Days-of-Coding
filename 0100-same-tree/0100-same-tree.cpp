
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Both trees are empty
        if (p == nullptr && q == nullptr) {
            return true;
        }

        // One tree is empty
        if (p == nullptr || q == nullptr) {
            return false;
        }

        // Check current node values
        if (p->val != q->val) {
            return false;
        }

        // Check left and right subtrees
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
