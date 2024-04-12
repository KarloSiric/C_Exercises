/*
* @Author: karlosiric
* @Date:   2024-04-12 23:41:07
* @Last Modified by:   karlosiric
* @Last Modified time: 2024-04-13 00:25:03
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_array(int array[], int length);

int main(void)
{
    int myArray[] = {1,2,6,9,8,7,6,5};
    int myArray2[] = {1,6,25,100,8,54,23,5};
    int myArray3[] = {1,43,124,120,8,54,6,90};
    // calculating 
    int sum1 = sum_array(myArray, sizeof(myArray) / sizeof(myArray[0]));
    int sum2 = sum_array(myArray2, sizeof(myArray2) / sizeof(myArray2[0]));
    int sum3 = sum_array(myArray3, sizeof(myArray3) / sizeof(myArray3[0]));
    
    printf("Sums of the arrays are %d\n", sum1);
    printf("Sums of the arrays are %d\n", sum2);
    printf("Sums of the arrays are %d\n", sum3);
    
    
    
    return 0;
}
    
int sum_array(int array[], int length) {
    
    int sumValue = 0;
    for (int i = 0; i < length; ++i)
    {
        sumValue = sumValue + array[i];
    }
    
    return sumValue;
}
