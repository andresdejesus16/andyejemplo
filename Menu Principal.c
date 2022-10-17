#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int opc,num1,num2,n,m,O,S,a,r;

int main()
{
	do{
	
	printf("Elige una opcion\n");
	
    printf("1- Ley de los exponentes \n");
    
    printf("2-Operaciones Basicas\n");
    
    printf("3-Salir\n");
    
    printf("Intruduce el numero de la opcion que deceas: ");
    
     scanf("%i",&opc);
     
      system("cls");
      
     switch (opc)
     
     {
    
    case 1: 
    
       printf("Multiplicación de bases iguales\n");
       
          printf("Ingresa el numero base \n");
          
            scanf("%i",&a);
            
          printf("Ingresa su primer exponente\n");
          
            scanf("%i",&m); 
            
          printf("Ingresa su segundo exponente\n");
          
            scanf("%i",&n);
            
            system("cls");
            
            r=pow(a,m)*pow(a,n);
            
          printf("%i",r);
          
        break;
        
     case 2:	
     
	 	do{
	 		
       printf("Elige una opcion\n");
       
       printf("1-Suma\n");
       
       printf("2-Resta\n");
       
       printf("3-Multiplicasion\n");
       
       printf("4-Divicion\n");
       
       printf("5-Regrsar al menu pricipal\n");
       
       printf("Intruduce el numero de la opcion que deceas: ");
       
            scanf("%i",&O);
            
              system("cls");
              
     switch (O)
     
     {
     	
    case 1:
    	
          printf("Introduce el primer numero\n");
          
            scanf("%i",&num1);
            
          printf("Introduce el segundo numero\n");
          
            scanf("%i",&num2); 
            
            system("cls");
            
          S=num1+num2;
          
          printf("%i+%i=%i",num1, num2 ,S);
          
              break;
              
     case 2:
     	
          printf("Introduce el primer numero\n");
          
            scanf("%i",&num1);
            
          printf("Introduce el segundo numero\n");
          
            scanf("%i",&num2); 
            
            system("cls");
            
          S=num1-num2;
          
          printf("%i-%i=%i",num1, num2 ,S);
          
              break;
              
     case 3:
     	
          printf("Introduce el primer numero\n");
          
            scanf("%i",&num1);
            
          printf("Introduce el segundo numero\n");
          
            scanf("%i",&num2); 
            
            system("cls");
            
          S=num1*num2;
          
          printf("%i*%i=%i",num1, num2 ,S); 
          
              break;
              
     case 4:
     	
          printf("Introduce el primer numero\n");
          
            scanf("%i",&num1);
            
          printf("Introduce el segundo numero\n");
          
            scanf("%i",&num2); 
            
            system("cls");
            
          S=num1/num2;
          
          printf("%i/%i=%i",num1, num2 ,S);
          
              break;
              
     case 5:
     	
          printf("Regresar a menu principal\n");
          
              break;
              
     default:
     	
     printf("La opcion que elegistes no existe\n");
     
        break;
        
     }
     
    printf("\n");
    
    system("pause");
    
    system("cls");
    
	}while(O!=5);
	
        break;
        
     case 3:
     	
     printf("3-salir\n");
     
        break;
        
     default:
     	
     printf("La opcion que elegistes no existe\n");
     
        break; 
        
     }
     
     printf("\n");
     
    system("pause");
    
    system("cls");
    
	}while(opc!=3);
	
    return 0;
}
