#include<iostream>
#include "Library.h"

Library::Library(const std::string& name):_name(name), _idCounterBooks(0)
{
}

void Library::addBook(const Book& book)
{
	_books.insert({ _idCounterBooks, book });
	_idCounterBooks++;
}

void Library::modifyBook(int key, const std::string& newName)
{
	auto it = _books.find(key);
	it->second.setAutor(newName);
}

void Library::removeBook(int key)
{
	for (std::map<int, Book>::iterator it = _books.begin(); it != _books.end(); ++it) {
		if (key == it->first)
			_books.erase(it);
		else
			std::cout << "There is no such book in the catalog\n";
	}
}

void Library::registredSubscriber(const Subscriber& a) 
{
	_subs.push(a);
}

void Library::issuance_of_books()
{
	while (!_subs.empty()) {
		int n = _subs.size();
		for (std::map<int, Book>::iterator it = _books.begin(); it != _books.end(); ++it) {
			if (_subs.front().getBookWanted() == it->second.getTitle()) {
				std::cout << "the book is issued\n";
				_subs.pop();
				_books.erase(it);
				break;
			}
		}
		if (n == _subs.size()) {
			std::cout << "There is no such book in the catalog\n";
			_subs.pop();
		}
	}
}


