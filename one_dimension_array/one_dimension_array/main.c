//
//  main.c
//  one_dimension_array
//
//  Created by W. Tong on 04.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    char a = 'A';
    int b = 66;
    printf("The adress of the a is %d, adress of b is %d.\n", &a, &b);
    printf("The adress of the a is in 16-Hex %x, adress of b in Hex is %x.\n", &a, &b);
    
    //array
    int ages[5];//64-bit, it takes 20 byte;
    size_t size = sizeof(ages);
    printf("The array a takes %d bytes.\n", size);
    printf("The adress of the ages[0] is %x.\n", &ages[0]);
    printf("The adress of the ages[1] is %x.\n", &ages[1]);
    printf("The adress of an array is the adress of the first element of the array, so &ages[0] = ages.\n");
    printf("%x = %x\n", &ages[0],ages);
    
    
    
    return 0;
}
