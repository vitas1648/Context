#pragma once 
#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

#include <string>
#include <vector>
#include "scalar.hpp"

class Context {
    private:
        std::string name;
        Scalar* scalar;
    public:
        Context();
        ~Context();
        void setScalar(Scalar&);
        Scalar& getScalar();
};

#endif