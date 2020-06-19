/**
 * Create a cpp program to find a prime numbers
 **/
#include <iostream>
using namespace std;

int main()
{
  // Declare variales
  int n;
  
  cout << "Enter a positive integer: ";
  cin >> n;

  findPrime(n);
  
  return 0;
}

void findPrime( int n ){
  int i;
  bool isPrime = true;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";
}
