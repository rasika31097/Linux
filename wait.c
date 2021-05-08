#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
void main()
{
	if(fork()==0)
	{	//child1 
		int r;
		srand(getpid());
		r=rand()%10+1;
		sleep(r);
		printf("Child1 Done\n");		
		exit(0);
	}		
	else
	{	//y
		if(fork()==0)
		{	//child2
			int r;	
			
			srand(getpid());
			r=rand()%10+1;
			sleep(r);
			printf("Child 2 Done\n");
			exit(0);
		}
		else 
		{//y
			if(fork()==0)
			{	int r;
				srand(getpid());
				r=rand()%10+1;
				sleep(r);
				printf("child 3 Done\n");
				exit(0);
			}
			else{
				//y
				int r, s;
				while((r=wait(&s))!=-1)
				{	
				}	
			}	
			printf("Parent: All 3 childs are done\n");
			while(1);
		}
		}
	}

