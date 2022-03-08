#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>


int main(int argv , char* argc[])
{
pid_t p1 , p2 , p3;
p1=fork();
if(p1==0)
{
    printf("the pid of child is %d \n" , getpid());
    execvp("./ques3i.sh", argc);
}
else{
    wait(NULL);
    p2 = fork();
    if(p2==0)
    {
    printf("the pid of child is %d \n" , getpid());
    execvp("./ques3ii.sh", argc);
    }
    else{
        wait(NULL);
        p3 = fork();
        if(p3==0)
        {
             printf("the pid of child is %d \n" , getpid());
            execvp("./ques3iii.sh", argc);
        }

    }

      wait(NULL);
      printf("i m parent of the child with pid %d \n" , getpid());
}
return 0;
}
