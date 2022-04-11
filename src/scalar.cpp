
#include "scalar.hpp"

Scalar::Scalar() {
}

Scalar::Scalar(const int& value) {
    this->setValue(value);
}

Scalar::Scalar(const int& value, const std::string& name) {
    this->setValue(value);
    this->setName(name);
}

Scalar::Scalar(const double& value) {
    this->setValue(value);
}

Scalar::Scalar(const double& value, const std::string& name) {
    this->setValue(value);
    this->setName(name);
}

Scalar::Scalar(const bool& value) {
    this->setValue(value);
}

Scalar::Scalar(const bool& value, const std::string& name) {
    this->setValue(value);
    this->setName(name);
}

Scalar::Scalar(const std::string& value) {
    this->setValue(value);
}

Scalar::Scalar(const std::string& value, const std::string& name) {
    this->setValue(value);
    std::cout << value << " : " << this->item;
    this->setName(name);
}

Scalar::~Scalar() {
}

void Scalar::setName(const std::string & name) {
    this->name = name;
}

std::string & Scalar::getName()  {
    return this->name;
}

void Scalar::setValue(const int& value) {
    this->item = new int(value);
}

void Scalar::setValue(const double& value) {
    this->item = new double(value);
}

void Scalar::setValue(const bool& value) {
    this->item = new bool(value);
}

void Scalar::setValue(const std::string& value) {
    this->item = new std::string(value);
}

void* Scalar::getValuePointer() const {
    return this->item;
}

int& Scalar::getValue(int& value ) {
    return value = *(int*)this->item;
}

double& Scalar::getValue(double& value ) {
    return value = *(double*)this->item;
}

bool& Scalar::getValue(bool& value ) {
    return value = *(bool*)this->item;
}

std::string& Scalar::getValue(std::string& value ) {
    return value = *(std::string*)this->item;
}
