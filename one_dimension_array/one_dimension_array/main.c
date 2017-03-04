//
//  main.c
//  one_dimension_array
//
//  Created by W. Tong on 04.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

void test(int a[]){
    a[0] = 10;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    

    
    char a = 'A';
    int b = 66;
    printf("The address of the a is %d, adress of b is %d.\n", &a, &b);
    printf("The address of the a is in 16-Hex %x, address of b in Hex is %x.\n", &a, &b);
    
    //array
    int ages[5] = {1,2,3,4,5};//64-bit, it takes 20 byte;
    size_t size = sizeof(ages);
    printf("The array a takes %d bytes.\n", size);
    printf("The address of the ages[0] is %x.\n", &ages[0]);
    printf("The address of the ages[1] is %x.\n", &ages[1]);
    printf("The address of an array is the address of the first element of the array, so &ages[0] = ages.\n");
    printf("%x = %x\n", &ages[0],ages);
    
    for(int i = 0; i<=4;i++){
        printf("The address of ages[%d] is %d.\n", i, &ages[i]);
    }
    
    
    
    
    printf("The 1st element of ages before the test function is %d.\n",ages[0]);
    test(ages);//这里数组的地址传递给了函数，所以函数内的形式参数变化也会带动实际参数变化，1变为10；
    printf("After the test function, the 1st element of array test is now %d.\n",ages[0]);
    
    return 0;
}
