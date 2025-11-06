//
//  main.c
//  10
//
//  Created by 강채연 on 11/6/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i = 0;
    char str[4];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
  
    while(str[i] != '\0'){
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
