#include<stdio.h>

int main()
{

int blocksize[100];
int ProcessSize[100];
int Allocation[100];
int n,m,i,j;

printf("Enter the no of block:");
scanf("%d",&m);
printf("\nEnter the no of processes:");
scanf("%d",&n);

printf("\nEnter the size of each block:");
for(i=0;i<m;i++)
scanf("%d",&blocksize[i]);

printf("\nEnter the size of each process:");
for(i=0;i<n;i++)
scanf("%d",&ProcessSize[i]);

for(i=0;i<n;i++)
{	for(j=0;j<m;j++)
	{	if(ProcessSize[i]<=blocksize[j])
		{
			
			Allocation[i]=j+1;
			blocksize[j]-=ProcessSize[i];
			break;
		}
	}
}

printf("\nAllocated Block:\n");
for(i=0;i<n;i++)
printf("\nProcess %d \t Block %d",i+1,Allocation[i]);

}

