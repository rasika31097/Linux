/* signal function is used to modify the actual working of signal. 
 * Prototype- signalhandler signal(int signum, signalhandler_t handler);
 * It will not generate the signal and it is not a blocking function */
#include "header.h"
void my_isr(int n) //signal handler function
{

printf("In ISR... Signal number = %d\n", n);

}	
void main()
{

printf("1st statement\n");
signal(SIGINT, my_isr); //signal function will internally call the my_isr function when SIGNT(ctrl+c) signal will be received and continue the execution of while(1);
printf("2nd statement\n");
while(1);
}	
/* output will be
 * 1st statement
 * 2nd statement //After this the ctrl will be executing the while(1), when we press ctrl+c, it will print In Isr and then again while(1); */
