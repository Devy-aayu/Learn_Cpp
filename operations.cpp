/* Revision 
type of datatypes premitive, derived, user-defined
and we have diffrent types in them 
primitive = int, float, double, char, bool
derived = arrays, pointers, references
user-defined = classes, structures, unions
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CONTENT

/* operations on different data types 
   introduction to other libraries like cmath, string
   taking user input using cin and getline
   how to use if, else statement in cpp
   how to use fmod() function to get the remainder of two floating-point numbers or double numbers
*/


#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    //defining data types with variable so i can perform operations on them like addition, subtraction, multiplication, division etc

    cout << "################# int data types operations #################" << endl;
    int a = 10; // here we have defined a variable of type int and assigned the value 10 to it
    int b = 20; // here we have defined a variable of type int and assigned the value 20 to it
    int c = a + b; // here we have defined a variable of type int and assigned the sum of a and b to it
    int d = a - b; // here we have defined a variable of type int and assigned the difference of a and b to it
    int e = a * b; // here we have defined a variable of type int and assigned the product of a and b to it
    int f = a / b; // here we have defined a variable of type int and assigned the quotient of a and b to it
    int g = a % b; // here we have defined a variable of type int and assigned the remainder of a and b to it
    cout << "the sum of a and b is: " << c << endl;
    cout << "the difference of a and b is: " << d << endl;
    cout << "the product of a and b is: " << e << endl;
    cout << "the quotient of a and b is: " << f << endl;
    cout << "the remainder of a and b is: " << g << endl;

// now lets perform operation on precision values like float, double etc

cout << "################# float data types operations #################" << endl;

    float h = 10.5; // here we have defined a variable of type float
    float i = 20.5; // here we have defined a variable of type float
    float j = h + i; // here we have defined a variable of type float and assigned the sum of h and i to it
    float k = h - i; // here we have defined a variable of type float and assigned the difference of h and i to it
    float l = h * i; // here we have defined a variable of type float and assigned the product of h and i to it
    float m = h / i; // here we have defined a variable of type float and assigned the quotient of h and i to it
    //float n = h % i; // here we have defined a variable of type float and assigned the remainder of h and i to it
    cout << "the sum of h and i is: " << j << endl;
    cout << "the difference of h and i is: " << k << endl;
    cout << "the product of h and i is: " << l << endl;
    cout << "the quotient of h and i is: " << m << endl;
    //cout << "the remainder of h and i is: " << n << endl;

// now lets perform operation on precision values like double, double etc

cout << "################# double data types operations #################" << endl;
    double o = 10.123456789; // here we have defined a variable of type double
    double p = 20.123456789; // here we have defined a variable of type double
    double q = o + p; // here we have defined a variable of type double and assigned the sum of o and p to it
    double r = o - p; // here we have defined a variable of type double and assigned the difference of o and p to it
    double s = o * p; // here we have defined a variable of type double and assigned the product of o and p to it
    double t = o / p; // here we have defined a variable of type double and assigned the quotient of o and p to it
    //double u = o % p; // here we have defined a variable of type double and assigned the remainder of o and p to it
    cout << "the sum of o and p is: " << q << endl;
    cout << "the difference of o and p is: " << r << endl;
    cout << "the product of o and p is: " << s << endl;
    cout << "the quotient of o and p is: " << t << endl;
    //cout << "the remainder of o and p is: " << u << endl;


/* why the "%" operator doesn't work with floating-point numbers and double numbers 
In C++, the % operator is specifically defined for integral types like int, long, short, etc. It is not defined for floating-point types like float and double.
Think of % as "remainder after integer division."
10 % 3 the remainder is 1 but now think if u try to get the remainder of two floating-point numbers or double numbers 
example 10.5 % 2.5; then With floating-point numbers, division doesn't naturally produce a whole-number quotient and remainder in the same way integer division does.

//////////////////////////////////////////////////////////////////////
but C++ provides fmod() for floating-point remainder: to use it we can add one more preprocessor directive #include <cmath> and then we can use fmod() function to get the remainder of two floating-point numbers or double numbers
example: 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 10.5;
    double y = 3.2;

    cout << fmod(x, y);

    return 0;
}
*/
cout << "################# floating-point remainder using fmod() #################" << endl;
    double x = 10.5;
    double y = 3.2;
    cout << "the remainder of x and y is: " << fmod(x, y) << endl;


//########################################################################################################################################################################

// now lets perform operation on string data types
//for that i need to include the string header file using "#include <string>" and then i can use the string data type to perform operations on it like concatenation, comparison etc
cout << "################# string data types operations #################" << endl;

string str1;
str1 = "Aayush"; // here we have defined a variable of type string and assigned the value "Hello" to it
string str2 = "Kumar"; // here we have defined a variable of type string and assigned the value "World" to it
string str3 = str1 + " " + str2; // here we have defined a variable of type string and assigned the value of str1 + " " + str2 to it
   cout << "the concatenation of str1 and str2 is: " << str3 << endl;


cout << "################# taking user input using cin and getline #################" << endl;
// now lets take user input using cin and getline

string name;
cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
string age;
cout << "enter your age: ";
    cin >> age;
    cout << "your age is: " << age << endl;


//getline(cin, name);
//    cout << "Hello, " << name << "!" << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// using if else statement in cpp

cout << "################# if else statement #################" << endl;
if (age >= "18") {
    cout << "you are eligible to vote" << endl;
} 
else {
    cout << "you are not eligible to vote" << endl;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

cout << "################# Assignment 1: solving area of rectangle or square using operators and taking user input using cin and getline #################" << endl;

int length, breadth, area;
cout << "Enter the length : ";
cin >> length;
cout << "enter the breadth :";
cin >> breadth;
area = length * breadth;

cout << "the area of the rectangle is: " << area << endl;
printf("the area of the rectangle is: %d\n", area); // here we have used printf() function to print the area of the rectangle


cout << "################# Assignment 2: Customer check out service #################" << endl;
/* discription: create simple checkout service where you will ask user the item they picked with the help of options and then number of item they picked
then calculate the total price and if the billing exceeds the certain amount then give them 5% discount and if bill if much higher than the 5% amount then give 10% discount*/

int milk = 1, bread = 2, egg = 3, sugar = 4, rice = 5;
int milk_price = 50, bread_price = 30, egg_price = 10, sugar_price = 40, rice_price = 60;
int item, quantity, total_price;
string input;
cout << "=== Store Menu ===\n";
    cout << "1. Milk (Rs 50)\n";
    cout << "2. Bread (Rs 30)\n";
    cout << "3. Egg (Rs 10)\n";
    cout << "4. Sugar (Rs 40)\n";
    cout << "5. Rice (Rs 60)\n\n";
while (true)
{
    cout << "\nEnter item number (or press 'c' to finish): ";
    cin >> input;
    if (input == "C" || input == "c"){break;}
    cout << "Enter quantity: ";
    cin >> quantity;
    if (input == "1"){total_price += milk_price * quantity;}
    else if (input == "2"){total_price += bread_price * quantity;}
    else if (input == "3"){total_price += egg_price * quantity;}
    else if (input == "4"){total_price += sugar_price * quantity;}
    else if (input == "5"){total_price += rice_price * quantity;}
    else{cout << "Invalid item number!" << endl;}
    cout << "Current total price = " << total_price << endl;
}

if (total_price > 100){total_price = total_price - (total_price * 10 / 100);}
else if (total_price > 75){total_price = total_price - (total_price * 5 / 100);}
cout << "\nFinal total price = " << total_price << endl;





    return 0;
}


