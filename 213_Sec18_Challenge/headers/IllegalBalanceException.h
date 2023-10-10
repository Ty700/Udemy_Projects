#pragma once
#include <stdexcept>

class IllegalBalanceExecption : public std::exception{
public:
    IllegalBalanceExecption() noexcept = default;
    ~IllegalBalanceExecption() = default;
    
    virtual const char* what() const noexcept{
        return "Error: Invalid Balance";
    }
};