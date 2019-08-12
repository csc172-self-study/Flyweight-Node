/*
 * IntNode.h
 *
 *  Created on: Jul 12, 2019
 *      Author: alex
 */

#ifndef INTNODE_H_
#define INTNODE_H_

#include "BinNode.h"
#include <iostream>
using std::cout;

template <typename E>
class IntNode : public BinNode<E> {
private:
	E value;
	BinNode<E>* leftChild;
	BinNode<E>* rightChild;

	void traversePreorder() {
		cout << "Internal node: " << getVal() << "\n";
		if (getLeft() != BinNode<E>::nullNode) getLeft()->traverse();
		if (getRight() != BinNode<E>::nullNode) getRight()->traverse();
	}

	void traversePostorder() {
		if (getLeft() != BinNode<E>::nullNode) getLeft()->traverse();
		if (getRight() != BinNode<E>::nullNode) getRight()->traverse();
		cout << "Internal node: " << getVal() << "\n";
	}

	void traverseInorder() {
		if (getLeft() != BinNode<E>::nullNode) getLeft()->traverse();
		cout << "Internal node: " << getVal() << "\n";
		if (getRight() != BinNode<E>::nullNode) getRight()->traverse();
	}

public:
	IntNode(const E& val, BinNode<E>* left_child, BinNode<E>* right_child) {
			value = val;
			leftChild = left_child;
			rightChild = right_child;
		}

	IntNode(BinNode<E>* left_child = NULL, BinNode<E>* right_child = NULL) {
		leftChild = BinNode<E>::nullNode;
		rightChild = BinNode<E>::nullNode;
	}

	bool isLeaf() {
		return false;
	}

	E getVal() {
		return value;
	}

	BinNode<E>* getLeft() {
		return leftChild;
	}

	BinNode<E>* getRight() {
		return rightChild;
	}

	void traverse() {
		traversePreorder(); // Change this to traverse differently
	}
};



#endif /* INTNODE_H_ */
