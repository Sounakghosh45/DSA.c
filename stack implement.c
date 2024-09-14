#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push(){
    int n;
    if(top==MAX-1){
        printf("The stack is overflow!\n");
    }else{
        printf("Enter the element to push:");
        scanf("%d",&n);
        top++;
        stack[top]=n;
        printf("%d is pushed:\n",n);
    }
}
void pop(){
    if(top==-1){
        printf("The stack is underflow!\n");
    }else{
        int pop_element=stack[top];
        top--;
        printf("%d is poped:\n",pop_element);
    }
}
void display() {
    if (top == -1) {
        printf("The stack is empty!");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
int main(){
    int ch,a,b;
    while(1){
        printf("1.PUSH 2.POP 3. DISPLAY\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the number of the element to push(MAX is 10):");
                scanf("%d",&a);
                for(int i=0;i<a;i++){
                    push();
                }
                break;
            case 2:
                printf("Enter the number of the element to push:");
                scanf("%d",&b);
                for(int i=0;i<b;i++){
                    pop();
                }
                break;
            case 3:
                printf("The stack is:\n");
                display();
                break;
        }
    }
}