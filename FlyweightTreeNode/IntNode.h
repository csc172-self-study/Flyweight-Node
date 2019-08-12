/*
 * IntNode.h
 *
 * Internal node of binary tree. Always has two children, but one or both may be null.
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

	// Traverse root, then left, then right
	void traversePreorder() {
		cout << "Internal node: " << getVal() << "\n";
		if (getLeft() != BinNode<E>::nullNode) getLeft()->traverse();
		if (getRight() != BinNode<E>::nullNode) getRight()->traverse();
	}

	// Traverse left, then right, then root
	void traversePostorder() {
		if (getLeft() != BinNode<E>::nullNode) getLeft()->traverse();
		if (getRight() != BinNode<E>::nullNode) getRight()->traverse();
		cout << "Internal node: " << getVal() << "\n";
	}

	// Traverse left, then root, then right
	void traverseInorder() {
		if (getLeft() != BinNode<E>::nullNode) getLeft()->traverse();
		cout << "Internal node: " << getVal() << "\n";
		if (getRight() != BinNode<E>::nullNode) getRight()->traverse();
	}

public:
	// Constructor. Takes node value and two children.
	IntNode(const E& val, BinNode<E>* left_child, BinNode<E>* right_child) {
			value = val;
			leftChild = left_child;
			rightChild = right_child;
		}

	// Default constructor
	IntNode(BinNode<E>* left_child = NULL, BinNode<E>* right_child = NULL) {
		leftChild = BinNode<E>::nullNode;
		rightChild = BinNode<E>::nullNode;
	}

	// Internal nodes are not leaves
	bool isLeaf() {
		return false;
	}

	// Return node value
	E getVal() {
		return value;
	}

	// Return left child
	BinNode<E>* getLeft() {
		return leftChild;
	}

	// Return right child
	BinNode<E>* getRight() {
		return rightChild;
	}

	// Traverse.
	// Could modify this so it takes a parameter to determine type of traversal.
	void traverse() {
		traversePreorder(); // Change this to traverse differently
	}
};

#endif /* INTNODE_H_ */
