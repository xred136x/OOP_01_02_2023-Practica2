#include "Book.h"

Book::Book(int yearIssue, const std::string& autor, const std::string& title, const std::string& content): _yearIssue(yearIssue),
_autor(autor), _title(title), _content(content){}


const std::string& Book::getAutor()const
{
	return _autor;// TODO: вставьте здесь оператор return
}

const std::string& Book::getTitle()const
{
	return _title;// TODO: вставьте здесь оператор return
}

const std::string& Book::getContent()const
{
	return _content;// TODO: вставьте здесь оператор return
}

int Book::getYearIssue()const
{
	return _yearIssue;
}

void Book::setAutor(const std::string& autor)
{
	_autor = autor;
}

void Book::setTitle(const std::string& title)
{
	_title = title;
}

void Book::setContent(const std::string& content)
{
	_content = content;
}

void Book::setYearIssue(int year)
{
	_yearIssue = year;
}
