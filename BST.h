// An integer binary search tree

struct TreeNode
{
   struct TreeNode *leftPtr;  // pointer to left subtree
   int data;                  // node value
   struct TreeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode

typedef struct TreeNode *TreeNodePtr; // synonym for TreeNode*

typedef struct
{
   int size;
   TreeNodePtr root;
} BST;

// prototypes

void insertNode(BST *, int);
void insertNode_R(TreeNodePtr *t, int value);
void inOrder(TreeNodePtr treePtr);


/*void insertNode_R(TreeNodePtr *t, int value)
{
   //*t = (TreeNodePtr)malloc(sizeof(TreeNode));
   if (*t)
   {
      (*t)->leftPtr = NULL;
      (*t)->rightPtr = NULL;
      (*t)->data = value;
   }

   else
   {
      if ((*t)->data >= value) // left
      {
         insertNode_R(&((*t)->leftPtr), value);
      }

      else// right
      {
         insertNode_R(&((*t)->rightPtr), value);
      } 
   }
}*/

void insertNode(BST *b, int value)
{
   TreeNodePtr t = b->root, new_node;
   int inserted = 0;
   new_node = (TreeNodePtr)malloc(sizeof(struct TreeNode));
   if (new_node)
   {
      new_node->leftPtr = NULL;
      new_node->rightPtr = NULL;
      new_node->data = value;
      /*First Node*/
      if (!b->root)
         b->root = new_node;
      else
      {
         while (!inserted)
         {
            if (t->data >= value)
            {
               if (t->leftPtr==NULL)
               {
                  /* move/insert to the left*/
                  t->leftPtr = new_node;
                  
                  inserted = 1;
               }
               else{t = t->leftPtr;}
               
            }
            else
            {
               /* move/ insert to the right*/
               if (t->rightPtr==NULL)
               {
                  t->rightPtr = new_node;
                  inserted = 1;
               }
               else{t=t->rightPtr;}
            }

         } // end while
      } // end else;
      b->size++;
   }

} // end function

void preOrder(TreeNodePtr treePtr)
{
   // if tree is not empty, then traverse
   

   if (treePtr != NULL)
   {
printf("%3d", treePtr->data); // print the value
      preOrder(treePtr->leftPtr); // Recursion to the left

      

      preOrder(treePtr->rightPtr); // Recursion to the right
   } 
} 

void inOrder(TreeNodePtr treePtr)
{
   // if tree is not empty, then traverse
   if (treePtr != NULL)
   {

      inOrder(treePtr->leftPtr); // Recursion to the left

      printf("%3d", treePtr->data); // print the value

      inOrder(treePtr->rightPtr); // Recursion to the right
   } // end if
} // end

void postOrder(TreeNodePtr treePtr)
{
   // if tree is not empty, then traverse
   if (treePtr != NULL)
   {

      postOrder(treePtr->leftPtr); // Recursion to the left

      

      postOrder(treePtr->rightPtr); // Recursion to the right
      printf("%3d", treePtr->data); // print the value
   } // end if
} // end

void printTree(TreeNodePtr treePtr, int space) {
   if (treePtr != NULL) {


   printTree(treePtr->rightPtr, space+1);
   
   for (int i = 0; i < space; i++) printf("   ");
   printf("%3d\n", treePtr->data);
   
   printTree(treePtr->leftPtr, space+1);}
}


