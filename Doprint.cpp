/*
This is the first program with functions.
It is from http://www.learncpp.com/cpp-tutorial/14-a-first-look-at-functions/
Copied by
Eric Schles
*/
#include <iostream>

//This is an example function, as you can see we print so the programmer knows where we are in the program.
void DoPrint()
{
  using namespace std;
  cout << "In DoPrint()" << endl;
}

int main()
{
  using namespace std;
  cout << "Starting main()" << endl;
  DoPrint();
  cout <<"Ending main()"<< endl;
  return 0;
}
//Did it run? Yes
