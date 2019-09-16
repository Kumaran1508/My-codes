#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev;
 struct node *next;
}*head;
void create(int);
void display();
void IAB(int);
void IAM(int,int);
void IAE(int);
void DAB();
void DAM(int);
void DAE();
int count();
void search();
void main()
{
 int num,pos,c;
 clrscr();
 printf("\nChoose operation:\n1.Creation\n2.Insertion at Beginning\n3.Insertion at Middle\n4.Insertion at End\n5.Deletion at Begining\n6.Deletion at Middle\n7.Deletion at End\n8.Display\n9.Count\n10.Search\n99.Exit");
 printf("\n Enter a number: ");
 scanf("%d",&num);
 switch(num)
 {
  case 1:clrscr();
	 printf("\n Enter another number: ");
	 scanf("%d",&num);
	 create(num);main();
  case 2:clrscr();
	 printf("\n Enter another number: ");
	 scanf("%d",&num);
	 IAB(num);main();
  case 3:clrscr();
	 printf("\n Enter a number and its position to perform Insertion at Middle: ");
	 scanf("%d %d",&num,&pos);
	 IAM(num,pos);
	 main();
  case 4:clrscr();
	 printf("\n Enter a number to perform insertion at End: ");
	 scanf("%d",&num);
	 IAE(num);
	 main();
  case 5:clrscr();
	 printf("\n Enter any number to perform Deletion at beginning: ");
	 scanf("%d",&num);
	 DAB();
	 main();
  case 6:clrscr();
	 printf("\n Enter a number to delete it from the list: ");
	 scanf("%d",&num);
	 DAM(num);
	 main();
  case 7:clrscr();
	 printf("\n Enter any number to perform Deletion at end: ");
	 scanf("%d",&num);
	 DAE();
	 main();
  case 8:clrscr();
	 display();
	 printf("\n Enter any number to continue: ");
	 scanf("%d",&num);
	 main();
  case 9:clrscr();
	 c=count();
	 printf("The length of the array is %d\n Enter any number to continue.. ",c);
	 scanf("%d",&num);
	 main();
  case 10:clrscr();
	  printf("\n Enter an element to search : ");
	  scanf("%d",&num);
	  search(num);
	  printf("Enter any number to continue.. ");
	  scanf("%d",&num);
	  main();
  case 99:printf("\n THANK YOU!");
	  printf("Confirm Exit? \n0. Exit \n1. Cancel\n");
	  scanf("%d",&num);
	  if(num==1)
	  main();
	  exit(0);
  default:printf("\n Wrong choice try again!");
	  printf("\n Enter any number to continue.. ");
	  scanf("%d",&num);
	  main();
 }
 getch();
}
void create(int n)
{
 struct node *temp;
 if(head==NULL)
 {
  head=(struct node*)malloc(sizeof(struct node));
  head->data=n;
  head->next=NULL;
  head->prev=NULL;
 }
 else
 {
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=n;
  temp->next=NULL;
  temp->prev=head;
  head->next=temp;
 }
}
void display()
{
 struct node *temp;
 temp=head;
 while(temp!=NULL)
 {
  printf("\n%d      %d     %d",temp->prev,temp->data,temp->next);
  temp=temp->next;
 }
}
void IAB(int num)
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 temp->data=num;
 temp->prev=NULL;
 temp->next=head;
 head->prev=temp;
 head=temp;
}
void IAM(int num,int pos)
{
 int i;
 struct node *temp,*n;
 temp=head;
 for(i=1;i<pos;i++)
 {
  temp=temp->next;
 }
  n=(struct node*)malloc(sizeof(struct node));
  n->data=num;
  n->next=temp;
  n->prev=temp->prev;
  temp->prev->next=n;
  temp->prev=n;
}
void IAE(int num)
{
 struct node *temp,*n;
 temp=head;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 n=(struct node*)malloc(sizeof(struct node));
 n->data=num;
 n->next=NULL;
 n->prev=temp;
 temp->next=n;
}
void DAB()
{
 struct node *temp;
 temp=head;
 head=head->next;
 head->prev=NULL;
 free(temp);
}
void DAM(int val)
{
 struct node *temp;
 temp=head;
 while(temp->data!=val && temp!=NULL)
 {
  temp=temp->next;
 }
 temp->prev->next=temp->next;
 temp->next->prev=temp->prev;
 free(temp);
}
void DAE()
{
 struct node *temp;
 temp=head;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->prev->next=NULL;
 free(temp);
}
int count()
{
 struct node *temp;
 int c=0;
 temp=head;
 while(temp!=NULL)
 {
  c++;
  temp=temp->next;
 }
 return c;
}
void search(int num)
{
 struct node *temp;
 int f=0;
 temp=head;
 while(temp!=NULL)
 {
  if(temp->data==num)
  {
   printf("\n found");
   f=1;
  }
  temp=temp->next;
 }
 if(f==0)
 printf("\n Not Found");
}