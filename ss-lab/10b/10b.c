#include<stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
pid_t pid;
if ((pid=fork())< 0)
{
printf("Fork error");
}
else if( pid==0)
{
printf("first child pid=%d\n", getpid());

if((pid=fork())< 0)
printf("Fork error");
else if( pid > 0)
exit(0);
sleep(5);
printf("second child pid = %d\n parent pid=%d\n", getpid(), getppid());
exit (0);
}
}
