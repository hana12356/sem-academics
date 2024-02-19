#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    unsigned frequency;
    struct node*left,*right;
};
struct node* createnode(char data,unsigned frequency)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->frequency=frequency;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node*buildhuffmantree(char data[],unsigned frequency[],int size)
{
    struct node*left,*right,*top;
    struct node*priorityqueue[size];
    int rear=0;
    for(int i=0;i<size;i++)
    {
        priorityqueue[rear++]=createnode(data[i],frequency[i]);
        for(int j=rear-1;j>0;j--){
            if(priorityqueue[j]->frequency<priorityqueue[j-1]->frequency)
        {
            struct node*temp=priorityqueue[j];
            priorityqueue[j]=priorityqueue[j-1];
            priorityqueue[j-1]=temp;
        }
        else{
            break;
        }
        }
    }
    while(rear>1)
    {
        left=priorityqueue[0];
        right=priorityqueue[1];
        for(int i=0;i<rear-2;++i)
        {
            priorityqueue[i]=priorityqueue[i+2];
        }
        rear-=2;
        top=createnode('$',left->frequency+right->frequency);
        top->left=left;
        top->right=right;
        int i;
        for(i=rear-1;i>=0;--i)
        {
            if(top->frequency>=priorityqueue[i]->frequency)
            {
                break;
            }
            priorityqueue[i+1]=priorityqueue[i];
        }
        priorityqueue[i+1]=top;
        rear++;
    }
    return priorityqueue[0];
}
void printhuffmancodes(struct node* root,int arr[],int top)
{
    if(root->left)
    {
        arr[top]=0;
        printhuffmancodes(root->left,arr,top+1);
    }
    if(root->right){
        arr[top]=1;
        printhuffmancodes(root->right,arr,top+1);
    }
    if(!(root->left)&&!(root->right))
    {
        printf("%c",root->data);
        for(int i=0;i<top;++i)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    char inputstring[]="blackboard";
    int frequencies[256]={0};
    int len=strlen(inputstring);
    for(int i=0;i<len;++i){
        frequencies[(int)inputstring[i]]++;
    }
    int validcharacters=0;
    for(int i=0;i<256;i++){
        if(frequencies[i]>0){
            validcharacters++;
        }
    }
    char data[validcharacters];
    int freq[validcharacters];
    int index=0;
    for(int i=0;i<256;i++){
        if(frequencies[i]>0){
            data[index]=(char)i;
            freq[index]=frequencies[i];
            index++;
        }
    }
    struct node*root=buildhuffmantree(data,freq,validcharacters);
    int arr[100],top=0;
    printf("huffman codes:\n");
    printhuffmancodes(root,arr,top);
    return 0;
}
