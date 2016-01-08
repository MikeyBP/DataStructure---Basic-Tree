/*
 * Node.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef NODE_H_
#define NODE_H_
#include <string>
class Node
{
private:
	std::string _name;
	Node* _firstChild;
	Node* _lastChild;
	Node* _next;

public:
	Node(std::string name);
	void addChild(Node* child);
	virtual ~Node();
	friend class Tree;
};

#endif /* NODE_H_ */
