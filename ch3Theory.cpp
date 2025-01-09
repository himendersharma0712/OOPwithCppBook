#include <iostream>
#include <string.h>

int n = 10;

void change(int &a)
{
    a = 10;
}

std::ostream * output  = &std::cout; // pointer to 'cout' object 


extern int state;
int yr = 2025;

enum Switch
{
    On,
    Off
};
enum
{
    R,
    G,
    B
}; // anonymous enum
enum color
{
    red,
    green,
    blue,
    orange
};

int main(int argc, char *argv[])
{

    int C = B;
    int A = R, B = G;
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
    const int *ptrX = &X;
    // *ptrX = 24;  // this won't run

    // constant pointer
    int *const constptr = &yr;
    // constptr = &A; // it cannot point to any other address

    // in C char are stored as int
    // but in C++ char are stored as char

    // std::cout << (sizeof(char) == sizeof(int)); // returns true in C but false in C++
    // std::cout << (sizeof(char) == sizeof('a')); // returns true in C++

    // dynamic initialization in C++
    int a = strlen("Hello");

    // reference variables(only in cpp)
    int m = 10;
    int &number = m; // reference to m
    number = 5;      // same as m = 5

    /*

    Reference Variables:

    A reference is an alias for another variable.

    Once a reference is initialized to a variable, it cannot be changed to refer to another variable.

    References are automatically dereferenced, so you don't need to use the dereference operator * to access the value.

    */

    int b = 5;

    change(b);

    // std::cout << b;

    // ##--------------------------------------------------------------------//

    // Using :: operator to use global variable and avoid its shadowing from local variable
    {
        int n = 5;

        // std::cout << n << "\n";
        // std::cout << ::n; // use n from global scope
    }

    /********************************************** */
    // using new and delete for dynamic mem alloc

    // the new operator can be used to create objects of any type.
    // the syntax is pointer-variable = new data-type

    int *p = new int(5); // we can also assign it at runtime
    int *q = new int;
    *q = 10;

    delete p;
    delete q;

    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i + 1;
    }

    delete[] arr; // to delete a dynamic array

    // In c++, we can use endl instead of "\n"
    // but endl also flushes the buffer

    /*1. Buffering in C++
    In the context of input and output (I/O) operations, buffering refers to temporarily storing data in a memory area (called a buffer) before it's actually read
    from or written to the system. This process helps improve efficiency, especially when dealing with large amounts of data.

    For Output (writing): When you output data (like printing to the console), it's not always written immediately. Instead, 
    it's stored in an output buffer. The system writes the contents of the buffer to the actual output (like the screen or a file) all at once 
    when the buffer is full or when certain conditions are met.

    For Input (reading): Similarly, when you read input, data may be temporarily stored in an input buffer. When you try to read, 
    the program first checks the buffer for data before making an actual system call to get more data.

    Example: When you use std::cout to print something, it's often buffered and may not immediately appear on the screen until the buffer is flushed.

    2. Flushing the Buffer
    Flushing the buffer means forcing the buffered data to be written out to the actual output (or read into the program from the input source), 
    even if the buffer isn't full.*/

    std::cout << std::endl;

    /*
    In C++, the new operator can allocate a single-dimensional array or a pointer
    to a pointer for multidimensional arrays,
    but it cannot directly allocate a multidimensional array like new int[3][5][4];
    */


//----------------------------------------------------

// Note that cin and cout are objects of classes istream and ostream respectively.
// And yk wht? objects can access member functions 

// std::cout << std::boolalpha;
// std::cout << (1==0); // displays false

std::cout.write("Hello World",15); // write() doesn't perform any formatting like cout
std::cout.flush(); // flush ensures that all the buffered data in the output stream is
// immediately written out to the destination (console, file, etc.).

*output << "Hello"; // dereference output to get cout and then use it 


}
