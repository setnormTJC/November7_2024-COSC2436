// Linked lists continued - answering one of the QUIZ questions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout; 
using std::string; 

template<typename T>
struct Node
{
	T nodeContents;
	Node* addressOfNextNode;
};


int main()
{
	Node<double> head; 
	head.nodeContents = 3.14; 

	Node<double> current;// = head; //"copy initialization" -> be careful here...
	current.nodeContents = head.nodeContents; 

	//Node<double> object()

	Node<double> secondNode;
	secondNode.nodeContents = 2.718; 


	//link the first node (head/front) with the second node: 
	head.addressOfNextNode = &secondNode; 
	current.addressOfNextNode = &secondNode; 

	cout << "Is it 2.718? " << head.addressOfNextNode->nodeContents << "\n";


	//make a third node and connect the second to the third 
	Node<double>* ptrToThirdNode = new Node<double>; 
	ptrToThirdNode->nodeContents = 1.618;

	secondNode.addressOfNextNode = ptrToThirdNode; 

	
	//now terminate the list (like the Terminator) 
	ptrToThirdNode->addressOfNextNode = nullptr; 

	//cout << current.addressOfNextNode->nodeContents.addressOfNextNode 

	cout << head.addressOfNextNode->addressOfNextNode->addressOfNextNode << "\n";
	cout << current.addressOfNextNode->addressOfNextNode->addressOfNextNode << "\n";

	cout << head.

}
