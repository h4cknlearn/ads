#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    // read from stdin + allocate memory all at once
    // this version i'm not using int* to typecast malloc unnecessarily
    
    int* array_read(size_t* out_intnum) {
    int* array;
    size_t i;
    size_t n;
    scanf("%zu", &n);
    array = malloc(n * sizeof(int));
    
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);
        
    *out_intnum = n;
    return array;
    
    }
   
    // function to sum the array
    int array_sum(int const* array, size_t n) {
        size_t i;
        int sum = 0;
        for(i = 0; i < n; i++)
            sum = sum + array[i];
        return sum;
    }
    
    // print the sum of array in main 
   int main(void) {
       int* array;
       size_t n;
       
       array = array_read(&n);
       printf("%d\n", array_sum(array, n));
       
       // brain has declared to freeing this improved array
       free(array);
    
      return 0;
   }
