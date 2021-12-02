#ifndef __RAND_HPP__
#define __RAND_HPP__
#include "base.hpp"
using namespace std;

class Rand : public Base {
  private:   
        double value;
  public:
        Rand() : Base(){ srand(time(0)); value = rand()%100; }
        virtual double evaluate() { return value; }
        virtual string stringify() {  ostringstream sstream; sstream << value; return sstream.str(); }  
};


#endif //__OP_HPP__
