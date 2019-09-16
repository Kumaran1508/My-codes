#include<stdio.h>
#include<conio.h>

int Q[5],f=-1,r=-1,n=5;
void IAB(int);
void IAE(int);
void DAB();
void DAE();
void display();


void main()
{
	int x,i,o,c,l;
	clrscr();
	printf("\nChoose Deque type: \n 1.Input Restricted \n 2.Output Restricted \n 0. Exit\n");
	scanf("%d",&x);
	if(x==1)
	{
		printf("\n Choose Restriction End : \n 1.Beginning \n 2.End \n Any other number to main menu\n");
		scanf("%d",&i);
		if(i!=1 && i!=2)
			main();
	}
	else if(x==2)
	{
		printf("\n Choose Restriction End : \n 1.Beginning \n 2.End \n Any other number to main menu\n");
		scanf("%d",&o);
		if(o!=1 && o!=2)
			main();
	}
	else
	{
		if(x==0)
			exit(0);
		main();
	}
	menu:
	clrscr();
	printf("\n Enter choice : \n 1.Insert \n 2.Delete \n 3.Display \n 0.Exit \n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		if(x==1)
		{
			printf("\n Enter number to be inserted : ");
			scanf("%d",&c);
			if(i==1)
				IAE(c);
			else
				IAB(c);
		}
		else
		{
			clrscr();
			printf("\n Choose the Insertion End : \n 1. Beginning \n 2. End \nDefault is End");
			scanf("%d",&l);
			printf("\n Enter number to be inserted : ");
			scanf("%d",&c);
			if(l==1)
				IAB(c);
			else
				IAE(c);

		}
		goto menu;

		case 2:
		if(x==2)
		{
			if(o==1)
				DAE();
			else
				DAB();
		}
		else
		{
			clrscr();
			printf("\n Choose the Deletion End : \n 1. Beginning \n 2. End \nDefault is End");
			scanf("%d",&l);
			if(l==1)
				DAB();
			else
				DAE();
		}goto menu;

		case 3:
		clrscr();
		display();
		printf("\n Enter 0 to continue :");
		scanf("%d",&c);
		goto menu;

		case 0:
		exit(0);
		default:
		goto menu;
	}
	//return 0;
}

void IAB(int num)
{
	int i;
	if(f==-1)
	{
		f=0;r=0;
		Q[f]=num;
	}
	else if(r==n-1)
	{
		printf("\n Queue Overflow\n Enter 0 to continue\n");
		scanf("%d",&i);
	}
	else
	{
		for(i=r;i>=0;i--)
		{
			Q[i+1]=Q[i];
		}
		r++;
		Q[0]=num;
	}
}

void IAE(int num)
{
	int i;
	if(f==-1)
	{
		f=0;r=0;
		Q[f]=num;
	}
	else if(r==n-1)
	{
		printf("\n Queue Overflow\n Enter 0 to continue\n");
		scanf("%d",&i);
	}
	else
	{
		r++;
		Q[r]=num;
	}
}

void DAB()
{
	int i;
	if(f==-1)
	{
		printf("\n Queue Underflow\n Enter 0 to continue\n");
		scanf("%d",&i);
	}
	else if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	{
		for(i=0;i<r;i++)
		{
			Q[i]=Q[i+1];
		}
	}
	r--;
}

void DAE()
{
	int i;
	if(r==-1)
	{
		printf("\n Queue Underflow\n Enter 0 to continue\n");
		scanf("%d",&i);
	}
	else if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	{
		r--;
	}
}

void display()
{
	int i;
	printf("\n");
	for(i=f;i<=r;i++)
	{
		printf("%d ",Q[i]);
	}
}
