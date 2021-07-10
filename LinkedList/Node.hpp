#ifndef NODE_H
#define NODE_H

template <typename ItemType> class Node{

public:
	
	Node();
	Node(ItemType);
	~Node();

	Node* getNext();
	void setNext(Node*);

	ItemType getData();
	void setData(ItemType);


private:
	Node* next;
	ItemType data;

};

#endif // !NODE_H
