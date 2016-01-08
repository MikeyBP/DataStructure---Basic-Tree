/*
 * Tree.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef TREE_H_
#define TREE_H_
#include "Node.h"
class Tree
{
private:
	Node* _root;

public:
	Tree();
	void traverse(Node* node);
	virtual ~Tree();
};

#endif /* TREE_H_ */
