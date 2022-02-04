#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>




int main(int argc, char *argv[]){

    
    
    char *arr[argc];
    printf("argv[1] %s\n", argv[1]);
    

    if(argc < 2){
        printf("error hello\n");

    }
    else{
        
        for(int i = 1; i < argc; i++){
 
            arr[i-1] = argv[i];
            //printf("This is the arr %s\n", arr[i]);
        }
        arr[argc-1] = NULL;
        //printf("This should be null: %s\n", arr[argc-1]);

        pid_t cpid;
        if(fork() == 0){
        
            printf("I am baby\n");
            execvp(argv[1], arr);
            exit(0);
         
        }
        else{
            printf("I am not baby\n");
            cpid = wait(NULL);
        }
      
    }
    

    return 0;
}   