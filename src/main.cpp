#include <cstddef>
#include <iostream>
#include <typeinfo>
// #include "context.hpp"
#include "scalar.hpp"

int main(void){
    Scalar age {10, "age"};
    Scalar height {176.5, "height"};
    Scalar isMask {true, "isMask"};
    std::string tatu = "tatu";
    Scalar attribute {tatu, "attribute"};
    int ageValue;
    double heightValue;
    bool isMaskValue;
    std::string attributeValue;

    std::cout << age.getName() << " : " << age.getValue(ageValue) << std::endl;
    std::cout << height.getName() << " : " << height.getValue(heightValue) << std::endl;
    std::cout << isMask.getName() << " : " << isMask.getValue(isMaskValue) << std::endl;
    std::cout << attribute.getName() << " : " << attribute.getValue(attributeValue) << std::endl;
}

