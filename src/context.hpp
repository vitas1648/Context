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
};
