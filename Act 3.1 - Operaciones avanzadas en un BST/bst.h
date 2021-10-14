#ifndef BST_H
#define BST_H

class Bst{
public:
Bst();
Bst(int n);

void visit();
void height();
void ancestors(int n);
void whatlevelamI(int n);
void preOrder(struct Node* node);
void inOrder(struct Node* node);
void postOrder(struct Node* node);
void levelByLevel(struct Node* node);
};

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void Bst::preOrder (struct Node* node){
if (node == NULL)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void Bst::inOrder (struct Node* node){
 if (node == NULL)
        return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void Bst::postOrder (struct Node* node){
  if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

void Bst::levelByLevel (struct Node* node){

}

Bst::Bst(){
}

void Bst::visit (){
cout<<preOrder(struct Node* node)<<"\n";
cout<<inOrder(struct Node* node)<<"\n";
cout<<postOrder(struct Node* node)<<"\n";
cout<<levelByLevel(struct Node* node)<<"\n";

}

void Bst::height (){

if(root==NULL)
		return 0;

	else
	{
		int lb=height(root->left);
		int rb=height(root->right);
		return max(lb,rb)+1;
	}
}

void Bst::ancestors (int root, int n){
if not root:
    return False
  else:
    if root.n==n:
      return True
    else:
      if (ancestors(root.left,n) || ancestors(root.right,n)):
        cout<<root.n;
        return True
}


void Bst::whatlevelamI (int n){
 if (node == NULL)
        return 0;
 
    if (node -> data == data)
        return level;
 
    int currentLevel = whatlevelamI(node -> left,
                                 data, level + 1);
    if (currentLevel != 0)
        return currentLevel;
 
    currentLevel = whatlevelamI(node->right,
                             data, level + 1);
    return currentLevel;
}

#endif