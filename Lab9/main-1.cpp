#include<iostream>
using namespace std;

//Eighth Error, node structure must be declared outside of the class.
struct node
{
   int data;
   node* left;
   node* right;
};//First Error, no semicolon

class BST
{

private:

   node* root;  //Fourth Error "node* root"

   node* makeEmpty(node* t)
   {
      makeEmpty(t->left);
      makeEmpty(t->right);
      delete t;
      //Missing return,  Not sure if this counts as an error but just returned null regardless.
      return NULL;
   }


   void postorder(node* t)
   {
      if (t == NULL)
         return;
      postorder(t->left);
      postorder(t->right);
      cout << t->data << " ";
   }
public:


   //Second Error, need a dereference pointer for "node* t".
   node* find(node* t, int x) //Third error, "node* find();"
   {
      if (t == NULL)
         return NULL;
      else if (x < t->data)
         return find(t->right, x);
      else if (x > t->data)
         return find(t->left, x);
      else
         return t; //Tenth error, if the node is found, it will not go into any of the if statements, so there must be another statement if found.
   }
   BST()
   {
      root = NULL;
   }
   ~BST()
   {
      root = makeEmpty(root); //Fifth Error, Missing argument
   }
}; //Sixth Error, Missing semicolon

int main() 
{
   BST t;
   node* myRoot; //Ninth Error, the binary search tree has no insert method, so the tree can not be initialized.
   t.find(myRoot, 110); //Seventh Error, find(x,y) method is in private, to fix you can put in public, but assuming thats not allowed.
   return 0; 
}