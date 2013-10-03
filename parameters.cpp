//Our first C++ program with parameters in the function definition
//This comes from http://www.learncpp.com/cpp-tutorial/14-a-first-look-at-functions/
//Copied by
//Eric Schles
#include <iostream>

// add takes two integers as parameters, and returns the result of their sum
int add(int x, int y)
{
  return x + y;
}

int main()
{

  using namespace std;
  cout << add(4,5) << endl;
  return 0;
}

//Did it run? 
