#ifndef BOOK_H
#define BOOK_H

#include <vector>
#include <string>

class Book {
    public:
    Book();
    ~Book();

    std::vector<std::string>::iterator begin();
    std::vector<std::string>::iterator end();

    private:
    std::vector<std::string> chars;
};
#endif