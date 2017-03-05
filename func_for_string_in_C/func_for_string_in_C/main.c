//
//  main.c
//  func_for_string_in_C
//
//  Created by W. Tong on 05.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>
#include <string.h>//系统包含的字符串的库

int main(int argc, const char * argv[]) {
    // insert code here...
    
    putchar(65);
    
    
    char a = getchar();
    printf("The char putted in was: %c.\nPlease put in a string, not longer than 10:",a);
    
    
    char s[11];
    
    scanf("%s", s);
    unsigned long len = strlen(s);
    printf("The number of char in string s is %d\n",len);
    printf("%c",s[10]);
    
    char left[10];
    printf("Please put in the string to copy to string 'left':");
    scanf("%s",s);
    strcpy(left, s);
    printf("String 'left' is :%s\n",left);
    
    char right[10];
    printf("Please put in the right part, which follows the string 'left' to complete a whole string:");
    scanf("%s",right);
    printf("The whole string is: %s\n",strcat(left, right));
    printf("The string 'left' is changed to %s\n", left);
    
    printf("%d\n",strcmp("a", "b"));

    
    
    return 0;
}
