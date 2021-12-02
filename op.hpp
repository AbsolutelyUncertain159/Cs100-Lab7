#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <sstream>
using namespace std;

class Op : public Base {

        private:
        double opVal;
        public:
        Op(double val) : Base() { this->opVal = val;}
        virtual double evaluate() { return opVal;}
        virtual string stringify() { ostringstream sstream; sstream << opVal; return sstream.str(); }
};


#endif //__OP_HPP__

