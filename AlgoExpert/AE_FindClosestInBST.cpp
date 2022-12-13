class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int t) {
  // Write your code here.
  BST* temp1 = tree->left;
  BST* temp2 = tree->right;

  int ans;
  
  while(temp1->right)
    temp1 = temp1->right;

  while(temp2->left)
    temp2 = temp2->left;

  
  return abs(temp1->value - t) < abs(temp2->value - t) ?  temp1->value : temp2->value;
}
