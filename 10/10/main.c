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
    int i;
    
    //fopen
    fp = fopen("sample.txt","w");
    
    for(i=0;i<3;i++){
        //fprintf
        printf("input a word:");
        scanf("%s", input); //'&'쓰지 않아요
        fprintf(fp, "%s\n", input);
    }
    
    //fclose
    fclose(fp);
    
    return 0;
}
