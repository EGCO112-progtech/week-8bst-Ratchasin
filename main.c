#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold random values
   BST b;
   //srand(time(NULL));
  // puts("The numbers being placed in the tree are: ");
   
	b.root= NULL;  b.size=0;// tree initially empty
for ( i = 1; i < argc; ++i ) { 
      insertNode( &b, atoi(argv[i]));
     //insertNode_R(&b.root,atoi(argv[i]) );
  } // end for

  printf("The postnOrder traversal is:\n" );   
  postOrder( b.root );
 
   // traverse the tree preOrder
   printf("The preOrder traversal is:\n" );
   preOrder( b.root );
   // traverse the tree inOrder
   printf("The inOrder traversal is:\n" );
   inOrder( b.root );
   // traverse the tree postOrder
 

    printf("\nTree structure:\n");
    printTree(b.root, 0);

} // end main

