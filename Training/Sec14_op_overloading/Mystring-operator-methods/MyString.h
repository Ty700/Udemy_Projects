#pragma once
#include <iostream>
#include <cstring>
#include <cctype>

class MyString{

public:
    MyString();                                                          // No-args constructor
    MyString(const char *s);                                      // Overloaded constructor
    MyString(const MyString &source);                     // Copy constructor
    MyString( MyString &&source);                          // Move constructiror
    ~MyString();                                                      // Destructor
    
    MyString &operator=(const MyString &rhs);    // Copy assignment
    MyString &operator=(MyString &&rhs);          // Move assignment

    MyString operator-() const;                             // make lowercase
    MyString operator+(const MyString &rhs) const;        // concatenate
    bool operator==(const MyString &rhs) const;
    
    void display() const;

    int get_length() const;                                        // getters
    const char *get_str() const;

private:
    char *str;

};