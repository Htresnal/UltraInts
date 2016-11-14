#include "MultiInt.h"
#include <math.h>
#include <gmp.h>
#include <gmpxx.h>

int main()
{
  mpz_class a, b, c;
  a = "18446744073709551615";
  b = "21046948076709451214";
  std::cout << "Two variables:\na= "<<a<<"\nb="<<b<<'\n';
  std::cout << "Please, enter another number c:" << '\n';
  std::cin>>c;
  std::cout << "You've entered: "<< c << '\n';
  std::cout << "Multiplying a*b:"<<a*b << '\n';
  std::cout << "Multiplying c*b:"<<c*b << '\n';
  std::cout << "Reenter number c:" << '\n';
  std::cin>>c;
  std::cout << "You've entered: "<< c << '\n';
  std::cout << "Dividing b/c:"<<b/c << '\n';
  std::cin.get();
return 0;
}
