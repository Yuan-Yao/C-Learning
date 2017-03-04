//
//  main.c
//  basic_data_types
//
//  Created by W. Tong on 16.02.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    int a;
    printf("%d\n",a);//未经初始化也会有值，会随意复制给a
    
    char b = 'A';
    printf("%c\n",  65);
    
    size_t size = sizeof(a);
    printf("%d is the size of an int.\n", size);
    
    return 0;
}
