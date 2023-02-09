#pragma once
#include"Subscriber.h"
#include"Book.h"
class ILibrary
{
public:
	virtual void addBook(const Book& book)=0;
	virtual void modifyBook(int key, const std::string& newName)=0;
	virtual void removeBook(int key)=0;
	virtual void registredSubscriber(const Subscriber& a)=0;
	virtual void issuance_of_books() = 0;
	virtual ~ILibrary(){}
};
