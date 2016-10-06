#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    pid_t pid;
    if ((pid=fork())<0)
    {
        printf("fork errpr!\n");
        exit(1);
    }
    else if(pid==0)
    {
        printf("child process is printing.\n");
    }
    else
    {
        printf("parent process is priting.\n");
    }
exit(0);
}