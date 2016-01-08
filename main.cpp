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
	Node* mikey = new Node("Mikey");
	Node* mitch = new Node("Mitch");
	Node* ray = new Node("Ray");
	Node* dustin = new Node("Dustin");
	Node* brian = new Node("Brian");
	Node* kman = new Node("Kman");

	Tree* tree = new Tree(mikey);

	mikey -> addChild(mitch);
	mikey -> addChild(ray);
	ray -> addChild(dustin);
	mitch -> addChild(brian);
	brian -> addChild(kman);

	tree->traverse();

	return 0;
}
