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

bool Context::contextsEmpty() {
    return this->contexts.empty();
}

int Context::contextsSize() {
    return this->contexts.size();
}

void Context::pushContext(Context & context) {
    this->contexts.push_back(context);
}

Context& Context::popContext() {
    Context* c = new Context;
    if (!this->contexts.empty()) {
        *c = this->contexts.back();
        this->contexts.pop_back();
    }

    return *c;
}
