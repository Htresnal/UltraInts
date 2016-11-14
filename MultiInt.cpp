#include "MultiInt.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <gmp.h>
#include <gmpxx.h>

char answ;
std::string symbolMath;
mpz_class a, b;

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

bool is_mathSigns(const std::string &str)
{
    return str.find_first_not_of("+-*/%^") == std::string::npos;
}

std::string calcResult();

int main()
{
  a = "18446744073709551615";
  b = "21046948076709451214";
  symbolMath="+";
  std::cout << "Welcome to the Multi Precision Library workflow test\nIn this programm, you can work with ultra long numbers.\n";
  std::string tmpString;
  while(true)
  {
      tmpString="";
      std::cout<<"Please, press 'A' or 'B' to enter value."<<'\n';
      std::cout<<"Press 'S' to change algebraic operation symbol:"<<'\n';
      std::cout<<"'+', '-', '*', '/', '%', '^'"<<'\n'<<'\n';
      std::cout<<"a="<<a<<'\n';
      std::cout<<"b="<<b<<'\n'<<'\n';
      std::cout<<a<<' '<<symbolMath<<' '<<b<<' '<<'='<<' '<<(((b==0)&&(symbolMath=="/"))?"0":calcResult())<<'\n'<<'\n';
      std::cin>>answ;
      switch (answ)
      {
        case 'a':
        case 'A':
            std::cin>>tmpString;
            //if (tmpString && is_digits(tmpString))
            if (is_digits(tmpString))
            {
                a=tmpString;
            }
        break;
        case 'b':
        case 'B':
            std::cin>>tmpString;
            if (is_digits(tmpString))
            {
                b=tmpString;
            }
        break;
        case 's':
        case 'S':
            std::cin>>tmpString;
            if (is_mathSigns(tmpString))
            {
                symbolMath=tmpString;
            }
        break;
      }
  system("CLS");
  }
return 0;
}

std::string calcResult()
{
    if (symbolMath=="+")
    {
        return mpz_class(a+b).get_str();
    }
    else if (symbolMath=="-")
    {
        return mpz_class(a-b).get_str();
    }
    else if (symbolMath=="*")
    {
        return mpz_class(a*b).get_str();
    }
    else if (symbolMath=="/")
    {
        return mpz_class(a/b).get_str();
    }
    else if (symbolMath=="%")
    {
        return mpz_class(a%b).get_str();
    }
    else if (symbolMath=="^")
    {
        return mpz_class(a%b).get_str();
    }
return "undefined";
}
