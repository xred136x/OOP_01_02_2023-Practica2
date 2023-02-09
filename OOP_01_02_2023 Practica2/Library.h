#pragma once
#include"Book.h"
#include"Subscriber.h"
#include"ILibrary.h"
#include <string>
#include<map>
#include<queue>
class Library : public ILibrary
{
public:
	Library(const std::string& name);
	void addBook(const Book& book)override;
	void modifyBook(int key, const std::string& newName) override;
	void removeBook(int key)override;
	void registredSubscriber(const Subscriber& a)override;
	void issuance_of_books()override;

private:
	std::string _name;
	std::map<int, Book> _books;
	std::queue<Subscriber> _subs;
	int _idCounterBooks;
};
