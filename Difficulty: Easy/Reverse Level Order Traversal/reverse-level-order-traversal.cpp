/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        
        stack<int>ans;
        if(root==nullptr)
        {
            return {};
        }
        queue<Node*>q;
        q.push(root);
       while(!q.empty())
       {
           Node* curr =q.front();
           q.pop();
           ans.push(curr->data);
           if(curr->right)
           {
               q.push(curr->right);
           }
           if(curr->left)
           {
               q.push(curr->left);
           }
       }
       vector<int> result;
      while(!ans.empty())
       {
           result.push_back(ans.top());
           ans.pop();
       }
       return result;
       }
};