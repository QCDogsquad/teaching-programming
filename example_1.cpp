
 // ==================================================================================
//                                      Example 1
// This example will go over basic types and constructs in C/C++
//
//
// ==================================================================================


// This is a comment

// Use /* to start a block comment and */ to end it

/* <- This is a block comment, which won't a comment that doesn't end until it hits
*     the end token
  * <- This character is not necessary, but I use it because of the text editor I use. 
* You're choice to use it or not, block comments cannot contain other block comments
*/ //


// Don't worry about this(#include <stdio.h>) too much, I will go over this later 
// Just know that this is needed in order to use the printf function
#include <stdio.h>

int main(){
 //                               Important notes:
 // Semicolons(';') are required after all statements in C/C++!!!!
 
 // ==================================================================================
 //                                 Using printf:
 
 // Use printf to print information to the console
 printf("Hello world!\n"); 
 // \n is part of what are called an escape code. 
 // Specifically, \n tells the console to print a newline.
 
 // printf can be used to print values too.
 printf("This is an integer: %d\n", 951413);
 // In C/C++ %d is part of what are called format specifiers. 
 // Specifically %d says to print the next argument as an integer(more on what an integer is later).
 // Here are some common format sequences:
 // %d -> integer
 // %u -> unsigned integer (More on this later)
 // %f -> float
 // %c -> character
 // %s -> string
 
 // Question 1:
 // Using format specifiers print the float(number with a decimal) 3.14159.
 // Please try to do answer this question. 
 // Look at example_1_solutions.cpp for what it should look like. 
 // I RECOMMEND DOING THIS AFTER YOU HAVE ANSWERED ALL QUESTIONS.
 
 // ==================================================================================
 //                                     Variables
 
 //                                  Creating variables:
 // An integral part of C/C++ is the type system, which is similar but different to Python's.
 // In order to make a variable in C/C++ you must declare its type.
 // Think of a variable as a basket that can hold certain things.
 // Think of a type as what a variable is allowed to hold; like the shape of the basket.
 // For now the important types you will care about for right now are:
 // int -> integer
 // double -> floating point number(number with a decimal) <- I will go over this more later
 // char -> character
 
 // Examples:
 int MyInteger = 8161;
 int MyInteger2 = -8161;  // <- Integers can also be negative(More on this later)
 double MyDouble = 1.618; 
 double MyDouble2 = -1.618; // <- Floats/doubles can also be negative!
 char MyCharacter = 'A';
 char MyCharacter2 = '\n'; // <- Escape codes are valid characters too!
 
 //                                     Data types:
 // Since different variables have different types, there are also different ways of defining data
 // An integer is just a number you type without a decimal
 // A double is just a number you type WITH a decimal
 // A character is a letter or escape code surrounded by '
 // A string is text and escape codes surrounded by " <- More on this later
 
 //                                   Important notes: 
 // 1. Integers can be different sizes! 8 bits, 16 bits, 32 bits, and 64 bits. 
 
 // 2. Characters are basically just 8 bit integers, which means that:
 char MyOtherCharacter = 65; // <- 65 == 'A'
 
 // 3. Integers by default have signs, which means that they can be positive or negative.
 //    There are also unsigned integers which cannot store negative values.
 unsigned int MyUnsignedInteger = 8172; // The type is 'unsigned int'
 
 // 4. Floating point numbers have limited precision, which means that they can't store all 
 //    possible numbers. However, right now you shouldn't encounter this, but remember this!!!
 
 // Question 2:
 // Define a variable that can store the value: 1.414 and print it using printf.
 // Look at example_1_solutions.cpp for what it should look like. 
 // I RECOMMEND DOING THIS AFTER YOU HAVE ANSWERED ALL QUESTIONS.
 
 // ==================================================================================
 
}