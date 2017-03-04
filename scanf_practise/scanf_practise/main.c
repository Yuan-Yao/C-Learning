//
//  main.c
//  scanf_practise
//
//  Created by W. Tong on 16.02.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    //putin a number and print the square of the number
    
    //1. input a int number and show its square
    printf("Please input an int number: ");
    int a;
    scanf("%d", &a);//scanf is a func that will never purseed until the user finishes his action
                    //put the "%d" value to the address of the variable a, which is "&a"!!!
    printf("%d\'s square is %d\n", a, a*a);
    
    //2. input two int nummber and show their product
    printf("Please input two number, apart them with space:");
    int b, c;
    scanf("%d %d", &b, &c);//%d and %d are aparted with space, so when input, also apart them with space
    printf("The product of these two int numbers are: %d\n", b*c);
    
    
    
    return 0;
    
}
