class Node{
    public:
    class Node *left;
    int data;
    class Node *right;
};
class Node *root;

void inorder(class Node * node){
    if(node != NULL){
        inorder(node->left);
        std::cout<< node->data;
        inorder(node->right); 
    }
}