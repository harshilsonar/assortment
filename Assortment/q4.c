#include<stdio.h>
#include<conio.h>

 int main()
 {
 	int  num[20][20],i,j,n,sum[10]={0},sum1[10]={0};
 	printf("enter number of row and column");
 	scanf("%d",&n);
 	printf("enter matrix elements....\n");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("ente the elements [%d][%d]",i,j);
 			scanf("%d",&num[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		sum[i]=sum[i]+num[i][j];
	 		sum1[i]=sum1[i]+num[j][i];
		 }
	 }
	 printf("matrix is ...\n");
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d\t",num[i][j]);
		 }
		 printf("\t%d\n",sum[i]);
	 }
	 printf("\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\t",sum1[i]);
	 }
 }
