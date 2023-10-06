/*
*   Throw/Catch handling and stack unwinding
*/

#include <iostream>

void func_c(){
    std::cout << "Starting func_c" << std::endl;
    throw 100;
    std::cout << "Ending func_c" << std::endl; //Wont execute now since we throw 100
}

void func_b(){
    std::cout << "Starting func_b" << std::endl;
    func_c();
    std::cout << "Ending func_b" << std::endl; //Won't execute as it's looking for a catch
}

void func_a(){
    std::cout << "Starting func_a" << std::endl;
    func_b();
    std::cout << "Ending func_a" << std::endl; //Won't execute as it's looking for a catch
}

int main(){
    std::cout << "Starting main" << std::endl;
    try {
        func_a();
    }
    //Finally caught, thus program resumes from this point
    catch(int &ex){
        std::cout << "Caught error: " << ex << std::endl;
    } 

    std::cout << "Ending main" << std::endl;

}