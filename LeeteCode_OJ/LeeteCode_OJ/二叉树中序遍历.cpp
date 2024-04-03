#include "myhead.h"
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
  public:
      vector<int> inorderTraversal(TreeNode* root) {
          stack<TreeNode*> st;
          if (root == nullptr) return {};
          vector<int> ret;
          st.push(root);
          TreeNode* cur = root->left;//Ê¼ÖÕÎªÕ»¶¥µÄ×óÊ÷£¿

          while (st.size())
          {
              if (cur == nullptr)
              {
                  cur = st.top();
                  ret.push_back(cur->val);
                  cur = cur->right;
                  st.pop();
              }
              else
              {
                  st.push(cur);
                  cur = cur->left;
              }

          }
          return ret;
      }
  };

int main()
{
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution sl;
    sl.inorderTraversal(root);


    return 0;
}