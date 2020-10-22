/*	
	Q1.c. Write a program using fork() where parent
	before terminating waits for child to finish the task
*/

#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>	
using namespace std;

int main()
	{
	pid_t pid;
	pid=fork();
	if(pid<0)
	{
		cout<<"\nFORK FAILED !!";
	}

	else if(pid==0)
	{
		cout<<"\n~~~~~CHILD EXECUTING~~~~~";
		cout<<"\nChild pid :"<<pid;
		cout<<"\nChild getpid :"<<getpid();
		cout<<"\nChild getppid :"<<getppid();
		cout<<"\n~~~~~CHILD EXECUTED~~~~~";
	}

	else
	{
		wait(NULL);
		cout<<"\n~~~~~PARENT EXECUTING~~~~~";
		cout<<"\nParent pid :"<<pid;
		cout<<"\nParent getpid :"<<getpid();
		cout<<"\nParent getppid :"<<getppid();
		cout<<"\n~~~~~PARENT EXECUTED~~~~~";
	}
	cout<<endl;
	return 0;
}