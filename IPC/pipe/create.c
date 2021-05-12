/*TASK- Parent need to scan the data from user and put it into pipe. child need to read the data from pipe and print.*/ 
#include"header.h"
void main()
{
int p[2];
pipe(p);
perror("PIPE");
printf("p[0] = %d\np[1] = %d\n", p[0], p[1]);
if(fork()==0)
{
char s[20];	
//child process
printf("In child before reading..\n");
read(p[0], s, sizeof(s));
printf("In child Data = %s\n", s);
}	
else
{
char s[20];	
//parent process
printf("In parent.. Enter string\n");
scanf("%s", s);
write(p[1], s, strlen(s)+1);

}	


}	

