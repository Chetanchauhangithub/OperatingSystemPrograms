#include<stdio.h>

int main()
{
int bSize[]={50,100,300,500,400};
int pSize[]={80,120,250,500,600};
int Allocation[5]={-1,-1,-1,-1,-1};
int i,j,n=5,m=5,Prev=-1;

for(i=0;i<n;i++)
{
	Prev=-1;
	for(j=0;j<m;j++)
	{
		if(bSize[j]>=pSize[i])
		{
		if(Prev==-1)
			Prev=j;
		else  if(bSize[Prev]<bSize[j])
			Prev=j;
		}
	}
	
	if(Prev!=-1)
	{
	Allocation[i]=Prev+1;
	bSize[Prev]-=pSize[i];
	}
}

for(i=0;i<5;i++)
{
if(Allocation[i]!=-1)
printf("\n\nProcess %d Block %d",i+1,Allocation[i]);
}

return 0;
		 
}	
