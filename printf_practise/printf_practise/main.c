//
//  main.c
//  printf_practise
//
//  Created by W. Tong on 05.02.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("My name is %s, my age is %d, my gender is %c, my height is %.2f meter", "Yuan Yao", 28, 'm', 1.77f);
    //%c ist char, %.2f ist 2 Stellen nach Komma zu sehen. %4d bedeutet der d wird 4 Stellen links nehmen. %-4d wird 4 Stellen rechts nehmen.
    return 0;
}
