//A test for the Scheduling, later become Lottery Scheduling


#include "types.h"      //maybe needed to use some types of variables
#include "user.h"       //functios like printf and syscalls

#define STDOUT 1        //following the standard nomenclature for xv6 output

int main(){
    int pid = fork();
    if(pid > 0){
        printf(STDOUT,"parent: child=%d\n", pid);
        pid = wait();
        printf(STDOUT,"child %d is done\n", pid);
    } else if(pid == 0){
        printf(STDOUT,"child: exiting\n");
        exit();
    } else {
        printf(STDOUT,"fork error\n");
    }
    
    
    exit();
}
