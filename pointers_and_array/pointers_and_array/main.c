//
//  main.c
//  pointers_and_array
//
//  Created by W. Tong on 06.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>


//void test(int a[]){//遍历数组中元素
//    //int a[]= {1,2,3,5};
//    for (int i = 0; i<sizeof(a)/sizeof(a[0]); i++){
//        if(0==i%10){
//            printf("The %dst element of the array is %d\n",i+1, a[i]);
//        }
//        else if (1==i%10){
//            printf("The %dnd element of the array is %d\n", i+1, a[i]);
//        }
//        else if (2==i%10){
//            printf("The %drd element of the array is %d\n", i+1,a[i]);
//        }
//        else{
//            printf("The %dth element of the array is %d\n", i+1, a[i]);
//        }
//    }
//}

void test2(int b[], int j, int *p){//遍历数组中元素，使用指针
    
    printf("%d, %d, %d\n", sizeof(b), sizeof(b[0]),sizeof(b)/sizeof(b[0]));
    
    for (int i = 0; i<j; i++){
        if(0==i%10){
            printf("The %dst element of the array is %d\n",i+1, *(p+i));
        }
        else if (1==i%10){
            printf("The %dnd element of the array is %d\n", i+1, *(p+i));
        }
        else if (2==i%10){
            printf("The %drd element of the array is %d\n", i+1,*(p+i));
        }
        else{
            printf("The %dth element of the array is %d\n", i+1, *(p+i));
        }
    }

    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    //int a[1]={1};
    printf("%d, %d, %d\n", sizeof(a), sizeof(a[0]),sizeof(a)/sizeof(a[0]));
    int *ap = &a[0];// int *ap = a; also works
    //printf("%d, %d, %d\n", sizeof(a), sizeof(a[0]),sizeof(a)/sizeof(a[0]));

    //test(a);
    //printf("Hahahahaha\n");
    test2(a,sizeof(a)/sizeof(a[0]), ap);
    printf("%d\n",*(ap+10));
    
    char aaa[2]= "mj";
    
    printf("The test of pointer at string: %c, %c, %c", *aaa, *(aaa+1), *(aaa+2));
    return 0;
}
