#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief entry point 
 * 
 * @param as 
 * @param av 
 * @return int 
 */
int main(int as, char* av[]){
    if(as <= 2){
        perror("no enough args!");
        exit(EXIT_SUCCESS);
    }
    if(strcmp(av[1],"run") == 0){

    } else {
        exit(EXIT_FAILURE);
    }
    return 0;
}
/**
 * @brief run the specified command
 * 
 * @param ras : size of args to run.
 * @param rav : values of args to run.
 * @return int : 0 means fine, -1 means wrong.
 */
int run(int ras, char* rav[]){
    int i;
    printf("Running: ");
    for(i=0;i<ras;i++){
        printf("%s ", rav[i]);
    }
    printf("\n");

    return 0;
}