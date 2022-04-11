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
        std::vector<Context> contexts;
    public:
        Context();
        ~Context();
        void setScalar(Scalar&);
        Scalar& getScalar();
        bool contextsEmpty();
        int contextsSize();
        void pushContext(Context &);
        Context& popContext();
};

#endif