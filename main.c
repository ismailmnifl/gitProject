#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// newb master
// youcode anas
//branch newB

// la fonction menu  qui permet a l'utilisateur de choisir 
int menu()
{			printf("=============================================\n");
	        printf("MENU\n");
	        printf("=============================================\n");
		    printf("1. les simple operation : + | - | x | / \n2. table de mutiplication d'un nombre\n3. autre operation \n4. finir\n");
return 0;
}
int main()
{	//les variable qui seront utiliser dans se programme+
    int op;
    float a, b, res, c;
    int selection, i;
// la boucle while va nous va nous permetre de afficher la menu plusieurs fois
    while (1)
    {
        menu();
        printf("\nvotre choix : ");

        scanf("%d", &selection);

	// cette partie du code et responsable au traitement 
        switch (selection) {
            case 1:
           
                printf("\ndonner la valeur de A : ");
                scanf("%f",&a);
                printf("donner la valeur de B : ");
                scanf("%f",&b);
               
                //ce nemu affiche les different simple operation + et - et x et /
                printf("\n1. pour l'addition\n2. soustraction\n3. division\n4. multiplication\n\nVotre choix :");
                scanf("%d",&op);

					switch(op)
					{
						case 1 :
							res = a+b;
							printf("\nle resultat %.2f\n",res);
							break;
						case 2 :
							res = a-b;
							printf("le resultat %.2f\n",res);

							break;
						case 3:
							res = a/b;
							printf("le resultat %.2f\n",res);

							
							break;
						case 4 :
							res = a*b;
							printf("le resultat : %.2f\n",res);

							break;
							
						default:
               				 printf(" selection n'exist pas\n");
                		break;
                	
					}
					break;
//                if(op == 1)
//                {
//                    res = a+b;
//
//                }
//				else if(op ==2)
//                {
//                    res = a-b;
//
//                }
//				else if(op == 3)
//                {
//                    res = a/b;
//                }
//				else if(op == 4)
//                {
//                    res = a*b;
//                }
//				else 
//				{
//                	printf("\nmauvais chois !\n");
//                	break;
//				}
//                printf("\nle resultat : %f\n",res);
                
            case 2:
              
                printf("\ndonner la valeur de A : ");
                scanf("%f",&a);
                for(i = 0 ; i<=10;i++)
                {res = a*i;
                	printf("%.2f x %d = %.2f\n",a,i,res);
				}
                break;
            case 3:
                printf("\n1. la puissance d'un nombre\n2. racine carre \n3. comparaison entre deux nombres\n4. comparaison entre trois nombres\n");
                scanf("%d",&op);
                if(op == 1)
                {
                	printf("\ndonner un nombre : ");
                	scanf("%f",&a);
                	printf("donner la puissance : ");
                	scanf("%f",&b);
                	res = pow(a,b);
                	printf("\nle resultat : %f ^ %f = %f\n",a,b,res);
                	break;

				}
				else if(op == 2)
				{
					printf("\ndonner un nombre : ");
                	scanf("%f",&a);
                	res = sqrtf(a);
                	printf("le racine carré de %f : %f\n",a,res);

				}else if(op == 3)
				{
					printf("donner la valeur de A : ");
	                scanf("%f",&a);
	                printf("donner la valeur de B : ");
	                scanf("%f",&b);
	                if (a>b)
					{
	                	printf("la valeur la plus grand : %f\n",a);	
					}else
					{
						printf("la valeur la plus grand : %f\n",b);
					}

				}else if (op ==4)
				{
					printf("donner la valeur de A : ");
	                scanf("%f",&a);
	                printf("donner la valeur de B : ");
	                scanf("%f",&b);
	                printf("donner la valeur de C : ");
	                scanf("%f",&c);
	                
	                if (a>b && a>c)
					{
	                	printf("la valeur la plus grand : %f\n",a);	
					}else if(b>a && b>c)
					{
						printf("la valeur la plus grand : %f\n",b);
					}else 
					{
						printf("la valeur la plus grand : %f\n",c);

					}
				}
                break;
            case 4:
                	system("pause");
                break;
            default:
                printf(" selection n'exist pas\n");
              
                break;
        }
       // selection = 100;

      } 
    return 0;
}



