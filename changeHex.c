#include <stdio.h>
#define FILE_LENGTH (1024*1024)
#define HEX (0x313)
void main(){

    FILE *f = fopen("file.txt", "rb");
    char readedFile[FILE_LENGTH];
    int i = 0; 
    while(!feof(f)){
        readedFile[i++] = fgetc(f);
    }
    fclose(f);

    f = fopen("file.txt", "wb");
    for(int j = 0; j<i-1 ; j++){
        fputc((readedFile[j]^HEX), f);
    }
    fclose(f);

    return;
}