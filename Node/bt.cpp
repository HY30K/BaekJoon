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
	// 종료조건
	if (bt == NULL) return;
	// 방문한 노드 출력
	cout << bt->data;
	// 왼쪽 자식 방문
	PreorderTraverse(bt->left);
	// 오른쪽 자식 방문
	PreorderTraverse(bt->right);
}
void InorderTraverse(BTreeNode* bt)
{
	// 종료조건
	if (bt == NULL) return;

	InorderTraverse(bt->left);

	cout << bt->data;

	InorderTraverse(bt->right);

}
void PostorderTraverse(BTreeNode* bt)
{
	// 종료조건
	if (bt == NULL) return;

	PostorderTraverse(bt->left);

	PostorderTraverse(bt->right);

	cout << bt->data;
}