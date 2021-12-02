#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
using namespace std;

class Sub : public Base 
{
    private:
        Base* value1;
        Base* value2;
    public:
        Sub(){}
        Sub(Base* val1, Base* val2) : Base() {this->value1 = val1; this->value2 = val2; }
        virtual double evaluate() { return value1->evaluate() -  value2->evaluate(); }
        virtual string stringify() { return "(" + value1->stringify() + "-" + value2->stringify() + ")"; }
};


#endif //__OP_HPP__
