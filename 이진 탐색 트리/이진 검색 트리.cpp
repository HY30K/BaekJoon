#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Node
{

	Node* left, * right;
	int data;

};

struct Tree
{

public:
	Node* root;

	void Insert(int n) {

		Node* node = new Node{ nullptr, nullptr, n };

		if (root == nullptr) {

			root = node;

		}
		else
		{

			Connect(node, root);

		}

	}

	void Connect(Node* node, Node* parent) {

		if (node->data < parent->data) {

			if (parent->left == nullptr) parent->left = node;
			else Connect(node, parent->left);

		}
		else {

			if (parent->right == nullptr) parent->right = node;
			else Connect(node, parent->right);

		}

	}

	void Serch() {

		SerchInject(root);

	}

	void SerchInject(Node* node) {

		if (node->left != nullptr) SerchInject(node->left);

		if (node->right != nullptr) SerchInject(node->right);

		cout << node->data << endl;

	}

};

int main()
{

	int inp;
	Tree _tree = Tree();

	while (cin>> inp)
	{

		_tree.Insert(inp);

	}

	_tree.Serch();

}