#include <stdio.h>
#include <conio.h>

int main ()
{
	char x=6,y=3; 

	printf ("%s %7s %18s %16s \n","x","y","expression","result");
	printf ("%d %3c %4d %4c %8s %11c %6s %d \n",x,'|', y,'|',"x=y+3",'|',"x=",y+3);
	printf ("%d %3c %4d %4c %8s %11c %6s %d \n",x,'|', y,'|',"x=y-2",'|',"x=",y-2);
	printf ("%d %3c %4d %4c %8s %11c %6s %d \n",x,'|', y,'|',"x=x*5",'|',"x=",y*5);
	printf ("%d %3c %4d %4c %8s %11c %6s %d \n",x,'|', y,'|',"x=x/y",'|',"x=",x/y);
	printf ("%d %3c %4d %4c %8s %11c %6s %d \n",x,'|', y,'|',"x=x%y",'|',"x=",x%y);
	
	return 0;
}
