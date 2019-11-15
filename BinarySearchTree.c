#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int elt;
    struct Node *left,*right;
}*root=NULL;

struct Node* addElement(struct Node *ptr,int x)
{
    if(ptr==NULL)
    {
        ptr=(struct Node*)malloc(sizeof(struct Node));
        ptr->elt=x;
        ptr->left=NULL;
        ptr->right=NULL;
        if(root==NULL)
            root=ptr;
        return ptr;
    }
    if(x>ptr->elt)
    {
        ptr->right=addElement(ptr->right,x);
    }
    if(x<ptr->elt)
    {
        ptr->left=addElement(ptr->left,x);
    }
}

struct Node* findMin(struct Node *ptr)
{
    if(ptr==NULL)
        return NULL;
    else if(ptr->left==NULL)
        return ptr;
    else
        return findMin(ptr->left);
}
struct Node* deleteElement(struct Node *ptr,int x)
{
    if(ptr==NULL)
    {
        printf("\nNo elements to show");
    }
    else if(x<ptr->elt)
    {
        ptr->left=deleteElement(ptr->left,x);
    }
    else if(x>ptr->elt)
    {
        ptr->right=deleteElement(ptr->right,x);
    }
    else if((ptr->left!=NULL)&&(ptr->right!=NULL))
    {
        struct Node *temp;
        temp=findMin(ptr->right);
        ptr->elt=temp->elt;
        ptr->right=deleteElement(ptr->right,ptr->elt);
    }
    else
    {
        struct Node *temp;
        temp=ptr;
        if(ptr->left==NULL)
            ptr=ptr->right;
        else if(ptr->right==NULL)
            ptr=ptr->left;
        free(temp);
    }
    return ptr;
}
void preOrder(struct Node *ptr)
{
    if(ptr!=NULL)
    {
        printf("%d\n",ptr->elt);
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}
void inOrder(struct Node *ptr)
{
    if(ptr!=NULL)
    {
        inOrder(ptr->left);
        printf("%d\n",ptr->elt);
        inOrder(ptr->right);
    }
}
void postOrder(struct Node *ptr)
{
    if(ptr!=NULL)
    {
        postOrder(ptr->left);
        postOrder(ptr->right);
        printf("%d\n",ptr->elt);
    }
}
int heightAndDepth(struct Node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
    {
        int left=heightAndDepth(ptr->left);
        int right=heightAndDepth(ptr->right);
        if(left>right)
            return left;
        else
            return right;
    }
}
int main()
{
    char ch='y';
    int n,x;
    printf("Binary Search Tree ! Here we go !!!\n");
    while(ch=='y'||ch=='Y')
    {
        printf("\nPress 1 to add elements to the BST: ");
        printf("\nPress 2 to delete elements from the BST");
        printf("\nPress 3 to show Preorder Traversal: ");
        printf("\nPress 4 to show Inorder Traversal: ");
        printf("\nPress 5 to show Postorder Traversal: ");
        printf("\nPress 6 to calculate the height and depth of tree: ");
        printf("\n\nEnter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                    printf("\nEnter the element to be added: ");
                    scanf("%d",&x);
                    addElement(root,x);
                    break;
            case 2:
                    printf("\nEnter the element to be deleted: ");
                    scanf("%d",&x);
                    deleteElement(root,x);
                    break;
            case 3:
                    preOrder(root);
                    break;
            case 4:
                    inOrder(root);
                    break;
            case 5:
                    postOrder(root);
                    break;
            case 6:
                    printf("\Height : %d",heightAndDepth(root));
        }
        printf("\n\nWant to continue?");
        scanf(" %c",&ch);
    };
}
