#include "MyString.hpp"

/**
 * Default constructor
 */
MyString::MyString(){
    len = 0;
    str = new char[1];
    str[0] = '\0';
}

/**
 * Constructor from a c-string
 */
MyString::MyString(const char* s){
    if(s == nullptr){
        len = 0;
        str = new char[1];
        str[0] = '\0';
    }else{
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }
}

/**
 * Constructor from a MyString
 */
MyString::MyString(const MyString& c){
    len = c.len;
    str = new char[len + 1];
    strcpy(str, c.str);
}

/**
 * Destructor
 */
MyString::~MyString(){
    delete[] str;
}

MyString& MyString::operator=(const MyString& c){
    if(this == &c){
        return *this;
    }

    delete[] str;

    len = c.len;
    str = new char[len + 1];
    strcpy(str, c.str);

    return *this;
}

char& MyString::operator[](size_t i){
    return str[i];
}

const char& MyString::operator[](size_t i) const{
    return str[i];
}

MyString::MyString(MyString&& other) noexcept : len(other.len), str(other.str) {
    other.len = 0;
    other.str = nullptr;
}

MyString& MyString::operator=(MyString&& other) noexcept {
    if (this != &other) {
        delete[] str;
        len = other.len;
        str = other.str;
        other.len = 0;
        other.str = nullptr;
    }
    return *this;
}