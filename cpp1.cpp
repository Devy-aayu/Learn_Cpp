// to save the file follow two steps:
// 1. run this command in the terminal: g++ cpp1.cpp -o output.exe
//2. run this command in the terminal: ./output.exe
 
//Content
/*
basic structure of a c++ program
introduction to diffrent data types in c++ like int, float, double, char, bool, string etc
how to define variables and assign values to them
how to use them 

*/

#include <string>
#include <iostream> 
 // this is a preprocessor directive that includes the iostream library which is used for input and output operations
 // "#" se start hone wala sab ka sab preprocessor directive hote hai iske or bhi type hote hai other than include upar dekha hi ki yeah bss ke lib hai
 
 using namespace std; // yeah name space kya hai jaise iostream ke andar cout aur cin duncton hote hai lib me toh aab agr manlo mughe apna koi function bnana hua toh uske lie problem ari thi
 // islie cpp walo ne ek std karke container bnaya jisme unhone apne sare function ko rakha aur humne usko use karne ke lie "using namespace std" likhna padta hai taki humara function aur unka function clash na kare
 //even we can use std::cout instead of using namespace std; to avoid naming conflicts and create our own namespace like given below
 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// namespace mynamespace{                                                                                      /////
//    void myFunction(){                                                                                      /////
//        std::cout << "This is my function" << std::endl;                                                   /////
//    }                                                                                                     /////
//   }                                                                                                     /////
//                                                                                                        /////
// and if i want to call my function then i have to use the namespace name like this given below         ///// 
//   int main(){                                                                                        /////
//    mynamespace::myFunction();                                                                       /////
//   }                                                                                                /////
////////////////////////////////////////////////////////////////////////////////////////////////////////

 int main(){
    cout << "hello world" << endl;
 

// Output: hello world

/*###########################################################################################################################################################################################################################################*/
// another way to write the hello world code is like this given below

//#include <iostream> //same as above
//int sec()
//{
//    std::cout<<"Hello World";
//    return 0;
//}

// Output: Hello World

/*#################################################################################################################################################################*/


//now the we will lean how we can define variables

// so to define variable we have to define the datatype first and then the variable name and then we can assign the value to it like this given below/

/*both meathdo used to deifne variable a value in the starting  like i know the value will be this so i will give the value directly*/
int variable = 10; // here we have defined a variable of type int and assigned the value 10 to it this is first way
int variable2(20); // here we have defined a variable of type int and assigned the value 20 to it this is second way

/* third way is to define the variable first and then assign the value or have to change in other places*/
// here is the third way to define a variable and assign a value to it like this given below
int variable3; // here we have defined a variable of type int but not assigned any value
variable3 = 30; // here we have assigned the value 30 to the variable3

/* aab manlo mughe ek aisa variable define karna hai jo kabhi change na ho toh uske lie me "const" keyword use karna padega*/
const int variable4 = 40; // here we have defined a constant variable of type int and assigned the value 40 to it
// now i cant change the value of variable4 because it is a constant variable and if i try to change the value of variable4 then it will give me an error like this given below
// variable4 = 50; // error: assignment of read-only variable 'variable4'

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* there are 3 type of datatypes in cpp 1. premitive 2. user-defined 3. derived */
// primitive datatypes are the basic datatypes that are provided by the c++ language like int, float, double, char, bool etc
// derived datatypes are the datatypes that are derived from the primitive datatypes like array, pointer, reference, function etc
// user-defined datatypes are the datatypes that are defined by the user like class, structure , union, enum etc

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//defining a variable of type int and assigning a value to it
int a = 10; // here we have defined a variable of type int and assigned the value 10 to it
float b = 20.5; // here we have defined a variable of type float and assigned the value 20.5 to it its precision is 6 digits after decimal point
double c = 30.123456789; // here we have defined a variable of type double and assigned the value 30.123456789 to it its precision is 15 digits after decimal point
char d = 'A'; // here we have defined a variable of type char and assigned the value 'A' to it
bool e = true; // here we have defined a variable of type bool and assigned the value true to it

// abb manlo mughe ek aisa value assign karna hai jo negative nhi ho skt ya kuch or toh uske lie me "unsigned" keyword use karunga jaise ki niche diya gaya hai
unsigned int f = -10; // here we have defined a variable of type unsigned int and assigned the value 10 to it
   cout << "the variable which cant hold negative values: " << f << endl;
// what if me isko run kru toh yeah mughe ek garbase value dega


/* ok now lets imagine i want to perform some operations on these variables so i can do that by just normal operators like +, -, *, / as given below*/

int sum = a + b + c; // here we have defined a variable of type int and assigned the value of a + b + c to it coz d and e are not int so we cant add them to sum coz they are of different datatypes
   cout << "the sum of a, b and c is: " << sum << endl;

//output: the sum of a, b and c is: 60 here we get 60 coz a is 10, b is 20.5 and c is 30.123456789 so the sum is 60.623456789 but we have defined sum as int so it will only take the integer part of the sum which is 60
// if i give the sum variable as double , float then it will give me the exact sum which is 60.623456789 as given below
double sum2 = a + b + c; // here we have defined a variable of type double and assigned the value of a + b + c to it
   cout << "the sum of a, b and c is: " << sum2 << endl;
float sum3 = a + b + c; // here we have defined a variable of type float and assigned the value of a + b + c to it
   cout << "the sum of a, b and c is: " << sum3 << endl;


string str1 = "Hello"; // here we have defined a variable of type string and assigned the value "Hello" to it
string str2 = "World"; // here we have defined a variable of type string and assigned the value "World" to it
string str3 = str1 + " " + str2; // here we have defined a variable of type string and assigned the value of str1 + " " + str2 to it
   cout << "the concatenation of str1 and str2 is: " << str3 << endl;
return 0; 
}