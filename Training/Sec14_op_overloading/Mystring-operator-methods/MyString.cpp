#include "MyString.h"

// No-args constructor
MyString::MyString() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
MyString::MyString(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy constructor
MyString::MyString(const MyString &source) 
    : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
        std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
MyString::MyString( MyString &&source) 
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

// Destructor
MyString::~MyString() {
    delete [] str;
}

// Copy assignment operator
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    return *this;
}

//Move
MyString &MyString::operator=(MyString &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Comparator
bool MyString::operator==(const MyString &rhs) const {
    return (std::strcmp(str, rhs.str));
}

//Make lowercase

MyString MyString::operator-() const {
    char *buffer = new char[std::strlen(str) + 1];

    std::strcpy(buffer, str);

    for(int i = 0; i < strlen(buffer); i++){
        buffer[i] = tolower(buffer[i]);
    }

    MyString temp{buffer};

    delete [] buffer;
    return temp;
}

//Concatenate

MyString MyString::operator+(const MyString &rhs) const {
    char *buffer = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer,str);
    std::strcat(buffer, rhs.str);

    MyString temp{buffer};

    delete [] buffer;
    return temp;
}


//Display

void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

//length getter
int MyString::get_length() const {return std::strlen(str);}

//string getter
const char *MyString::get_str() const {return str;}