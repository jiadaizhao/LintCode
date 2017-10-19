/**
 * Definition of ParentTreeNode:
 * class ParentTreeNode {
 * public:
 *     int val;
 *     ParentTreeNode *parent, *left, *right;
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of the tree
     * @param A, B: Two node in the tree
     * @return: The lowest common ancestor of A and B
     */
    ParentTreeNode *lowestCommonAncestorII(ParentTreeNode *root,
                                           ParentTreeNode *A,
                                           ParentTreeNode *B) {
        // Write your code here
        if (A == nullptr)
        {
            return B;
        }
        else if (B == nullptr)
        {
            return A;
        }
        
        vector<ParentTreeNode*> PA;
        while (A)
        {
            PA.push_back(A);
            A = A->parent;
        }
        vector<ParentTreeNode*> PB;
        while (B)
        {
            PB.push_back(B);
            B = B->parent;
        }
        
        int ia = PA.size() - 1;
        int ib = PB.size() - 1;
        ParentTreeNode* ancestor = nullptr;
        while (ia >= 0 && ib >= 0)
        {
            if (PA[ia] != PB[ib])
            {
                break;
            }
            ancestor = PA[ia];
            --ia;
            --ib;
        }
        
        return ancestor;
    }
};
