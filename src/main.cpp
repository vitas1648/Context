#include <cstddef>
#include <iostream>
#include <typeinfo>
#include "context.hpp"
#include "scalar.hpp"

int main(void){
    std::string name = "scalar";
    int iVal = 10;
    double dVal = 165.7;
    bool bVal = true;
    std::string sVal = "simple text";
    Scalar scalar;
    Context context;
    scalar.setName(name);
    scalar.setValue(iVal);
    context.setScalar(scalar);
    std::cout << context.getScalar().getName() << " : " 
              << context.getScalar().getValue(iVal) << " : " 
              << *(int*)context.getScalar().getValuePointer() << std::endl;
    scalar.setValue(dVal);
    std::cout << context.getScalar().getName() << " : " 
              << context.getScalar().getValue(dVal) << " : " 
              << *(double*)context.getScalar().getValuePointer() << std::endl;
    scalar.setValue(bVal);
    std::cout << context.getScalar().getName() << " : " 
              << context.getScalar().getValue(bVal) << " : " 
              << *(bool*)context.getScalar().getValuePointer() << std::endl;
    scalar.setValue(sVal);
    std::cout << context.getScalar().getName() << " : " 
              << context.getScalar().getValue(sVal) << " : " 
              << *(std::string*)context.getScalar().getValuePointer() << std::endl;
}