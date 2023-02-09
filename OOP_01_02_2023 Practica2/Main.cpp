#include"Book.h"
#include"ILibrary.h"
#include"Library.h"
#include"Subscriber.h"
#include<iostream>


int main() {
	Book a1{ 1990, "Tim Bird", "Avatar", " " };
	Book a2{ 1991, "Tom Smith", "Jumanji", " " };
	Book a3{ 1992, "Sam Stone", "Atlantida", " " };
	Book a4{ 1993, "Sam Stone", "C++ for beginners", " " };
	Subscriber d1{"Bob Lang", "Avatar"};
	Subscriber d2{ "Bill Lewis", "Jumanji" };
	Subscriber d3{ "Wayne Gretsky", "Magic of ice hockey" };
	Subscriber d4{ "Colin Peaters", "Atlantida" };
	Subscriber d5{ "Garry Jones", "C++ for beginners" };
	Subscriber d6{ "Ian Paxton", "C# for beginners" };
	Subscriber d7{ "Matt Davis", "Java Script for beginners" };

	Library l("First queue");
	l.addBook(a1);
	l.addBook(a2);
	l.addBook(a3);
	l.addBook(a4);
	l.registredSubscriber(d3);
	l.registredSubscriber(d1);
	l.registredSubscriber(d5);
	l.registredSubscriber(d4);
	l.registredSubscriber(d6);
	l.registredSubscriber(d7);
	l.registredSubscriber(d2);

	l.issuance_of_books();

	return 0;
}
