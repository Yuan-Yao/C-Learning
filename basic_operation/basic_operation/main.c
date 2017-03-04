//
//  main.c
//  basic_operation
//
//  Created by W. Tong on 03.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int a = 5;
    int b = 4;
    if(a<b){
        printf("a is smaller than b.");
    } else {
        printf("a is bigger or equals than b.\n");
    }
    
    int c =a<b;//no bool in c, but int goes for bool
    printf("%d is the answer for boolean.\n",c);
    
    if (3==a){//有时判断语句“==”会少加一个等号，会很失败。因此判断语句应该将数值（或条件）放前面，如本句的 3==a
        printf("a==3 is true!\n");
    }else{printf("a==3 is not true!\n");}
    
    int d = (a++, a *=2, b = a*5);
    printf("d is %d.\n", d);
    d = ++a, a *=2, b = a*5;
    printf("d is %d.\n", d);
    
    
    
    return 0;
}
