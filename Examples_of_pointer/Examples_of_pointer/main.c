//
//  main.c
//  Examples_of_pointer
//
//  Created by W. Tong on 06.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

void swap1(int v1, int v2){
    int vt;
    vt = v1;
    v1 = v2;
    v2 = vt;
}

void swap2(int *v1, int *v2){
    int t = *v1;
    *v1 = *v2;
    *v2 = t;
}

void SumAndMinus(int v1, int v2, int *s, int *m){
    *s = v1+v2;
    *m = v1-v2;
};

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int a = 10;
    int b = 3;
    printf("a and b's values ware %d and %d before swap.\n",a,b);
    swap1(a,b);
    printf("a and b are now: %d, %d.\nUsing the func swap1(swap1 can only swap the local variables) cannot affect the values of universal varibles aka a and b.",a, b);
    
    swap2(&a, &b);
    printf("After using the func swap2(&a, &b), the values of a and b are %d and %d now.\n", a ,b);
    
    a = 10;
    b = 3;
    int sum, minus;
    SumAndMinus(a, b, &sum, &minus);
    printf("The sum and minus of a and b are %d and %d.\n", sum, minus);
    
    
    
    
    return 0;
}
