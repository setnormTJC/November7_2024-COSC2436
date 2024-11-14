// Building a Linked List class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::string;

//template<typename T>
struct Node
{
	string info;
	Node* link;
};

//template<typename T> 
class SinglyLinkedList
{
private: 
	Node* first; //analogous to the variable named "first" in my slides
	Node* last; 
	int nodeCount; 
public: 
	/*default constructor that explicitly sets nodeCount to 0*/
	SinglyLinkedList()
	{
		first = nullptr;
		last = nullptr;
		nodeCount = 0;
		//NULL 
	};

	/*a parameterized constructor that allows specification of contents of head node*/
	//SinglyLinkedList(string headNodeContents)
	//{
	//	first = new Node; 
	//	first->info = headNodeContents;
	//	first->link = nullptr; 

	//	nodeCount = 1; 
	//}

	int size() const 
	{
		return nodeCount; 
	}

	void insert_at_front(string newItemToInsert)
	{
		Node* newNode = new Node;

		newNode->info = newItemToInsert; 


		newNode->link = first; 

		first = newNode; //sets head node's address to same address as new node

		if (last == nullptr) //this will only be true for the first insert operation (because list is empty) 
		{
			last = newNode; 
		}

		nodeCount++; 
	}

	string& front()
	{
		return first->info; 
	}

	void traverse() //I called this "print" in my slides  ....
	{
		Node* currentNode; 
		currentNode = first; 

		while (currentNode != nullptr)
		{
			cout << currentNode->info << "\n";


			currentNode = currentNode->link; //again, this is similar to i++ in arrays ...

		}
	}

	auto get_address_of_node_with_info(string infoToFind)
	{
		Node* currentNode = new Node; 
		currentNode = first; 

		//this is basically a "search" linked list algorithm:
		while (currentNode->info != infoToFind)
		{
			currentNode = currentNode->link; 
		}
		

		return currentNode; 
	}


	void insert(Node* addressOfPreviousNode, string valueToInsert)
	{
		Node* newNode = new Node; 
		newNode->info = valueToInsert; 

		newNode->link = addressOfPreviousNode->link; 

		addressOfPreviousNode->link = newNode; 
	}

};

int main()
{

	SinglyLinkedList ourTravelPath; 	//NOTE: the word "path" is used for GRAPH data structures 

	ourTravelPath.insert_at_front("Texas"); 
	ourTravelPath.insert_at_front("Arkansas");
	ourTravelPath.insert_at_front("Kentucky");
	ourTravelPath.insert_at_front("New York");
	ourTravelPath.insert_at_front("Maine"); 

	cout << "Trip so far...\n";
	ourTravelPath.traverse(); 

	//suppose we want to make a pit stop in Washington after visiting Kentucky ...
	auto addressOfNewYorkNode = ourTravelPath.get_address_of_node_with_info("New York");
	
	ourTravelPath.insert(addressOfNewYorkNode, "Washington (DC)");
	cout << "\n\n\nTrip itinerary after deciding to add a pit stop in Washington DC (between NY and KY):\n";
	ourTravelPath.traverse(); //print the node contents in order

}

