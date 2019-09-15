/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if( !root ){//达到终点
            return 0;
        }
        int res = 0;

        for(vector<Node*>::iterator iter = root->children.begin();
        iter != root->children.end(); ++iter){
            int r = maxDepth(*iter);
            if (r > res){
                res = r;
            }
        }
        return res+1;           
    }
};