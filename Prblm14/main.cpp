#include <iostream>
#include <math.h>


int main()
{
  double x,y, fact, m, term, sum, j;
  int i, n;
  y = 2;

  std::cout << "Input the value of x: ";
  std::cin >> x;
  std::cout << "Input the value of nth term: ";
  std::cin >> n;
  sum = 1;
  term = 1;

  std::cout << "term 1 value is: " << term << std::endl;
  for (i=1; i < n; ++i)
  {
      fact=1;
      for(j=1; j<=y; j++)
      {
          fact = fact * j;
      }
      term = term * (-1);
      m = pow (x,y) / fact;
      m = m * term;
      std::cout << "term " << i + 1 << "value is: " << m << std::endl;
      sum = sum + m;
      y += 2;
  }

  std::cout << "The sum of the above series is: " << sum << std::endl;



  return 0;
}
