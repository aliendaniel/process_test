#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    pid_t pid;
    if((pid=vfork())<0)
    {
        printf("fork error!!\n");
    }
    else if(pid==0)
    {
        printf("child proces is printing!!\n");
    }
    else
    {
        printf("parent process id printing!!\n");
    }
    exit(0);
}