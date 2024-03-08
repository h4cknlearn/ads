#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    // create dynamic array  
    int* array;
    int n; 
    int sum = 0;
    
    // read size from user
    scanf("%d", &n);
    
    // check if n is non negative because why not
    if(n <= 0) {
        printf("oh no! invalid size, bro\n");
        return 1;
    }
    
    // alloc memory 
    array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("memory alloc failed!\n");
        return 1;
    }
    
    // function to read elements
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    
    // function to sum elements
    for(int i = 0; i < n; i++) {
        sum += array[i];
    }
    
    /* print elements
    realize later that i didnt need this at all lolz
    wont delete this for learning purposes *shame*
    
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }*/
    
    // print only the sum of array
    printf("%d\n", sum);
    
    // brain has declared to freeing this noobish array
    free(array);
    
    return 0;
}
