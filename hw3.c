//Violet Smith
//Homework 3
//CSCI 340
//Feb 3
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>




int main(int argc, char *argv[]){

    
    // create a new array of the size of the arguments
    char *arr[argc];
    
    //printf("argv[1] %s\n", argv[1]);
    
    //if no arguments are entered print error
    if(argc < 2){
        printf("error\n");

    }

    
    else{

        //set the values entered to values in a empty array        
        for(int i = 1; i < argc; i++){
 
            arr[i-1] = argv[i];
            //printf("This is the arr %s\n", arr[i]);
        }

        //set the last value in the array to null for the execvp function
        arr[argc-1] = NULL;

        //printf("This should be null: %s\n", arr[argc-1]);

        //create child process
        pid_t cpid;
        if(fork() == 0){
        
            //printf("I am baby\n");
            execvp(argv[1], arr);
            exit(0);
         
        }
        //create parent process
        else{
            printf("I am not baby\n");
            cpid = wait(NULL);
        }
      
    }
    

    return 0;
}   