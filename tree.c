#include<stdio.h>

struct Node{
	
	int data;
	struct Node *leftChild,*rightChild,*parent;
	
};

int main()
{
    Node par,left,right;
    par.data=10;
    par.leftChild=&left;
    par.rightChild==&right;
    par.parent=NULL;
    
    right.parent=&par;
    right.data=20;
    right.rightChild=NULL;
    right.leftChild=NULL;
    
    left.parent=&par;
    left.data=3;
    left.leftChild=NULL;
    left.rightChild=NULL;
    //printf("%d   %d  %d",par.data,par.leftChild,&left);
	//printf("parent Address %d \n leftChild Addr %d\n  %d",&parent,parent->leftChild,&left);
	return 0;
}
