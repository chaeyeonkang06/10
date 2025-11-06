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
    char input[100];
    FILE* fp;
    char c;
    
    //fopen
    fp = fopen("/Users/kangchaeyeon/Desktop/2025-2/전자공학도를 위한 프로그래밍 기초/10/10/sample.txt","r");
    
#if 0
    while( (c = fgetc(fp)) != EOF)
    {
        putchar(c);
    }
#endif
    
#if 1
    while( fgets(input, 100, fp) != 0) //혹은 >0
    {
        printf("%s", input);
    }
#endif
    
    //fclose
    fclose(fp);
    
    return 0;
}
