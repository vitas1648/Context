#include <vector>

class Context 
{
    private:
        int age;
        bool isMask;
        std::vector<Context> contexts;
    
    public:
        Context();
        ~Context();
        int getAge() const;
        void setAge(int age);
        bool getIsMask() const;
        void setIsMask(bool isMask);
};

