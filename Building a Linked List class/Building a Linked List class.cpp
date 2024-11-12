// Building a Linked List class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::string;

//template<typename T>
struct Node
{
	string nodeContents;
	Node* addressOfNextNode;
};

//template<typename T> 
class SinglyLinkedList
{
private: 
	Node* headNode;
public: 
	SinglyLinkedList()
	{
		headNode = nullptr; 
	}

	SinglyLinkedList(string headNodeContents)
	{
		headNode = new Node; 
		headNode->nodeContents = headNodeContents;
		headNode->addressOfNextNode = nullptr; 
	}

	void push_back(string newItemToInsert)
	{
		Node* newNode = new Node; 
		newNode->nodeContents = newItemToInsert; 
		newNode->addressOfNextNode = headNode; 

		headNode = newNode; //sets head node's address to same address as new node
	}

	void traverse()
	{
		Node* currentNode; 
		currentNode = headNode; 

		while (currentNode != nullptr)
		{
			cout << currentNode->nodeContents << "\n";
			currentNode = currentNode->addressOfNextNode;
		}
	}
};

int main()
{
	//double a = 132.333; 
	//a->link; //a "double" data type has no member variables (or functions)!
	SinglyLinkedList ourTravelPath{ "'Murica!" };

	//SinglyLinkedList ourTravelPath;
	
	ourTravelPath.push_back("Lahore, Pakistan");
	ourTravelPath.push_back("Somewhere in India");
	ourTravelPath.push_back("Nepal - Himalayas");
	ourTravelPath.push_back("Tibet -- the ceiling of the World!"); 

	ourTravelPath.traverse(); //print the node contents in order

	//the word "path" is used for GRAPH data structures 







































































































































































}

