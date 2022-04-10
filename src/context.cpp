#include "context.hpp"

Context::Context() {
    this->age = 0;
    this->isMask = false;
};
Context::~Context() {

};
int Context::getAge() const {
    return this->age;
};
void Context::setAge(int age) {
    this->age = age;
};
bool Context::getIsMask() const {
    return this->isMask;
};
void Context::setIsMask(bool isMask) {
    this->isMask = isMask;
};