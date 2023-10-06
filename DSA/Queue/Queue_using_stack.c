#include<stdio.h>
# define N 5
int s1[N],s2[N];
int top1=-1,top2=-1,count=0;
int pop1();
int pop2();
void push2(int data);
void push1(int data);
void enqueue(int x){
    push1(x);
    count++;
}
void dequeue(){
    int i,a,b;
    if(top1==-1 && top2==-1){
        printf("Queue is empty\n");
    }else{
        for(i=0;i<count;i++){
            a=pop1();
            push2(a);
        }
        b=pop2();
        printf("dequeued element is %d\n",b);
        count--;
        for(i=0;i<count;i++){
            a=pop2();
            push1(a);
        }
    }
}
int pop1(){
    return s1[top1--];
}
int pop2(){
    return s2[top2--];
}
void push1(int data){
    if(top1==N-1){
        printf("queue is full\n");
    }else{
        top1++;
        s1[top1]=data;
    }
}
void push2(int data){
    if(top2== N-1){
        printf("Overflow condition\n");
    }else{
        top2++;
        s2[top2]=data;
    }
}
void display(){
    printf("Elements are: ");
    int i;
    for(i=0;i<count;i++){
        printf("%d ",s1[i]);
    }
    printf("\n");
}
void main(){
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    display();
    dequeue();
    display();
}