#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <limits>
#include "macros.h"

class Sin;

class Function 
{
private:
    
    std::string m_functionName, m_arg, m_name;

public:

    //distructors
    ~Function() = default;

    //constructors
    Function() {}; //default constructor function 
    Function(const std::string& name, const std::string& = "x"); // constructor for differents arguments

    //get functions
    virtual std::string printFunctionName(); //returns function full name
    virtual char getType() = 0; 
    std::string getFunctionName()const;
    std::string getArg() const; //gets the argument value

    //set functions
    void setFunctionName(const std::string& set);
    void setArg(const std::string& set);

    virtual double calculateFunction(const double& value) = 0;

};
#endif 

