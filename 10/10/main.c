//
//  main.c
//  10
//
//  Created by 강채연 on 11/6/25.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char src[] = "The worsst things to eat before you sleep";
    char dst[100];
    
    strcpy(dst, src);
    
    printf("copied string : %s\n", dst);
    return 0;
}
