#include "Library.h"

Library::Library()
{
	arr = nullptr;
	booksCount = 0;
}

Library::~Library()
{
	if (arr != nullptr)
		delete[] arr;
}

Library::Library(const Library& library)
{
	booksCount = library.booksCount;
	for (int i = 0; i < booksCount; i++)
	{
		arr[i] = library.arr[i];

	}
}

void Library::AddBook(const Book& book)
{
	Book* newBook = new Book[booksCount + 1];

	for (int i = 0; i < booksCount; i++) {
		newBook[i] = arr[i];
	}
	newBook[booksCount] = book;

	delete[] arr;
	arr = newBook;
	++booksCount;
}

void Library::Sort() const
{
	string temp = "";
	int indexPrev = 0;

	for (int i = 1; i < booksCount; i++) {
		temp = arr[i].name;
		indexPrev = i - 1;
		while (indexPrev >= 0 && arr[indexPrev].name > temp) {

			arr[indexPrev + 1].name = arr[indexPrev].name;
			arr[indexPrev].name = temp;
			indexPrev--;
		}
	}

}

void Library::PrintByName() const
{
	for (int i = 0; i < booksCount; i++) {
		cout << i + 1 << ") " << arr[i].name << endl;
	}
	cout << endl;
}


void Library::Search(string search) const
{
	for (int i = 0; i < booksCount; i++) {
		if (arr[i].name.find(search) != string::npos) {
			arr[i].Print();
		}
	}
	//if( book.   find_first_of(search))
}
