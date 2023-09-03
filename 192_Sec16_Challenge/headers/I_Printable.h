#pragma once
#include "preprocessor_dirs.h"

// Fully abstract class

class I_Printable{

    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() {}
};

