#include <iostream>
#include <string.h>

int n = 10;

void change(int&a){
    a = 10;
}

extern int state;
int yr = 2025; 

enum Switch{On,Off};
enum {R,G,B}; // anonymous enum
enum color{ red, green , blue, orange
};

int main(int argc,char*argv[]){

int C = B;
int A = R, B=G;
// printf("%d %d %d",A,B,C);

Switch switch_ = Off;
Switch switch__ = On;

int pink = 8;
color wallpaper = (color)pink;


// register int state = Off; 
// register keyword isn't used anymore 
// It didn't really impact performance
// the compiler can handle CPU registers based storage itself and
// doesn't need register keyword to explicitly state it

char name[4] = "Max"; // must ensure space for null char '\0'

const int X = 10;
// ptr to a constant
const int * ptrX = &X;
// *ptrX = 24;  // this won't run

// constant pointer
int * const constptr = &yr;
// constptr = &A; // it cannot point to any other address

// in C char are stored as int
// but in C++ char are stored as char

// std::cout << (sizeof(char) == sizeof(int)); // returns true in C but false in C++
// std::cout << (sizeof(char) == sizeof('a')); // returns true in C++


// dynamic initialization in C++
int a = strlen("Hello");


// reference variables(only in cpp)
int m = 10;
int & number = m; // reference to m
number = 5; // same as m = 5


/*

Reference Variables:

A reference is an alias for another variable.

Once a reference is initialized to a variable, it cannot be changed to refer to another variable.

References are automatically dereferenced, so you don't need to use the dereference operator * to access the value.

*/

int b = 5;

change(b);

// std::cout << b;



//##--------------------------------------------------------------------//

// Using :: operator to use global variable and avoid its shadowing from local variable


{
int n = 5;

std::cout << n << "\n";
std::cout << ::n; // use n from global scope

}


}
