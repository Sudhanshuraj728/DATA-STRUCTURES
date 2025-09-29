#include <stdio.h>
#define n 5;
int top=-1;
int stack[5];
void push()
{
    int x;
    if(top==4){
        printf("Stack Overflow.");
    }
    else{
        printf("Ënter value:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("value entered:");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}

void pop(){
    if(top==-1){
        printf("Stack Undeflow.");
    }
    else{
        int item=stack[top];
        top--;
        printf("Popped %d\n",item);
    }
}

void peek(){
    if(top==-1){
        printf("Stack Underflow");
    }
    else{
        printf("Top element is :%d",stack[top]);
        top--;
    }
}

int main(){
    int ch;
    printf("1.Push\n2.Pop\n3.Display\n4.Exit");
    while(1){
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice :");
        }
    }
}