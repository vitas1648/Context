#pragma once
#ifndef _SCALAR_H_
#define _SCALAR_H_

#include <string>
#include <iostream>

class Scalar {
    private:
        std::string name = "";
        void* item;
    public:
        Scalar();
        Scalar(const int&);
        Scalar(const int&, const std::string&);
        Scalar(const double&);
        Scalar(const double&, const std::string&);
        Scalar(const bool&);
        Scalar(const bool&, const std::string&);
        Scalar(const std::string& value);
        Scalar(const std::string& value, const std::string& name);
        ~Scalar();
        void setName(const std::string&);
        std::string& getName();
        void setValue(const int&);
        void setValue(const double&);
        void setValue(const bool&);
        void setValue(const std::string&);
        void* getValuePointer() const;
        int& getValue(int&);
        double& getValue(double&);
        bool& getValue(bool&);
        std::string& getValue(std::string&);
};


#endif