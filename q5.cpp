#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;
int main(int argc,char* argv[])
{
        if(argc!=3)
        cout<<"Arguments Missing!!\n";
        
        int fd1,fd2,n;
        char buff[1024];
        fd1=open(argv[1],O_RDONLY);
        if(fd1==-1)
        cout<<"Error opening File\n";
        fd2=open(argv[2],O_CREAT|O_WRONLY);
        if(fd2==-1)
        cout<<"\nError opening File 2\n";
        while((n=read(fd1,buff,sizeof(buff)))!=0)
        {
                write(fd2,buff,n);
        }
        cout<<"File1 copied to File2 Successfully!!";
        
        
        return 0;
}
