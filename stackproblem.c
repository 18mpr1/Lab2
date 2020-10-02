// stackproblem.c –Lab 02 – Matt, Rieckenberg
#include <stdio.h>
#include <string.h>

#define	MAX_SIZE	80

// These defines are meant to be constant - do not change
#define	EMPTY_INDEX	-1
#define	MAX_INDEX	(STACK_SIZE - 1)


#define	RTN_ERROR	0
#define	RTN_OK		1


int  top = EMPTY_INDEX;
char  stack [MAX_SIZE];

int push ()
{
    char ch;
    if (top == MAX_SIZE)  return RTN_ERROR;

    printf("Enter characters: \n");
    while (1){
        scanf("%c",&ch);
        stack[++top] = ch;

        if (ch == '\n') break;
        /*

        else if(strlen(ch) >= 80) break;
        else continue;
         */
    }
    return  RTN_OK;
}//push()

void printStack(){
    int i;
    for (i=0;i<MAX_SIZE;i++){
        printf("%c",stack[i]);
    }
}

void reverseStack(){
    int i;
    for (i=MAX_SIZE;i>=0;i--){
        printf("%c",stack[i]);
    }

}

int main (void)
{
    push();
    printStack();
    reverseStack();
    return 0;
}//main()

