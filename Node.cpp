/*
 * Node.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#include "Node.h"


Node::Node(std::string name): _name(name), _firstChild(NULL), _lastChild(NULL), _next(NULL){

}

void Node::addChild(Node* child){
	if(_firstChild == NULL){
			_firstChild = child;
			_lastChild = child;
		}else{
			_lastChild -> _next = child;
			_lastChild = child;
		}
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}
