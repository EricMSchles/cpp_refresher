/*
This program is used to teach us how to read in data from the terminal and to use variables.
This program comes from http://www.learncpp.com/cpp-tutorial/13-a-first-look-at-variables/
Copied by
Eric Schles
 */

#include <iostream>

int main()
{

  using namespace std;
  cout << "Enter a number: "; //ask user for a number
  int x; //should be initialized to 0
  cin >> x; //read number from console and store it in x
  cout << "You entered " << x << endl;
  return 0;

}

//Sadly this program follows some bad style, things.
//First it tells you what its doing, not why its doing it.
//Secondly, it has unitialized variables, which are never a good idea.
//This only makes sense because it is intended to be instructional.
//Your programs should always use comments to explain why you are doing something, not how its being done.

//Did it run? Yes.
