#include "main.h"

/**
 
_strlen_recursion - Returns the length of a string
@s: String to measure
Return: Length of the string*/
int _strlen_recursion(char s)
{
if (s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
} 
Task 3 :
#include "main.h"

/**
 
factorial - Returns the factorial of a number
@n: Number to calculate*
Return: Factorial of n, or -1 if n is negative*/
int factorial(int n)
{
    if (n < 0)
        return (-1);

    if (n == 0)
        return (1);

    return (n * factorial(n - 1));
}
