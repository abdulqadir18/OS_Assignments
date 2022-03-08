#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
 
int main()
{
    if (fork()== 0)
        printf("hello from child\n");
    else
    {
        printf("hello from parent\n");
        sleep(10);
        printf("child has terminated after 10sec\n");
    }
    return 0;
}