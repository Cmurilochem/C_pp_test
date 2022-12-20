#include <iostream>
#include <cmath> // Include the cmath library
#include <string> // when dealing with strings 
#include "outside_func.h" // file with external functions 

using namespace std; // OK! Testing git

//
/* Intersting features of C++: structures, references, pointers */
//

// this is a comment

/* this is a multiline comment 
and it will not appear */

//
/* example of a structure in c++: very peculiar to C++ */
//
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  int x,i;
  double mynum,othernum,sum; // declaration like in fortran
  const double pi = 90.0E+00; // constant number
  string firstname,lastname,fullname;  

  int a = 1; // integer example
  float c = 1.00e+02; // example of a real - single precision
  double b = 1.00E+02;  // example of a real - double precision  
  char type = 'A';  // example of a character
  string name = "Carlos M. R. Rocha"; // example of a string
  bool logical = true;
  mynum = 10;
  
  sum = mynum + b;
  
  cout << name << endl;
  
  //cout << "Type an integer number: \n"; 
  //cin >> x;
  //cout << "Your number is:\t" << x << endl; 
  
  cout << "################# \n"; 
  cout << "Hello World! \n"; 
  cout << "Hey...dude \n";
  cout << "################# \n"; 
  
/* appending strings example */  

  firstname = "Carlos ";
  lastname = "Rocha";
  fullname = firstname.append(lastname);
  
  cout << fullname.length() << endl;
  cout << fullname[0] << endl;
  
//
/* example of reading a string from input */
//  

  //cout << "Type your full name: ";
  //getline (cin, fullname);
  //cout << "Your name is: " << fullname << endl;
  
//
/* example of if */
//
/* very simple structure */
//

  if (sum == mynum){
    cout << "ok" << endl;
  } else if (sum != mynum) {
    cout << "not equal numbers" << endl;
  } else {
    cout << "do nothing";
  }

//
/* short hand if and else */
//

  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result << endl;

//
/* example of switch */
//

  int day = 4;
  switch (day) {
    case 1:
      cout << "Monday" << endl;
      break; // if it matches, stop the execution of the "switch"
    case 2:
      cout << "Tuesday" << endl;
      break;
    case 3:
      cout << "Wednesday" << endl;
      break;
    case 4:
      cout << "Thursday" << endl;
      break;
    case 5:
      cout << "Friday" << endl;
      break;
    default: // if there is no match
      cout << "Weekend!" << endl;
      break;
}

//
/* loops */
//

// while loop

  i=1;

  while (i <= 5) {
    cout << i << "\n";
    i++;
  }

// do while - very strange don't you think ?

  i=1;

  do {
    cout << i << endl;
    i++;
  }
  while (i <= 5);

// for loop

  for (i=1; i<=5; i++) {
//
// adding conditions
//
    if (i == 4) {
      cout << "opss!" << endl;
      continue; // jumps this number in the loop

    } else {
      cout << "ok" << endl;
    }

    cout << i << endl;

  }

//
/* another variation of loop ("for each") that is only valid for arrays */
//

  int myNumbers[5] = {10, 20, 30, 40, 50};

  for (int i : myNumbers) {
    cout << i << "\n";
  }

// array of strings

  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cars[0] = "Opel";

// calculating the size of the array
  int carslen = sizeof(cars)/sizeof(string);

  cout << carslen << endl;

  for (i=0; i<carslen; i++) {
    cout << i << " = " << cars[i] << "\n";
  }

// multidimensional arrays

  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  cout << letters[0][0] << endl;

// Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

// Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

// Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

// an example of a reference and pointer

  string food = "Pizza";  // food variable
  string &meal = food;    // reference to food
  string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

  //*ptr = "orange";

  cout << food << "\n";  // Outputs Pizza
  cout << meal << "\n";  // Outputs Pizza
  cout << &food << "\n";  // Outputs the memory address of food
  cout << ptr << " " << *ptr << "\n";  // has the same memory address as food and the same value


// calling an external function defined in another file

  outside_function();

  absolute(-4);

  return 0;
}
