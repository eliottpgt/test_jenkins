#pragma once
#include <cstring>

class MyString{
    private:
        int len;
        char* str;
    public:
        MyString();
        MyString(const char* s);
        MyString(const MyString& c);
        ~MyString();
        MyString& operator=(const MyString& c);
        char& operator[](size_t i);
        const char& operator[](size_t i) const;
        MyString(MyString&& other) noexcept;
        MyString& operator=(MyString&& other) noexcept;
};