#include <stdio.h>
#include  <conio.h>
main()
{
int Cont1=0,Cont2=0;
char Oper;
	
	{
	printf("Ingrese el primer valor");
	scanf("%d",&Cont1);
	printf("Ingrese el Segundo valor");
	scanf("%d",&Cont2);
	printf("Digite >,<,=: ");
	/*scanf("%c",&Oper);*/
	Oper=getch();
	printf("%c \n",Oper);
	printf("\nLa preposicion es: %d %c %d\n",Cont1,Oper,Cont2);
	if(Oper=='<')
      if(Cont1<Cont2)
        printf("True\n");
	  else
	    printf("False\n");
	    
   if(Oper=='>')
        if(Cont1>Cont2)
          printf("True");
	  else
	      printf("False\n");
	      
   if(Oper=='=')
      if(Cont1==Cont2)
         printf("True\n");
	else
	   printf("False\n");
	
	}
	
	
	
getch();
return(0);
	
	
}
