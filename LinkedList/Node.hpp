
//due to some technical feature of the way copmpilers for C++ work, Template 
//classes cannot be built into separate .hpp and .cpp files unless implementations 
//for each specific type are made (defeating much of the purpose of a template)
//so everything sits in this .hpp file instead.

#ifndef NODE_H
#define NODE_H




template <typename ItemType>
class Node{

public:
	
	Node();
	Node(ItemType);
	Node(ItemType, Node*);
	~Node();

	Node* getNext();
	void setNext(Node*);

	ItemType getData();
	void setData(ItemType);


private:
	Node* next;
	ItemType data;

};

//constructors
template<typename ItemType>
Node<ItemType>::Node() {
	next = nullptr;
}

template<typename ItemType>
Node<ItemType>::Node(ItemType itemType) {
	data = itemType;
	next = nullptr;
}

template<typename ItemType>
Node<ItemType>::Node(ItemType itemType, Node* node) {
	data = itemType;
	next = node;
}

//not sure how I want to delete node, maybe build constructor that allows a function to be passed as an argument
//so that if user wants to delete their data as the data as it
template<typename ItemType>
Node<ItemType>::~Node() {
	delete next;
}

template<typename ItemType>
Node<ItemType>* Node<ItemType>::getNext() {
	return next;
}

template<typename ItemType>
void Node<ItemType>::setNext(Node* newNext) {
	next = newNext;
}

template<typename ItemType>
ItemType Node<ItemType>::getData() {
	return data;
}

template<typename ItemType>
void Node<ItemType>::setData(ItemType newData) {
	data = newData;
}


#endif // !NODE_H
