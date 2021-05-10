//Implementation of own kill command
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
if(argc != 3)
{printf("Usage: ./my_kill signum PID\n");	
return;
}
if(kill((atoi(argv[2])),atoi(argv[1]))<0) //kill function prototype--> int kill(int pid_t, int signal); upoon failure returns -1
{
	perror("Kill :");
	return;
}	

}	
