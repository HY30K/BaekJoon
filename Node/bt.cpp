#include "bt.h"

BTreeNode* MakeBTreeNode(void)
{
	//make binary tree node
	BTreeNode* nd = new BTreeNode;
	//initialize
	nd->left = NULL;
	nd->right = NULL;

	//return pointer
	return nd;
}
void DeleteBTreeNode(BTreeNode* bt) {
	delete bt;
}
int GetData(BTreeNode* bt) {
	return bt->data;
}
void SetData(BTreeNode* bt, int data) {
	bt->data = data;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in left link, delete it
	if (main->left != NULL) delete main->left;
	// put sub in left link of main
	main->left = sub;
}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) {
	// if there is a node in right link, delete it
	if (main->right != NULL) delete main->right;
	// put sub in right link of main
	main->right = sub;
}
void PreorderTraverse(BTreeNode* bt)
{
	// ��������
	if (bt == NULL) return;
	// �湮�� ��� ���
	cout << bt->data;
	// ���� �ڽ� �湮
	PreorderTraverse(bt->left);
	// ������ �ڽ� �湮
	PreorderTraverse(bt->right);
}
void InorderTraverse(BTreeNode* bt)
{
	// ��������
	if (bt == NULL) return;

	InorderTraverse(bt->left);

	cout << bt->data;

	InorderTraverse(bt->right);

}
void PostorderTraverse(BTreeNode* bt)
{
	// ��������
	if (bt == NULL) return;

	PostorderTraverse(bt->left);

	PostorderTraverse(bt->right);

	cout << bt->data;
}