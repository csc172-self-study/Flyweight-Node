/*
 * LeafNode.h
 *
 * Leaf node of binary tree.
 *
 *  Created on: Jul 12, 2019
 *      Author: alex
 */

#ifndef LEAFNODE_H_
#define LEAFNODE_H_

#include "BinNode.h"
#include <iostream>
using std::cout;

template <typename E>
class LeafNode : public BinNode<E> {
private:
	E value;
public:
	// Constructor. Takes node value.
	LeafNode(const E& val) {
		value = val;
	}

	// Default constructor
	LeafNode() {}

	// Leaves are leaves
	bool isLeaf() {
		return true;
	}

	// Return node value
	E getVal() {
		return value;
	}

	// Traverse
	void traverse() {
		cout << "Leaf node: " << getVal() << "\n";
	}
};

#endif /* LEAFNODE_H_ */
