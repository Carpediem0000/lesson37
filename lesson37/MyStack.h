#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

namespace myStack {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) { info = value; next = prev = nullptr; }
	};


	template <typename U>
	class Stack {
		Node<U>* head;
		Node<U>* current;
	public:
		Stack() { head = current = nullptr; }
		~Stack() {
			while (!isEmpty())
			{
				pop_back();
			}
		}

		bool isEmpty()const { return head == nullptr; }
		U top()const {
			if (current == nullptr)
			{
				throw "Stack is empty!\n";
			}
			return current->info;
		}
		void push_back(U value) {
			Node<U>* obj = new Node<U>(value);
			if (isEmpty())
			{
				head = current = obj;
			}
			else
			{
				current->next = obj;
				obj->prev = current;
				current = obj;
			}
		}
		void pop_back() {
			if (current != nullptr)
			{
				if (current->prev == nullptr)
				{
					delete current;
					head = current = nullptr;
				}
				else
				{
					current = current->prev;
					delete current->next;
					current->next = nullptr;
				}
			}
		}
		void showStack()const {
			Node<U>* p = head;
			if (p == nullptr)
			{
				cout << "Stack is empty!\n";
			}
			else
			{
				while (p != nullptr)
				{
					cout << p->info << " ";
					p = p->next;
				}
				cout << endl;
			}
		}
	};
}