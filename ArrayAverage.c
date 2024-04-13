/*
* @Author: karlosiric
* @Date:   2024-04-13 00:37:55
* @Last Modified by:   karlosiric
* @Last Modified time: 2024-04-13 15:33:55
*/

#include <stdio.h>
#include <stdlib.h>
    
int main(void) {
    
    double arr1[] = {5.2,4.9,3.2,6.0,7.1,6.5};
    
    int len = sizeof(arr1) / sizeof(arr1[0]);
    
    double sum = 0.0;
    
    for (int i = 0; i < len; ++i)
    {   
        sum += arr1[i];
        printf("Adding %lf to the sum\n", arr1[i]);
        if(i == len - 1)
        {
            printf("Final sum is: %lf\n", sum);
        } else {
            
        printf("Current sum is: %lf\n", sum);
            
        }
        
        
    }
    
    double average = sum / len;
    printf("The average sum of the elemnts in the array is: %lf\n", average);
    return 0;
}   