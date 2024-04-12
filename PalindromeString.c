/*
* @Author: karlosiric
* @Date:   2024-04-12 20:06:17
* @Last Modified by:   karlosiric
* @Last Modified time: 2024-04-12 23:39:56
*/




#include <stdio.h> // allows for basic use of functions!
#include <string.h> // allows useful functions for string manipulation
#include <stdbool.h> //allows us to use the boolean data type

bool is_palindrome(char string[]);

int main()
{   
    // in this programming exercise we will check if the string is a palindrome!
    // that means that the string is the same backwards and forwards
    // for example: "abccba" is a palindrome string it is the same backwards and forwards!
    
    char string1[] = "not a palindrome!";
    char string2[] = "abccba";
    char string3[] = "abcdcba";
    
    if(is_palindrome(string2))
    {
        printf("\"%s\" ---> is a palindrome", string2);
    }
    else {
        printf("\"%s\" ---> is not a palindrome", string2);
    }
    
        

    return 0;
}

bool is_palindrome(char string[]) {
    
    int middle = strlen(string) / 2;
    int strLen = strlen(string);
    
    // example the string is: char inputString[] = "abccba" ,at start we have string[0] is it equal to string[length], then after string[1]
    // is it equal to string[length - 1] so last in the line and etc
    
    for (int i = 0; i < middle; ++i)
    {
        if(string[i] != string[strLen - i - 1]) {
            return false;
        }
        
    }
    
    return true;
    
}