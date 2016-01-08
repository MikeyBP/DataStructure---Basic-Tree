/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */
#include <iostream>

#include "Tree.h"
using namespace std;
int main()
{
	Tree* tree = new Tree();
	Node* mikey = new Node("Mikey");
	Node* mitch = new Node("Mitch");
	Node* ray = new Node("Ray");
	Node* dustin = new Node("Dustin");
	Node* brian = new Node("Brian");
	Node* kman = new Node("Kman");

	mikey -> addChild(mitch);
	mikey -> addChild(ray);
	ray -> addChild(dustin);
	mitch -> addChild(brian);
	kman -> addChild(mikey);

	tree->traverse(kman);

	return 0;
}
