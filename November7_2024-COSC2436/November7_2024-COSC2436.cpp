// November7_2024-COSC2436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<forward_list> //standard library's SINGLY-linked list 
#include<list> //the doubly-linked list 

using std::cout; 
using std::string; 

template<typename T> 
struct Node
{
	T nodeContents; 
	Node* addressOfNextNode;
	//Node* pointerToRIGHTNode; //this will be used for BINARY TREE data structure ...
};


/*Visits and prints the contents of each node in a linked list*/
void traverseList()
{

}

class LinkedList
{
	//made up (COMPOSED OF) `Node` objects (we will get into this definition later ...)
};

int main()
{
	//main(); //infinite recursion!

	Node<string> headCar_inChooChooTrain; 
	//Eric the Engineer is conducting the choo choo train ... 
	headCar_inChooChooTrain.nodeContents = "Eric the Engineer";
	
	Node<string> secondCar; 
	//Sally and Bob are riding in the second car...
	secondCar.nodeContents = "Sally and Bob";
	cout << "Address of second car is: " << &secondCar << "\n"; //0x00000fe43956

	//cout << NULL << "\n";
	
	headCar_inChooChooTrain.addressOfNextNode = &secondCar; 
	//headCar_inChooChooTrain.link //another name for address of next node
	
	
	//Node<string>* addressOfThirdCar = new Node<string>; //because NEW was used, we have ZERO expectation 
	//that its address is "close" to SECOND CAR'S address
	
	Node<string> thirdCar; 
	
	//thirdCar.data //another name for node contents
	thirdCar.nodeContents = "Darth and Eve and Frank";

	secondCar.addressOfNextNode = &thirdCar; //now we have a linked list with 3 nodes

	thirdCar.addressOfNextNode = nullptr; 

	//Node<string>* fourthCar = new Node<string>; 

	cout << headCar_inChooChooTrain.nodeContents << "\n";	
	cout << secondCar.nodeContents << "\n";
	cout << thirdCar.nodeContents << "\n";

	//how to traverse this list in a less painstaking way? 


}

