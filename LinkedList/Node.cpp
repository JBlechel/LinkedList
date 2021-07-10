#include "Node.hpp"

template<typename ItemType>
Node<ItemType>::Node() {}

template<typename ItemType>
Node<ItemType>::Node(ItemType) {}

template<typename ItemType>
Node<ItemType>::~Node() {}

template<typename ItemType>
Node<ItemType>* Node<ItemType>::getNext() {}

template<typename ItemType>
void Node<ItemType>::setNext(Node*) {}

template<typename ItemType>
ItemType Node<ItemType>::getData() {}

template<typename ItemType>
void Node<ItemType>::setData(ItemType) {}