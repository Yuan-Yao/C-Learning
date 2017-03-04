//
//  main.c
//  c_learning
//
//  Created by W. Tong on 03.02.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>// #开头的叫预处理指令，就是编译之前处理的指令，就是
                  //就是将stdio.h全部拷贝过来而已
                  //.h是头文件，声明了各种函数。
#include "header.h"//不能
//#include "header.c"//include不能加.c文件，编译没有问题，但是会导致链接linker出问题（重复定义）
//#include "add.ini"//自编头文件要用“” include指令进去
//void test();//声明test函数
//int sum(int, int);//声明函数只需要声明好形参的类型就好。



int main(/*int argc, const char * argv[]*/) {//一个c语言必有且只有一个main函数 函数不写返回值，默认为int型返回值
    // insert code here...
    printf("Hello, World!\n %d  \n",10);
    test();
    printf("%d \n",sum(10,21));
    return 0;//返回0代表正常退出，返回-1代表不正常退出
}

