/*
 * Tree.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#include "Tree.h"
#include<iostream>
using namespace std;

Tree::Tree() : _root(NULL){

}

void Tree::traverse(Node* node){
	cout << node -> _name << endl;
		Node* i = node -> _firstChild;
		while(i != NULL)
		{
		     traverse(i);
		     i = i -> _next;
		}
}

Tree::~Tree() {

}
