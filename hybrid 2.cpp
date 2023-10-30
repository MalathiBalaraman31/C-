#include <iostream>
#include <vector>

class Item {
public:
    Item(const std::string& title, const std::string& author)
        : title(title), author(author) {}

    void displayItem() {
        std::cout << "Title: " << title << ", Author: " << author;
    }

private:
    std::string title;
    std::string author;
};

class Book : public Item {
public:
    Book(const std::string& title, const std::string& author, int pages)
        : Item(title, author), pages(pages) {}

    void displayBook() {
        displayItem();
        std::cout << ", Pages: " << pages << std::endl;
    }

private:
    int pages;
};

class Magazine : public Item {
public:
    Magazine(const std::string& title, const std::string& author, int issueNumber)
        : Item(title, author), issueNumber(issueNumber) {}

    void displayMagazine() {
        displayItem();
        std::cout << ", Issue Number: " << issueNumber << std::endl;
    }

private:
    int issueNumber;
};

class Library {
public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    void addMagazine(const Magazine& magazine) {
        magazines.push_back(magazine);
    }

    void displayLibraryContents() {
        std::cout << "Books in the library:" << std::endl;
        for (const Book& book : books) {
            book.displayBook();
        }

        std::cout << "Magazines in the library:" << std::endl;
        for (const Magazine& magazine : magazines) {
            magazine.displayMagazine();
        }
    }

private:
    std::vector<Book> books;
    std::vector<Magazine> magazines;
};

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
    Book book2("To Kill a Mockingbird", "Harper Lee", 281);
    Magazine magazine1("National Geographic", "Various Authors", 123);

    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addMagazine(magazine1);

    library.displayLibraryContents();

    return 0;
}
