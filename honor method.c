 #include<stdio.h>
 #include<conio.h>
 void main ()
 {
 	int n ,i;
 	float a[30],x,result;
 	printf("enter the max degree\n");
 	scanf("%d",&n);
 	printf("enter the co-efficients\n");
 	for(i=0;i<=n;i++)
 	scanf("%f",&a[i]);
 	printf("enter the value for x \n");
 	scanf("%f",&x);
 	result=a[n];
 	for(i=n-1;i>=0;i--)
 	result=result*x+a[i];
 	printf("evaluated result=%f\n",result);
 	getch();
 	
 }
