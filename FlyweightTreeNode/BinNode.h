/*
 * BinNode.h
 *
 *  Created on: Jul 12, 2019
 *      Author: alex
 */

#ifndef BINNODE_H_
#define BINNODE_H_

#include <stddef.h>

template <typename E>
class BinNode {
public:
	virtual ~BinNode() {}
	virtual bool isLeaf() = 0;
	virtual void traverse() = 0;

	static BinNode<E>* nullNode;
};

template <typename E>
BinNode<E>* BinNode<E>::nullNode = nullptr;

#endif /* BINNODE_H_ */
