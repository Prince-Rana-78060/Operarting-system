/*	
	Q1.b. Write a program using fork() where parent
	and child execute same program, different code
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
		cout<<"\n~~~~~PARENT EXECUTING~~~~~";
		cout<<"\nParent pid :"<<pid;
		cout<<"\nParent getpid :"<<getpid();
		cout<<"\nParent getppid :"<<getppid();
		cout<<"\n~~~~~PARENT EXECUTED~~~~~";
	}
	cout<<endl;
	return 0;
}
/* OUTPUT
~~~~~PARENT EXECUTING~~~~~
Parent pid :6021
Parent getpid :6020
Parent getppid :5963
~~~~~PARENT EXECUTED~~~~~
~~~~~CHILD EXECUTING~~~~~
Child pid :0
Child getpid :6021
Child getppid :6020
~~~~~CHILD EXECUTED~~~~~

*/
