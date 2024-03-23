#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1)
        return 1;
    else 
        return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1)
        return 1;
    else 
        return 0;
}
void push (int value , struct stack *ptr){
    if(isfull(ptr)){
        printf("\nStack Overflow!");
    }
    else{
        ptr->arr[ptr->top]= value;
        ptr->top++;
    }
}
int pop (struct stack *ptr){
    if(isempty(ptr)){
        return -1; // considering the -1 value is not in stack 
    }
    else{
        ptr->top--;
        return ptr->arr[ptr->top+1];
    }
}
int main(){
    struct stack *val = (struct stack *) malloc(sizeof(struct stack));
    val->size = 5;
    val->top = -1;
    val->arr = malloc(val->size * sizeof(int));
    printf("Stack implemented successfully");
    printf("\nstack is full = %d",isfull(val));
    printf("\nstack is empty = %d",isempty(val));

    push(1,val);
    pop(val);

    printf("\nstack is full = %d",isfull(val));
    printf("\nstack is empty = %d",isempty(val));
    // preventing memory leakage
    free(val->arr);
    free(val);
    return 0;
}