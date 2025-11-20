#include<stdio.h>
void myfunction();
void motherfunction();
int main()
{
	myfunction();
	return 0;
}
    void myfunction()
    {
    	printf("welcome to c programming\n");
    	motherfunction();
	}
	    void motherfunction()
	    {
	    	printf("hello world");
		}
