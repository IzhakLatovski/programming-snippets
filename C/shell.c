#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 100

int main(void)
{
    close(2);
    dup(1);
    char command[BUFFER_SIZE];
    char* token;
    char* argv[16];
    int i;
    pid_t pid;
    int flag;
    
    while (1)
    {
    	i=0;
    	flag=0;
        fprintf(stdout, "my-shell> ");
        memset(command, 0, BUFFER_SIZE);
        fgets(command, BUFFER_SIZE, stdin);
        command[strcspn(command, "\n")] = 0;
        if(strncmp(command, "exit", 4) == 0)
        {
            break;
        }

        token=strtok(command," ");
        while(token!=NULL) {
        	argv[i++]=token;
        	token=strtok(NULL," ");
        }
        if(*argv[i-1]=='&') {
        	flag=1;
        	argv[i-1]='\0';
        } else {
        	argv[i]='\0';
        }

        pid=fork();
        if(pid<0) {
        	printf("Error forking!\n");
        }else if(pid==0) {
        	execvp(argv[0],argv);
        } else {
        	if(flag==0) {
        		while(wait(NULL)>0) {
        			;
        		}
        	}
        }
    }

    return 0;
}
