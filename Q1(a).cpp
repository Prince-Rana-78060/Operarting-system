/*	
	Q1.a. Write a program using fork() where parent
	and child execute same program, same code
*/
#include<iostream>
#include<unistd.h>
#include<sys/types.h>		
using namespace std;

int main(){
	pid_t pid;
	pid=fork();
	if(pid<0)

        {
	cout<<"\nFORK FAILED !!";
	}

	else
       {
		cout<<"\nProcess executing...";
		cout<<"\nPID :"<<pid;
		cout<<"\ngetpid :"<<getpid();
		cout<<"\ngetppid :"<<getppid();
	}
	cout<<endl;
	return 0;
}