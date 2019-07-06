#include<stdio.h>
#include<stdlib.h>
void add();
void create(int,int);
void IAE(int,int);
struct node
{
  int pow;
  int coeff;
  struct node *next;
}*poly1=NULL,*poly2=NULL,*res=NULL;
int main()
{
    struct node *temp,*n;
    poly1=(struct node*)malloc(sizeof(struct  node));
    poly1->coeff=2;
    poly1->pow=2;
    temp=poly1;
    n=malloc(sizeof(struct  node));
    n->coeff=5;
    n->pow=1;
    temp->next=n;
    temp=n;
    n=malloc(sizeof(struct  node));
    n->coeff=7;
    n->pow=0;
    temp->next=n;
    n->next=NULL;
    
    poly2=malloc(sizeof(struct  node));
    poly2->coeff=3;
    poly2->pow=1;
    temp=poly2;
    n=malloc(sizeof(struct  node));
    n->coeff=4;
    n->pow=0;
    temp->next=n;
    n->next=NULL;
    add();
    temp=res;
    while(temp!=NULL)
    {
        printf("\n %dx^(%d)",temp->coeff,temp->pow);
        temp=temp->next;
    }
    return  0;
}
void create(int coeff,int pow)
{
    struct node *temp,*n;
    if(res==NULL)
    {
        res=malloc(sizeof(struct node));
        res->pow=pow;
        res->coeff=coeff;
        res->next=NULL;
    }
    else
    {
     temp=res;
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     n=malloc(sizeof(struct node));
     n->pow=pow;
     n->coeff=coeff;
     n->next=NULL;
     temp->next=n;   
    }
}     
void IAE(int coeff,int pow)
{
    struct node *temp,*n;
    temp=res;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    n=malloc(sizeof(struct node));
    n->pow=pow;
    n->coeff=coeff;
    n->next=NULL;
    temp->next=n;
}
void add()
{
    struct node *temp1,*temp2,*temp;
    temp1=poly1;
    temp2=poly2;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->pow==temp2->pow)
            {
                create(temp1->coeff+temp2->coeff,temp1->pow);
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else if(temp1->pow>temp2->pow)
            {
                IAE(temp1->coeff,temp1->pow);
                temp1=temp1->next;
            }
            else
            {
                IAE(temp2->coeff,temp2->pow);
                temp2=temp2->next;
            }
        }
        else if(temp1==NULL)
        {
            while(temp2!=NULL)
            {
                IAE(temp2->coeff,temp2->pow);
                temp2=temp2->next;
            }
        }
        else
        {
            while(temp1!=NULL)
            {
                IAE(temp1->coeff,temp1->pow);
                temp1=temp1->next;
            }
        }
    }
}
