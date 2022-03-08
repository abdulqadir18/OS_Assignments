#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv)
{
  char *args1="./ques2.sh";
  execlp(args1, args1, args[1], args[2], NULL);
  printf("end\n");
}