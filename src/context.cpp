#include "context.hpp"

Context::Context() {
    this->name = "";
};

Context::~Context() {};

void Context::setScalar(Scalar & scalar) {
    this->scalar = &scalar;
}

Scalar& Context::getScalar() {
    return *this->scalar;
}