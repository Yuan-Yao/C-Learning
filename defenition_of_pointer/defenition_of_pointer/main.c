//
//  main.c
//  defenition_of_pointer
//
//  Created by W. Tong on 05.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Defination of a pointer
    
    char a;//direct reference
    
    char *b = &a;//a pointer b is defined, only can point to char var, b points at a.
    
    *b = 'A';//这个*与指针定义的*不是一个意思，这里是指针运算符，代表b的值所对应的存储空间，并赋值10.
    
    printf("%c, %c\n",a, *b);//两种访问方式
    

    
    return 0;
}
