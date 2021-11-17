#include <iostream>
#include <stdlib.h>
using namespace std;


struct Node {
	int data;
	Node *left, *right;
	
	Node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};
 
void postorder(Node* root) {
	if (root == NULL) return;
	
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

void preorder(Node* root) {
	if (root == NULL) return;
	
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root) {
	if (root == NULL) return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}


int main() {
	
	Node* root = new Node(4);
	root->left = new Node(3);
	root->right = new Node(9);
	
	root->left->left = new Node(1);
	root->left->left->right = new Node(2);
	
	root->right->left = new Node(7);
	root->right->left->left = new Node(6);
	
	root->right->right = new Node(23);
	root->right->right->left = new Node(14);
	root->right->right->left->left = new Node(12);
	
	preorder(root);
	cout << ";\r\n";
	inorder(root);
	cout << ";\r\n";
	postorder(root);
	cout << ";\r\n";
	system("PAUSE");
	return 0;
}