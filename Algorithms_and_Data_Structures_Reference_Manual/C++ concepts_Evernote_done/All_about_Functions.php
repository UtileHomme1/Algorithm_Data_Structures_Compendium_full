<!-- Reference - https://www.geeksforgeeks.org/functions-in-c/ -->

<!-- What is a function -->

- A function is a set of statements that take inputs, do some specific computation and produces output.

- The idea is to put some commonly or repeatedly done task together and make a function, so that instead of writing the same code again and again for different inputs, we can call the function.

<!-- Function Declaration -->

<!-- Reference - https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/ -->

<!-- Reference - https://www.geeksforgeeks.org/g-fact-95/ -->

<!-- Reference  https://www.geeksforgeeks.org/importance-of-function-prototype-in-c/ -->

- Function declaration tells compiler about number of parameters function takes, data-types of parameters and return type of function.

- Putting parameter names in function declaration is optional in function declaration, but it is necessary to put them in definition. Below are example of function declarations. (parameter names are not there in below declarations)

<!-- Syntax -->

// A function that takes two integers as parameters
// and returns an integer
int max(int, int);

// A function that takes a char and an int as parameters
// and returns an integer
int fun(char, int);

<!-- Parameter passing in functions -->

- The parameters passed to function are called actual parameters. For example, in the above program 10 and 20 are actual parameters.

- The parameters received by function are called formal parameters. For example, in the above program x and y are formal parameters.

There are two most popular ways to pass parameters.

<!-- Pass by Value:  -->

- In this parameter passing method, values of actual parameters are copied to function’s formal parameters and the two types of parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of caller.

<!--
#include <iostream>

using namespace std;

void fun(int x)
{
x = 30;
}

int main()
{
int x = 20;
fun(x);

cout<<x;

return 0;

}

Output = 20
-->

<!-- Pass by Reference -->

- Both actual and formal parameters refer to same locations, so any changes made inside the function are actually reflected in actual parameters of caller.

<!--

#include <iostream>

using namespace std;

void fun(int *x)
{
*x = 30;
}

int main()
{
int x = 20;
fun(&x);

cout<<x;

return 0;
}

Output = 30

-->

<!-- Explanation for above -->

- The function fun() expects a pointer ptr to an integer (or an address of an integer). It modifies the value at the address ptr. The dereference operator * is used to access the value at an address. In the statement ‘*ptr = 30’, value at address ptr is changed to 30.

- The address operator & is used to get the address of a variable of any data type. In the function call statement ‘fun(&x)’, the address of x is passed so that x can be modified using its address.

<!-- What are Default arguments -->

<!-- Reference - https://www.geeksforgeeks.org/default-arguments-c/ -->

- A default argument is a value provided in function declaration that is automatically assigned by the compiler if caller of the function doesn’t provide a value for the argument with default value.

<!-- Important Points to Remember -->

- Default arguments are different from constant arguments as constant arguments can’t be changed whereas default arguments can be overwritten if required.

- Default arguments are overwritten when calling function provides values for them. For example, calling of function sum(10, 15, 25, 30) overwrites the value of z and w to 25 and 30 respectively.

- During calling of function, arguments from calling function to called function are copied from left to right. Therefore, sum(10, 15, 25) will assign 10, 15 and 25 to x, y and z. Therefore, default value is used for w only.

- Once default value is used for an argument in function definition, all subsequent arguments to it must have default value. It can also be stated as default arguments are assigned from right to left. For example, the following function definition is invalid as subsequent argument of default variable z is not default.

<!-- Eg -->

// Invalid because z has default value, but w after it
// doesn't have default value
int sum(int x, int y, int z=0, int w)

<!-- Returning multiple values from a function using Tuple and Pair -->

<!-- Reference - https://www.geeksforgeeks.org/returning-multiple-values-from-a-function-using-tuple-and-pair-in-c/ -->

- We can declare the function with return type as pair or tuple and can pack the values to be returned and return the packed set of values.
- The returned values can be unpacked in the calling function

<!-- Tuple -->

- is an object capable to hold a collection of elements where each element can be of different type

<!-- Pair -->

- couples together a pair of values, which may be of different types

** Tuple can also be used to return two values instead of using pair

<!-- Constant member functions -->

<!-- https://www.geeksforgeeks.org/const-member-functions-c/ -->

- A function becomes constant when the "const" keyword is used in the function's declaration
- The idea of const functions is not allow to modify the object on which they are called

<!-- Eg- -->


#include<iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v = 0) {value = v;}

    // We get compiler error if we add a line like "value = 100;"
    // in this function.
    int getValue() const {return value;}
};

int main() {
    Test t(20);
    cout<<t.getValue();
    return 0;
}

<!-- Output -->

20

<!--  -->

- When a function is declared as const, it can be called on any type of object.
- Non-const fucntions only be called by non-const objects

<!-- Eg -->

#include<iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v = 0) {value = v;}
    int getValue() {return value;}
};

int main() {
    const Test t;
    cout << t.getValue();
    return 0;
}

<!-- Output  -->

passing 'const Test' as 'this' argument of 'int
Test::getValue()' discards qualifiers
