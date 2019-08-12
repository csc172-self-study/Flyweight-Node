/*
 * LeafNode.h
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
	LeafNode(const E& val) {
		value = val;
	}

	LeafNode() {}

	bool isLeaf() {
		return true;
	}

	E getVal() {
		return value;
	}

	void traverse() {
		cout << "Leaf node: " << getVal() << "\n";
	}
};

#endif /* LEAFNODE_H_ */
