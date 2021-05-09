//Parent need to create 1st child and after completion of the forst child only it needs to create 2nd child
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void main()
{
	if(fork()==0)
	{
		//child1
		printf("Child 1 process....pid = %d ppid= %d\n", getpid(), getppid());
	//	while(1);
		sleep(5);
		exit(0);
	}	
	else
	{//parent
		int r, s;

		if(wait(&s)!=-1)
		{
		 	if(fork()==0)
			{
				printf("Child 2 Process........pid= %d ppid=%d\n", getpid(), getppid());
				exit(0);
			}
			
		}
		
	}	
while(1);


}	
