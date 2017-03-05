//
//  main.c
//  string_aka_array_of_char
//
//  Created by W. Tong on 05.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    
    char string[] = {'T','W','\0'};//\0 is the end of an array of chars in c language;
    char string1[2] = {'Y','Y'};//Is not a string in c
    char string2[]="YY";//"" can indicate a string in the C;
    size_t size = sizeof(string);
    printf("The string is %s, the size is %d.\n", string, size);
    
    puts(string1);//puts can use another line automatically, but it puts "YYTW" out
                  //系统的内存排变量的地址是倒序，所以内存先排数组string1（YY），再排字符串string（TW和\0）。但是puts函数只打印字符串，string1是数组的名字，也是数组的地址。puts函数要打印到字符串结束的标志（也就是\0标志为止），所以会把字符串string也会打印出来。
    printf("%s\n", string1);//理同上一句。%s代表打印字符串，会找到\0为止才会停止打印。
    
    char s[2], s1[2];
    printf("put in the string s:\n");
    scanf("%s",s);
    printf("The string s putted in was %s.\n", s);
    
    printf("Put in the string s1:\n");
    gets(s1);
    printf("The string s1 putted in was: %s.\n",s1);
    
    char names[2][10]= {"Jimmy", "Klaus"};
    
    return 0;
}
