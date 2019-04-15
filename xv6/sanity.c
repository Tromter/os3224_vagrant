//
//  sanity.c
//  
//
//  Created by Turner Romey on 4/14/19.
//

#include "sanity.h"

//immediately for 20 child processes.

//ttime - ctime = turnaround time
//retime  = waiting time
//rutime = running time

int main(int argc, char *argc[]){
    int i = 0;
    int retime;
    int rutime;
    int stime;
    int pid = 0;
    int totals[3][3];
    for(i = 0; i < 20; i++){
        pid = fork();
        if(pid == 0){
            int j = pid % 3;
        }
        else{
            wait(NULL);
            exit(1);
        }
    }
    return 0;
}
