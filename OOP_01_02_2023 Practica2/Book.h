#pragma once
#include<iostream>
class Book
{
public:
	Book(int yearIssue, const std::string& autor, const std::string& title, const std::string& content);
	const std::string& getAutor()const;
	const std::string& getTitle()const;
	const std::string& getContent()const;
	int getYearIssue()const;

	void setAutor(const std::string& autor);
	void setTitle(const std::string& title);
	void setContent(const std::string& content);
	void setYearIssue(int year);
private:
	int _yearIssue;
	std::string _autor;
	std::string _title;
	std::string _content;
};

