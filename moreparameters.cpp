//More functions with parameters
//this comes from: http://www.learncpp.com/cpp-tutorial/14-a-first-look-at-functions/
//Copied by
//Eric Schles
#include <iostream>

//takes in two integers and returns their sum
int add(int x, int y)
{
  return x + y;
}

//takes in two integers and returns their product
int multiply(int z, int w)
{
  return z * w;
}

int main()
{

  using namespace std;
  cout << add(4, 5) << endl; //should return 9
  cout << add(3, 6) << endl; //should return 9
  cout << add(1, 8) << endl; //should return 9

  //this is done to show we can pass in variables to functions
  int a = 3;
  int b = 5;
  cout << add(a, b) << endl; 

  cout << add(1, multiply(2, 3)) << endl; //evaluates 1 + (2*3), note the parenthesis
  cout << add(1, add(2, 3)) << endl; //evaluates to 1 + (2 + 3), note the parenthesis
  return 0;
}

// Did it run? Yes
