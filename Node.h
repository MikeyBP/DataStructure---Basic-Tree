/*
 * Node.h
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#ifndef NODE_H_
#define NODE_H_
#include <string>
using namespace std;
class Node
{
private:
	string _name;
	Node* _firstChild;
	Node* _lastChild;
	Node* _next;

public:
	Node(std::string name);
    std::string getName();
	void addChild(Node* child);
	virtual ~Node();
	Node *getNext() const;
	friend class Tree;
};

#endif /* NODE_H_ */
