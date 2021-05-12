//Task- Parent need to send unsorted array to child through pipe and child need to sort and print it

#include"header.h"
void main()
{
	int p[2];
	pipe(p);
	perror("Pipe");

	//parent process
int arr[5];
printf("Enter array elements\n");

for(int i=0; i<5; i++)
scanf("%d", &arr[i]);

write(p[1], arr, sizeof(arr));

if(fork()==0)
	{
		printf("In child process...\n");
		int arr[5];
			read(p[0], arr, sizeof(arr));
					int temp;
					for(int i=0; i<4; i++)
					{

					for(int j=0; j<4-i; j++)
					{
						if(arr[j]>arr[j+1])
						{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;

						}


					}
					}
					for(int i=0; i<5; i++)
					printf("%d ", arr[i]);
					printf("\n");



	}	
}	
