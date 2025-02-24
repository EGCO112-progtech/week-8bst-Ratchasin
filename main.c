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

 
 
   // traverse the tree preOrder
   printf("/nThe preOrder traversal is:\n" );
   preOrder( b.root );
   printf("/n");
   // traverse the tree inOrder
   printf("/nThe inOrder traversal is:\n" );
   inOrder( b.root );
   printf("/n");
   // traverse the tree postOrder
   printf("/nThe postOrder traversal is:\n" );   
   postOrder( b.root );
   printf("/n");

   printf("/nThe TreeOrder traversal is:\n" );   
    printTree(b.root, 0);

} // end main

