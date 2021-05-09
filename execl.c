//simple program to understand the execution of execl
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

void main()
{
printf("Before execl call");	
execl("/bin/ls", "ls", "-l", "-i"); //1st argument is cmd name along with path, 2nd argument is command name, 3rd argument onwards is option
printf("After execl call\n");

}	
