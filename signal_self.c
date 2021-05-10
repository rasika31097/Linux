#include"header.h"
void main()
{
printf("Hello..\n");
kill(getpid(), SIGFPE);//getpid() will fetch the process id of current process and SIGFPE is macro for segmentation fault (signal number 8)
perror("Kill");
while(1);
}	
