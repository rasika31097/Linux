/* In the below program when SIGNAL function will be called in main(), in signal table the working beside signal number 2 i.e SIGNT will be modified to my_isr function (handler) so when we execute the program, and give signat ctrl+c, signal handler will go to my_isr function, In my_isr function, again the signal is changed back to the default signal so again when we give ctrl+c, the program gets terminated */
 
#include"header.h"
void my_isr(int n)
{
printf("In ISR..\n");
signal(n, SIG_DFL);// SIG_DFL means default action 

}
void main()
{
printf("1st statement....\n");
signal(SIGINT, my_isr); //SIGNT functionong will be changed to my_isr
while(1);
printf("2nd Statement...\n");
}	
