# A very basic program in C to change binary codes:
- this program reads the file.txt (or you can change it to even better)
- then first by storing it then the program writes file's binary-code xor HEX on it
  and replace it.

  ```c
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
  ```

  - By compiling and running the program once, you will be able to see the message in the file.txt
  -- If you run the outputed program agin, then it will be hex changed again to orginal as first.
  - file.txt now are xored, if you want to see the message runthe program once.    

