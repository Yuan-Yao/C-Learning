//
//  main.c
//  two_dimentional_array
//
//  Created by W. Tong on 05.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int a[2][2]={{1,2},{3,4}};
    int b[][2]={1,2,3};//It's also legit!
    
    printf("%d, %d, %d\n",a[0],a, &a[0][0]);//a是二维数组，则a与a[0]都是a的地址
    size_t size = sizeof(a[0]);
    printf("%d\n",size);
    
    
    
    
    printf("Hello, World!\n");
    return 0;
}
