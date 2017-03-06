//
//  main.c
//  why_pointers_have_types
//
//  Created by W. Tong on 06.03.17.
//  Copyright © 2017 W. Tong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 1;
    char a =10;
    char *c = &a;
    int *b = &a;
    printf("The pointer c points at %d, but pointer b pointes at %d.\nBecause the different types have different length in the memory, so we need to identify their pointers to indicate how many bytes are we talking about.", *c, *b);
    
    
    
    return 0;
}
