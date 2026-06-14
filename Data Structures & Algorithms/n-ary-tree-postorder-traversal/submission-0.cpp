/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    std::vector<int> v;
   public:
    std::vector<int> postorder(Node* root) {
        order(root);
        return v;
    }
    void order(Node* root) {

        if (root) {
            for (auto child : root->children) {
                order(child);
            }
        v.push_back(root->val);
        }
    }
};