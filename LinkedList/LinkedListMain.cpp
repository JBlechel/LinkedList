// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Node.hpp"

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::cout << "templated Node Test begin\n\n";

	Node<int> intNode(9);
	Node<float> floatNode(9.999999);
	Node<double> doubleNode(9.99999999999999000);
	Node<char> charNode('n');
	Node<std::string> stringNode("nine");
	Node<bool> boolNode(1);

	std::cout << "constructor used and GetData used:\n";
	std::cout << std::setprecision(16) << std::fixed;
	std::cout << intNode.getData() << std::endl;
	std::cout << floatNode.getData() << std::endl;
	std::cout << doubleNode.getData() << std::endl;
	std::cout << charNode.getData() << std::endl;
	std::cout << stringNode.getData() << std::endl;
	std::cout << boolNode.getData() << std::endl;
	std::cout << std::endl;

	intNode.setData(7);
	floatNode.setData(7.777777);
	doubleNode.setData(7.77777777777777);
	charNode.setData('s');
	stringNode.setData("seven");
	boolNode.setData(0);
	
	std::cout << "setData() used on various types:\n";
	std::cout << intNode.getData() << std::endl;
	std::cout << floatNode.getData() << std::endl;
	std::cout << doubleNode.getData() << std::endl;
	std::cout << charNode.getData() << std::endl;
	std::cout << stringNode.getData() << std::endl;
	std::cout << boolNode.getData() << std::endl;
	std::cout << std::endl;


}

