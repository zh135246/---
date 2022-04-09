#include<stdio.h>

void fun(int n)

{

  /*******begin********/ 
if(n)
{
	fun(n-1);
	printf("%d ",n);
}
return;







 /********end*********/

}

int main()

{

    int n;

    scanf("%d",&n);

    fun(n);

    return 0;   

}


