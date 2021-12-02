#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>
using namespace std;
class Pow : public Base 
{
    private:
        Base* value;
    public:
        Pow(){}
        Pow(Base* val) : Base() {this->value = val;}
        virtual double evaluate() { return  pow(value->evaluate(), 2); }
        virtual string stringify() { return value->stringify() + "**"; }
};


#endif //__POW_HPP__
