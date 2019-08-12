/*
 * FlyweightTest.cpp
 *
 * Simple driver to test implementation of flyweight null node.
 *
 *  Created on: Aug 12, 2019
 *      Author: alex
 */

#include "IntNode.h"
#include "LeafNode.h"

int main() {
	LeafNode<int>* node1 = new LeafNode<int>(1);
	LeafNode<int>* node2 = new LeafNode<int>(2);
	IntNode<int>* root = new IntNode<int>(0, node1, node2);

	root->traverse();
}


