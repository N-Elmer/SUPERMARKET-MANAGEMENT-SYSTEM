#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<dos.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct stock
{
    char nom[50];     
	int  serie,prix,quantite,matricule;
}
 
s[10]; 

struct caisse
{
    char nom_B[50];     
	int  serie_B,quantite_B,prix_B,matricule_B;
}

k[10];

char nom [20];
char prenom [20];
char nom_du_produit [20];
char matricule[10];
char matricule_B[10];

int i,j,poste,tstock,tstock_B,stock,caisse,option,sortir,decision,decision_B,calcule,
    sortir_stock1,sortir_stock_B,quantite,quantite_B,prix,prix_B,gain,pertes,ravitailler,total,EXIT,MENU,choisir_z;
    
char choice, choice2;

float addition=0, sum=0, subtraction=0, sub=0, multiplication=1, multi=1, division=1, dvs=1, square=0;

double logx, resultlog, sinx, resultsin, cosx, resultcos, tanx, resulttan, rootx, resultroot, expx, resultexp;

double fact, factorial, resultfact=1;	

double total_A,total_B,p,m;

int WINAPI
WinMain(HINSTANCE hInst,
HINSTANCE hPrevInstance,
LPSTR lpCmdLine,
int nCmdShow)
  
{
    MessageBox (NULL, "BIENVENU VEILLEZ PATIENTEZ, PENDENT QUE LE PROGRAMME CHARGE",
    "GENIE-CALCUL", MB_OK);
    Beep(5000,200);
    {
    	system ("color 8B");
        Sleep(1000);
        printf("************************************************************************");
        Sleep(1000);
        printf("BIENVENU DANS GENI-CALCUL");
        Sleep(1000);
        printf("*********************************************************************** \n");
        Sleep(1000);
        printf("************************************************************************");
        Sleep(1000);
        printf("BIENVENU DANS GENI-CALCUL");
        Sleep(1000);
        printf("*********************************************************************** \n");
        Sleep(1000);
        printf("*"); 
        Sleep(1000); //ALWAYS REMEMBER TO START SLEEP COMMAND WITH A CAPITAL "S" AND NOT WITH small "s"
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1500);
        printf("CHARGEMENT");
        Sleep(1500);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("\n");
        printf("*"); 
        Sleep(1000); //ALWAYS REMEMBER TO START SLEEP COMMAND WITH A CAPITAL "S" AND NOT WITH small "s"
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1500);
        printf("CHARGEMENT");
        Sleep(1500);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("*");
        Sleep(1000);
        printf("\n");
        
        printf("\nDEBUT DE SESSION DU\n");
        printf("Date  :%s\n", __DATE__ );
        printf("A\n");
        printf("HEURE :%s\n\n", __TIME__ ); 
    
        MessageBox (NULL, "CHERE EMPLOYEE LISEZ ATTENTIVEMENT LES INSTRUCTIONS SUIVANTS",
        "GENIE-CALCUL", MB_OK);
        Beep(5000,200);
    
        y1:y2:y3:y4:y5:y6:y7:y8: MessageBox (NULL, "-CHERE EMPLOYEE ECRIVEZ VOTRE NOM ET \n-APPUYER SUR ENTRER\n",
        "GENIE-CALCUL", MB_OK);
        Beep(5000,200);   //beep starts with capital letter (B)
        scanf("%s",nom);
        Beep(5000,200);
    
        MessageBox (NULL, "-CHERE EMPLOYEE ECRIVEZ VOTRE PRENOM ET \n-APPUYER SUR ENTRER\n",
        "GENIE-CALCUL", MB_OK);
        Beep(5000,200);
        scanf("%s",prenom);
        Beep(5000,200);
    
        Beep(1000,300);
		Beep(1000,300); 
        printf("-%s %s, ETES VOUS SUR DE CE NOM; OUI=1 NON=2 \n",nom,prenom);
        Beep(5000,200);
        scanf("%d",&decision);
        Beep(5000,200);
    
        while(decision<1 || decision>2)
       {
	   	  Beep(1000,300);
	   	  Beep(1000,300);
    	  MessageBox (NULL, "ERREUR DE SYNTAX, TAPEZ 1 OU 2 SELON L'OPTION \n",
          "ERREUR", MB_OK);
          Beep(5000,200);
          scanf("%d",&decision);
          Beep(5000,200);
       }
       {
  	     if (decision==1)
  	     goto H;
	     else
	     if (decision==2) 
	     goto I; 
       }
  
       I:MessageBox (NULL, "1- POUR LA DERNIER FOIS, ECRIVEZ LE NOM \n2- APPUYEZ SUR LA TOUCHE ESPACE ET ECRIVEZ LE PRENOM ENSUITE \n3- APPUYEZ SUR LA TOUCHE ENTRER \n",
       "CORRECTION DU NOM", MB_OK);
       Beep(5000,200);
       scanf("%s %s",&nom,prenom);
       Beep(5000,200);
   
       MessageBox (NULL, "-APPUYER SUR 1, PUIS SUR LA TOUCHE ENTRER POUR VALIDER \n",
       "GENIE-CALCUL", MB_OK);
       Beep(5000,200);
       scanf("%d",&decision);
       Beep(5000,200);
   
       while(decision<1 || decision>1)
       {
       	  Beep(1000,300);
       	  Beep(1000,300);
    	  MessageBox (NULL, "ERREUR DE SYNTAX, APPUYER UNIQUEMENT SUR 1\n",
          "ERREUR", MB_OK);
          Beep(5000,200);
          scanf("%d",&decision);
          Beep(5000,200);
       }
   
       {
    	 if (decision==1)
  	     goto H;
       }
   } 
   printf("BIENVENU %s %s AU MENU PRINCIPAL DU LOGICIEL GENI-CALCUL \n",nom,prenom);
   
   E:E1:E2:E3:m6:m66:n5:  MessageBox (NULL, "VOUS ETES DANS LE MENU PRINCIPAL DE GENIE-CALCUL\n",
   "MENU PRINCIPAL", MB_OK);
   Beep(5000,200);
   
   H: MessageBox (NULL, "1- SI VOUS VOULEZ GERER LE STOCK TAPEZ 1 \n2-SI VOUS VOULEZ GERER LA CAISSE TAPEZ 2 \n3-SI VOUS VOULEZ CHANGER DE PROFIL TAPEZ 3 \n",
   "MENU PRINCIPAL", MB_OK);
   Beep(5000,200);
   
   printf("-M./Mme.:- %s %s QUE SOUHAITEZ VOUS FAIRE \n",nom,prenom);
   scanf("%d",&poste);
   Beep(5000,200);
  
   while(poste<1 || poste>3)
   {
   	 Beep(1000,300);
   	 Beep(1000,300);
  	 MessageBox (NULL, "ERREUR DE SYNTAXE, TAPPEZ UNE DES VALEURS DONEE\n",
     "ERREUR", MB_OK);
     Beep(5000,200);
     printf("ERREUR, M./Mme.:- %s %s TAPEZ 1, 2 OU 3 SELON VOTRE SOUHAIT \n",nom,prenom);
     scanf("%d",&poste);
     Beep(5000,200);
   }
   {
   	 if(poste==1)
     {
     	 j:j1: MessageBox (NULL, "1- TAPEZ LE PIN D'ADMINISTRATION POUR ENTRER UN NOUVEAU STOCK \n-OU \n2- TAPEZ LE PIN D'ADMINISTRATION POUR VOIR LE STOCK EXISTANT\n",
         "GENIE-CALCUL", MB_OK);
         Beep(5000,300);
         printf("M./Mme. : %s VEULLIEZ ENTRER LE PIN \n",nom,prenom);
         scanf("%d",&stock);
         Beep(5000,200);
         {
         	 {
         	 	 if(stock==123) goto A;
	             else 
	             if(stock==456) goto B; 
	             else 
	             goto C;
	         }
	         C: for(i=0;i<2;i++)
             {
             	Beep(1000,300);
             	Beep(1000,300);
             	 MessageBox (NULL, "ERREUR FATAL, ENTRER LE BON PIN\n",
                 "ERREUR", MB_OK);
                Beep(5000,200);
                 
                 Beep(1000,300);
                 Beep(1000,300);
                 MessageBox (NULL, "ATTENTION VOUS N'AVEZ QU'UNE TENTATIVE RESTANT\n",
                 "ATTENTION", MB_OK);
                 Beep(5000,200);
             
	             printf("-M./Mme.:- %s %s VEULLIEZ RE-ESSAIYEZ LE PIN\n",nom,prenom); 
	             scanf("%d",&stock);
	             Beep(5000,200);
	             if(stock==789)
	             goto A1;
	             else
	             if(stock==101112)
	             goto B1;
	             else
	             goto D;
	         }
         }
     }
     else 
     if(poste==2)
     {
       {
     	 n4:m5:m55: MessageBox (NULL, "1- TAPEZ LE PIN D'ADMINISTRATION POUR VOIRE LE STOCK EXISTANT \n2- TAPEZ LE PIN D'ADMINISTRATION POUR ENREGISTRER LES VENTES \n3- TAPEZ 3 POUR UTILISER LA CALCULATRICE \n",
         "GENIE-CALCUL", MB_OK);
         Beep(5000,200);
         printf("M./Mme. : %s VEULLIEZ ENTRER LE PIN \n",nom,prenom);
         scanf("%d",&caisse);
         Beep(5000,200);
	   }
	   {
         if(caisse==131415) 
		 goto k1;
	     else 
	     if(caisse==161718) 
		 goto l1; 
	     else 
	     if(caisse==3)
		 goto k3;
		 else
		 goto c1; 
	   }
	   c1: for(i=0;i<2;i++)
       {
       	Beep(1000,300);
       	Beep(1000,300);
         MessageBox (NULL, "ERREUR FATAL, ENTRER LE BON PIN\n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         
		 Beep(1000,300);
		 Beep(1000,300);    
         MessageBox (NULL, "ATTENTION VOUS N'AVEZ QU'UNE TENTATIVE RESTANT\n",
         "ATTENTION", MB_OK);
         Beep(5000,200);
             
	     printf("-M./Mme.:- %s %s VEULLIEZ RE-ESSAIYEZ LE PIN\n",nom,prenom); 
	     scanf("%d",&caisse);
	     Beep(5000,200);
	     if(caisse==192021) 
		 goto kk1;
	     else 
	     if(caisse==222324) 
		 goto ll1; 
	     else 
	     if(caisse==252627)
		 goto kk3;
		 else
		 goto D1; 
	   }  	
	 }
	 else
	 if(poste==3)
	 {
	 	goto y1;
	 }
	 printf("\n");
   }
    
    Beep(1000,300);
    Beep(1000,300);
	D:D1: MessageBox (NULL, "DESOLE VOUS N'AVEZ PAS LE PRIVILEGE D'AVOIR ACCES A CES DONNEES \n",
    "GENIE-CALCUL", MB_OK);
    Beep(5000,200);
	  
    printf("-DESOLE M./Mme.:- %s %s  \n ",nom,prenom);
    
    MessageBox (NULL, "1- APPUYEZ SUR 1 POUR ACCEDER AU MENU PRINCIPAL \n2- APPUYEZ SUR 2 POUR SORTIR \n3- APPUYEZ SUR 3 POUR CHANGER DE PROFIL \n",
    "GENIE-CALCUL", MB_OK);
    Beep(5000,200);
    scanf("%d",&option);
    Beep(5000,200);
    
    while(option<1 || option>3)
	{
		Beep(1000,300);
		Beep(1000,300);
		 MessageBox (NULL, "ERREUR DE SYNTAXE, TAPEZ 1, 2 OU 3 SELON LES OPTIONS DONNEES \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s ESSAIYEZ ENCORE ",nom,prenom);
         scanf("%d",&option);
         Beep(5000,200);
	}
    {
     	 if (option==1)
         goto E;
         else 
         if (option==2)
         goto F;
         else
         if (option==3)
         goto y2;
    }
  
     int i,tstock;
    
	 {
	 	A2:A3: MessageBox (NULL, "\nENTRER LES INFORMATIONS SUIVANTS SUR LE STOCK: \n",
         "INFORMATIONS SUR STOCK", MB_OK);
         Beep(5000,200);
	 }   // storing information
	 
	 A:A1: {MessageBox (NULL, "ENTRER LE NOMBRE TOTAL DU STOCK \n",
     "STOCK TOTAL", MB_OK);}
     Beep(5000,200);
     printf("M./Mme. : %s %s STOCK TOTAL \n",nom,prenom);
     scanf("%d",&tstock);
     Beep(5000,200);
         
	 while(tstock<0)
    {
    	Beep(1000,300);
    	Beep(1000,300);
     	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&tstock);
         Beep(5000,200);
	}           
	 
	for(i=0;i<tstock;i++)     
	{
		 s[i].serie = i+1;
		 printf("\nNUMERO DE SERIE: %d,\n",s[i].serie);
		           
		 MessageBox (NULL, "ECRIVER LE NOM DE L'ARTICLE \n",
         "NOM ARTICLE", MB_OK);
         Beep(5000,200);
		 scanf("%s",s[i].nom);
		 Beep(5000,200);
		 
		 MessageBox (NULL, "ENTRER LE MATRICULE EN CHIFFRE SEULEMENT \n",
         "MATRICULE", MB_OK);
		 Beep(5000,200);         
		 scanf("%d",&s[i].matricule);
		 Beep(5000,200);
		 while(matricule<0)
         {
         	Beep(1000,300);
         	Beep(1000,300);
         	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
             printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
             scanf("%d",&matricule);
             Beep(5000,200);
		 }
		           
		 MessageBox (NULL, "ENTRER SA QUANTITE \n",
         "QUANTITE ARTICLE", MB_OK);
		 Beep(5000,200);         
		 scanf("%d",&s[i].quantite);
		 Beep(5000,200);
		 {
		 while(quantite<0)
         {
         	Beep(1000,300);
         	Beep(1000,300);
         	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
             printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
             scanf("%d",&s[i].quantite);
             Beep(5000,200);
		 }
		 if(s[i].quantite<=9)
		 {
		 	 Beep(1000,300);
         	 Beep(1000,300);
		 	 MessageBox (NULL, "IL MANQUE MOINS DE 10 EXAMPLAIRE DE CE PRODUIT RACHETER POUR EVITER DE TOMBER EN MANQUE \n",
             "QUANTITE ARTICLE", MB_OK);
		     Beep(5000,200);
			 printf("PENSER A RACHETER CE PRODUIT \n");         
		     Beep(5000,200);
		     goto z1;
		 }
	     }
		 
		 z1: MessageBox (NULL, "ENTRER SON PRIX UNITAIRE \n",
         "PRIX ARTICLE", MB_OK);
         Beep(5000,200);
         printf("PRIX \n");
		 scanf("%d",&s[i].prix);
		 Beep(5000,200);
		 while(prix<0)
         {
         	Beep(1000,300);
         	Beep(1000,300);
         	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
             printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
             scanf("%d",&prix);
             Beep(5000,200);
		 }
		 printf("\n");
    }
     
	 MessageBox (NULL, "1-TAPEZ SUR 1 POUR VOIRE LE STOCK \n2-SUR 2 POUR ENTRER UN NOUVEAU STOCK \n3-SUR 3 POUR LE MENU PRINCIPAL \n4-SUR 4 POUR SORTIR \n5-SUR 5 POUR CHANGER DE PROFIL \n",
     "OPTION", MB_OK);
     Beep(5000,200);
     scanf("%d",&sortir_stock1);
     Beep(5000,200);
     
     while(sortir_stock1<1 || sortir_stock1>5)
     {
     	Beep(1000,300);
     	Beep(1000,300);
     	 MessageBox (NULL, "ERREUR DE SYNTAXE, TAPEZ DE 1, 2, 3, 4 OU 5 SELON LES OPTIONS DONNEES \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&sortir_stock1);
         Beep(5000,200);
	 }
   {
   	 if(sortir_stock1==1)
	 goto B2;
	 else
	 if(sortir_stock1==2)
	 goto A2;
	 else
	 if(sortir_stock1==3)
	 goto E2; 
	 else
	 if(sortir_stock1==4)
	 goto F1;
	 else
	 if(sortir_stock1==5)
	 goto y3;
   }
	
   B:B1:B2:k1:kk1:m3:m33:n3: {MessageBox (NULL, "STOCK DISPONIBLE \n",
   "DISPONIBILITE", MB_OK);}
   Beep(5000,200); // displaying information
       
   for(i=0;i<tstock;i++)     
   {      
		printf("\nNUMERO DE SERIE: %d\n",i+1);         
		printf("NOM DU PRODUIT: ");         
		puts(s[i].nom);         
		printf("MATRICULE: %d QUANTITE: %d PRIX UNITAIRE(FCFA): %d\n",s[i].matricule,s[i].quantite,s[i].prix); 
   }	
   printf("\n");
   
   {
		
		{
			 MessageBox (NULL, "\n1-TAPPEZ 1 POUR ENTRER UN NOUVEAU STOCK \n2- 2 POUR LE MENU PRECEDENT \n3- 3 POUR LE MENU PRINCIPAL \n4- 4 POUR SORTIR \n5- 5 POUR CHANGER DE PROFIL\n",
             "OPTION", MB_OK);
             Beep(5000,200);
             scanf("%d",&sortir_stock1);
             Beep(5000,200);
             while(sortir_stock1<1 || sortir_stock1>5)
            {
            	Beep(1000,300);
            	Beep(1000,300);
            	MessageBox (NULL, "ERREUR DE SYNTAXE, TAPEZ DE 1, 2, 3, 4 OU 5 SELON LES OPTIONS DONNEES \n",
                "ERREUR", MB_OK);
                Beep(5000,200);
                printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
                scanf("%d",&sortir_stock1);
                Beep(5000,200);
			}
        }
        {
        	 if(sortir_stock1==1)
	         goto A3;
	         else
	         if(sortir_stock1==2)
	         goto j1;
	         else
	         if(sortir_stock1==3)
	         goto E3; 
	         else
	         if(sortir_stock1==4)
	         goto F3;
	         else
	         if(sortir_stock1==5)
	         goto y4;
        }
    }
    
	 int j,caisse;
    
	 {
	 	m2:m22:n2: MessageBox (NULL, "\nENTRER LES INFORMATIONS SUIVANTS SUR LES VENTES: \n",
         "INFORMATIONS SUR LES VENTES", MB_OK);
         Beep(5000,200);
	 }   // storing information
	 
	 l1:ll1: {MessageBox (NULL, "ENTRER LE NOMBRE TOTAL DE VENTES EFFECTUE \n",
     "VENTE TOTAL", MB_OK);}
     Beep(5000,200);
     printf("M./Mme. : %s %s VENTE TOTALE \n",nom,prenom);
     scanf("%d",&caisse);
     Beep(5000,200);
         
	 while(caisse<0)
     {
     	Beep(1000,300);
     	Beep(1000,300);
     	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&caisse);
         Beep(5000,200);
	 }
	 
    {
	     for(j=0;j<caisse;j++)     
	   {
		 k[j].serie_B = j+1;
		 printf("\nNUMERO DE SERIE: %d,\n",k[j].serie_B);
		           
		 MessageBox (NULL, "ECRIVER LE NOM DE L'ARTICLE \n",
         "NOM ARTICLE", MB_OK);
         Beep(5000,200);
		 scanf("%s",k[j].nom_B);
		 Beep(5000,200);
		 
		 MessageBox (NULL, "ENTRER LE MATRICULE EN CHIFFRE SEULEMENT \n",
         "MATRICULE", MB_OK);
		 Beep(5000,200);         
		 scanf("%d",&k[j].matricule_B);
		 Beep(5000,200);
		 {
		 if(matricule_B<0)
         {
         	Beep(1000,300);
         	Beep(1000,300);
         	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
             printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
             scanf("%d",&matricule_B);
             Beep(5000,200);
             while(matricule_B<0)
             {
             	 Beep(1000,300);
         	     Beep(1000,300);
         	     MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
                 "ERREUR", MB_OK);
                 Beep(5000,200);
                 printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
                 scanf("%d",&matricule_B);
                 Beep(5000,200);
			 }
		 }
		 else
		 if(s[i].matricule<k[j].matricule_B && s[i].matricule>k[j].matricule_B)
		 {
		     Beep(1000,300);
         	 Beep(1000,300);
         	 MessageBox (NULL, "ERREUR LOGIQUE, CE MATRICULE NE CORRESPOND PAS A CETTE ARTICLE \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
			 {
			 	x22: printf("-M./Mme.:- %s %s VEULLIEZ RE-ESSAIYEZ\n",nom,prenom); 
	             scanf("%d",&matricule_B);
	             Beep(5000,200);
	             
	             Beep(1000,300);
                 Beep(1000,300);
                 MessageBox (NULL, "ETES VOUS SUR DE CE MATRICULE? OUI=1, NON=2\n",
                 "ATTENTION", MB_OK);
                 Beep(5000,200);
                 
                 printf("-M./Mme.:- %s %s OUI=1, NON=2\n",nom,prenom); 
	             scanf("%d",&decision_B);
	             Beep(5000,200);
	             while(decision_B<1 || decision_B>2)
	             {
	             	 Beep(1000,300);
                     Beep(1000,300);
                     MessageBox (NULL, "ENTRER 1 OU 2 SELON LES OPTIONS\n",
                     "ATTENTION", MB_OK);
                     Beep(5000,200);
                     scanf("%d",&decision_B);
				 }
				 
			     {
				 if(decision_B==1)
				 goto x11;
				 else
				 if(decision_B==2)
				 goto x22;
			     }
			 }	
		 }
	     }
	   {           
		 x11:x1:x5: MessageBox (NULL, "ENTRER LA QUANTITE VENDU \n",
         "QUANTITE VENDU", MB_OK);
		 Beep(5000,200);         
		 scanf("%d",&k[j].quantite_B);
		 Beep(5000,200);
		 
		 if(quantite_B<0)
		 {
         	 Beep(1000,300);
         	 Beep(1000,300);
         	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
             printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
             scanf("%d",&quantite_B);
             Beep(5000,200);
             while(quantite_B<0)
             {
             	 Beep(1000,300);
         	     Beep(1000,300);
         	     MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
                 "ERREUR", MB_OK);
                 Beep(5000,200);
                 printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
                 scanf("%d",&quantite_B);
                 Beep(5000,200);
			 }
         }
         else
         {
         	if(quantite_B>s[i].quantite)
		   {   
             {
	             Beep(1000,300);
                 Beep(1000,300);
                 MessageBox (NULL, "ETES VOUS SUR DE CETTE QUANTITE? OUI=1, NON=2\n",
                 "ATTENTION", MB_OK);
                 Beep(5000,200);
                 
                 printf("-M./Mme.:- %s %s OUI=1, NON=2\n",nom,prenom); 
	             scanf("%d",&decision_B);
	             Beep(5000,200);
	             while(decision_B<1 || decision_B>2)
	             {
	             	 Beep(1000,300);
                     Beep(1000,300);
                     MessageBox (NULL, "ENTRER 1 OU 2 SELON LES OPTIONS\n",
                     "ATTENTION", MB_OK);
                     Beep(5000,200);
                     scanf("%d",&decision_B);
				 }
				 
			     {
				 if(decision_B==1)
				 goto x1;
				 else
				 if(decision_B==2)
				 goto x2;
			     }
	         }
		   }
	     }
	      MessageBox (NULL, "ENTRER LE PRIX VENDU \n",
         "QUANTITE ARTICLE", MB_OK);
		 Beep(5000,200);
		 printf("PRIX VENDU \n");         
		 scanf("%d",&k[j].prix_B);
		 Beep(5000,200);
		 {
		 if(quantite_B<0)
		 {
         	 Beep(1000,300);
         	 Beep(1000,300);
         	 MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
             "ERREUR", MB_OK);
             Beep(5000,200);
             printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
             scanf("%d",&prix_B);
             Beep(5000,200);
             while(quantite_B<0)
             {
             	 Beep(1000,300);
         	     Beep(1000,300);
         	     MessageBox (NULL, "ERREUR DE SYNTAXE, ENTRER UN NOMBRE POSITIF \n",
                 "ERREUR", MB_OK);
                 Beep(5000,200);
                 printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
                 scanf("%d",&prix_B);
                 Beep(5000,200);
			 }
	      }
	    }
	  }
	}
   } 
    
	 x2:MessageBox (NULL, "1-TAPEZ SUR 1 POUR VOIR LES STATISTIQUES DE VENTE \n2-SUR 2 POUR ENTRER UNE NOUVELLE VENTE \n3-SUR 3 POUR VOIRE LE STOCK \n4-SUR 4 POUR UTILISER LA CALCULATRICE \n5-SUR 5 POUR LE MENU PRECEDENT \n6-SUR 6 POUR LE MENU PRINCIPAL \n7-SUR 7 POUR SORTIR \n8- SUR 8 POUR CHANGER DE PROFIL \n",
     "OPTION", MB_OK);
     Beep(5000,200);
     scanf("%d",&sortir_stock_B);
     Beep(5000,200);
     
     while(sortir_stock_B<1 || sortir_stock_B>8)
     {
     	Beep(1000,300);
     	Beep(1000,300);
     	 MessageBox (NULL, "ERREUR DE SYNTAXE, TAPEZ DE 1, 2, 3, 4, 5, 6, 7, OU 8 SELON LES OPTIONS DONNEES \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&sortir_stock_B);
         Beep(5000,200);
	 }
   {
   	 if(sortir_stock_B==1)
	 goto m1;
	 else
	 if(sortir_stock_B==2)
	 goto m2;
	 else
	 if(sortir_stock_B==3)
	 goto m3; 
	 else
	 if(sortir_stock_B==4)
	 goto m4;
	 else
	 if(sortir_stock_B==5) 
	 goto m5;
	 else
	 if(sortir_stock_B==6)
	 goto m6;
	 else
	 if(sortir_stock_B==7)
	 goto m7;
	 else
	 if(sortir_stock_B==8)
	 goto y5;
   }
   
     m1:m11:n1: {MessageBox (NULL, "STATISTIQUES DE VENTES \n",
     "VENTES", MB_OK);}
     Beep(5000,200);
    
    for(j=0;j<caisse;j++)     
   {     
		printf("\nNUMERO DE SERIE: %d\n",j+1);         
		printf("NOM DU PRODUIT: ");         
		puts(k[j].nom_B);         
		printf("MATRICULE: %d QUANTITE VENDU: %d PRIX VENDU(FCFA): %d\n",k[j].matricule_B,k[j].quantite_B,k[j].prix_B);
		if(s[i].quantite<=9)
		 {
		 	 Beep(1000,300);
         	 Beep(1000,300);
		 	 MessageBox (NULL, "ATTENTION AUGMENTER CE STOCK \n",
             "ATTENTION", MB_OK);
		     Beep(5000,200);
			 printf("ATTENTION LE STOCK %s EST PRESQUE EPUISE \n",s[i].nom); 
		 }      
   }
  
   	 MessageBox (NULL, "1-TAPEZ SUR 1 POUR VOIR LES STATISTIQUES DE VENTE \n2-SUR 2 POUR ENTRER UNE NOUVELLE VENTE \n3-SUR 3 POUR VOIR LE STOCK \n4-SUR POUR UTILISER LA CALCULATRICE \n5-SUR 5 POUR LE MENU PRECEDENT \n6-SUR 6 POUR LE MENU PRINCIPAL \n7-SUR 7 POUR SORTIR \n8-SUR 8 POUR CHANGER DE PRIFIL \n",
     "OPTION", MB_OK);
     Beep(5000,200);
     scanf("%d",&sortir_stock_B);
     Beep(5000,200);
     
     while(sortir_stock_B<1 || sortir_stock_B>8)
     {
     	Beep(1000,300);
     	Beep(1000,300);
     	 MessageBox (NULL, "ERREUR DE SYNTAXE, TAPEZ DE 1, 2, 3, 4, 5, 6, 7 OU 8 SELON LES OPTIONS DONNEES \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&sortir_stock_B);
         Beep(5000,200);
	 }
   {
   	 if(sortir_stock_B==1)
	 goto m11;
	 else
	 if(sortir_stock_B==2)
	 goto m22;
	 else
	 if(sortir_stock_B==3)
	 goto m33; 
	 else
	 if(sortir_stock_B==4)
	 goto m44;
	 else
	 if(sortir_stock_B==5) 
	 goto m55;
	 else
	 if(sortir_stock_B==6)
	 goto m66;
	 else
	 if(sortir_stock_B==7)
	 goto m77;
	 else
	 if(sortir_stock_B==8)
	 goto y6;
   }
   
   {
      m4:m44:k3:kk3:{MessageBox (NULL, "CALCULATRICE\n",
      "CALCULATRICE", MB_OK);}
      Beep(5000,200);
      
    printf("APPUYER SUR ENTRER POUR UTILISER LA CALCULATRICE");

    getche();
    Beep(5000,200);

    s13 :printf("\nCHOISIEZ \n");
    printf("\nAPPUYER UNE DES TOUCHES \n");
    printf("[1] POUR L'ADDITION \n");
    printf("[2] POUR LA SOUSTRACTION \n");
    printf("[3] POUR LA MULTIPLICATION \n");
    printf("[4] POUR LA DIVISION \n");
    printf("[5] POUR LES FONCTIONS SCIENTIFIQUE \n");
    choice=getch();
    Beep(5000,200);

    if((choice=='e')||(choice=='E'))
    goto s6;    

    else if(choice=='1') 
      {
        
        printf("\nENTRER LES NOMBRES A ADDITIONER \nAPPUYER SUR Q POUR FARE L'ADDITION \n");
        do 
        {
            printf("ENTREZ UN NOMBRE ");
            scanf("%f",&addition);
            Beep(5000,200);
            sum=addition+sum;
        }
        while(getch()!='q');
        printf("LA SOMME EST:- %.2f",sum);
        getche();
        Beep(5000,200);
    }

    else if(choice=='2') 
     {
        
        printf("\nENTREZ LES NOMBRES A MULTIPLIER \nAPPUYER SUR Q POUR FAIRE LA SOUSTRACTION \n");
        printf("ENTREZ UN NOMBRE ");
        scanf("%f",&subtraction);
        Beep(5000,200);
        sub=subtraction;
        while(getch()!='q') 
        {
            printf("ENTREZ UN NOMBRE ");
            scanf("%f",&subtraction);
            Beep(5000,200);
            sub=sub-subtraction;
        }
        while(getch()!='q');
        printf("LE RESULTAT EST:- %.2f",sub);
        getch();
        Beep(5000,200);
    }

    else if(choice=='3') 
    {
        
        printf("\nENTREZ LES NOMBRES A MULTIPLIER \nAPUUYEZ Q POUR SORTIR \n");
        do 
        {
            printf("ENTRER UN NOMBRE ");
            scanf("%f",&multiplication);
            Beep(5000,200);
            multi=multiplication*multi;
        }
        while(getch()!='q');
        printf("LE RESULTAT EST:- %.2f",multi);
        getch();
        Beep(5000,200);
    }

    else if(choice=='4') 
    {
        
        printf("\nENTRER LES NOMBRE POUR DIVISER \nAPPUYER SUR Q POUR SORTIR \n");
        printf("ENTRER UN NOMBRE ");
        scanf("%f",&division);
        Beep(5000,200);
        dvs=division;
        while(getch()!='q') 
        {
            printf("ENTRER UN NOMBRE ");
            scanf("%f",&division);
            Beep(5000,200);
            dvs=subtraction/dvs;
        }
        printf("LE RESULTAT EST:- %.2f \n",dvs);
        getch();
        Beep(5000,200);
    }

    else if(choice=='5') 
    {
        
        printf("\nFONCTIONS SCINTIFIQUE \n");
        printf("APPUYER UN TOUCHE \n");
        printf("[1] POUR X CAREE \n");
        printf("[2] POUR LA RACINE CAREE DE X \n");
        printf("[3] POUR LE LOGARITHME DE X \n");
        printf("[4] POUR L'EXPONENTIEL DE X \n");
        printf("[5] POUR LE FACTORIEL DE X \n");
        printf("[6] POUR SIN DE X \n");
        printf("[7] POUR COS DE X \n");
        printf("[8] POUR TAN DE X \n");
        choice2=getch();
        Beep(5000,200);
    }

    if((choice2=='e')||(choice2=='E'))
        goto s11;

    else if(choice2=='1') 
    {
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SON CARREE \n");
        printf("ENTRER UN NOMBRE ");
        scanf("%f",&square);
        Beep(5000,200);
        square=square*square;
        printf("LE CAREE EST %.2f",square);
        getch();
        Beep(5000,200);
    }

    else if(choice2=='2') 
    {
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SA RACINE CARREE \n");
        printf("ENTREZ UN NOMBRE ");
        scanf("%lf",&rootx);
        Beep(5000,200);
        resultroot=sqrt(rootx);
        printf("LA RACINE CARRE DE %lf EST %lfn", rootx, resultroot);
        getch();
        Beep(5000,200);
    }

    else if(choice2=='3') 
    {
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SON LOGARITHME \n");
        printf("ENTREZ UN NOMBRE ");
        scanf("%lf",&logx);
        Beep(5000,200);
        resultlog=log(logx);
        printf("\nLE LOGARITHME DE %lf EST %lfn", logx, resultlog);
        getche();
        Beep(5000,200);
    }

    else if(choice2=='4') 
    {
        
        printf("\nENTREZ UN NOMBRE X \nAPPUYEZ SUR ENTRER POUR OBTENIR SON EXPONENTIEL \n");
        printf("ENTRER UN NOMBRE ");
        scanf("%lf",&expx);
        Beep(5000,200);
        resultexp = exp(expx);
        printf("'e' A LA PUISSANCE %lf (e ^ %lf) = %lfn",
               expx, expx, resultexp);
        getche();
        Beep(5000,200);
    }

    else if(choice2=='5') 
    {
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SON FACTORIEL \n");
        printf("ENTREZ UN NOMBRE ");
        scanf("%lf",&fact);
        Beep(5000,200);
        for(int factorial=fact; factorial>=1; factorial--)
            resultfact=resultfact*factorial;
        printf("LE FACTORIEL DE %lf EST %lf ",fact,resultfact);
        getch();
        Beep(5000,200);
    }

    else if(choice2=='6') 
	{
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SON SIN \n");
        printf("ENTRER UN NOMBRE ");
        scanf("%lf",&sinx);
        Beep(5000,200);
        resultsin=sin(sinx);
        printf("LE SIN DE %lf EST %lfn", sinx, resultsin);
        getche();
        Beep(5000,200);
    }

    else if(choice2=='7') 
    {
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SON COS \n");
        printf("ENTREZ UN NOMBRE ");
        scanf("%lf",&cosx);
        Beep(5000,200);
        resultcos=cos(cosx);
        printf("LE COS DE of %lf EST %lfn", cosx, resultcos);
    }

    else if(choice2=='8') 
    {
        
        printf("\nENRERZ UN NOMBRE X \nAPPUYER SUR ENTRER POUR OBTENIR SA TAN \n");
        printf("ENTREZ UN NOMBRE ");
        scanf("%lf",&tanx);
        Beep(5000,200);
        resulttan=tan(tanx);
        printf("LA TAN DE %lf EST %lfn", cosx, resultcos);
    }

    printf("\nCHOISIEZ \n");
    printf("\nAPPUYER UNE DES TOUCHES \n");
    printf("\nAPPUYEZ 1 POUR MENU PRINCIPAL DE LA CALCULATRICE \nAPPUYEZ 2 POUR SORTIR \n");
    scanf("%d",&choisir_z);
	Beep(5000,200);
	{
		if(choisir_z==1)
        goto s13;
        else
        if(choisir_z==2)
        goto s14;
	    else
        do
       {
          Beep(1000,300);
          Beep(1000,300);
    	  printf("ERREUR DE SYNTAXE, TAPEZ 1 OU 2 SELON LES OPTIONS DONNEES \n");
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&choisir_z);
         Beep(5000,200);
        }
	    while(choisir_z<=0 || choisir_z>=3);
    }
		{
		if(choisir_z==1)
        goto s13;
        else
        if(choisir_z==2)
        goto s14;
	    } 
	    
    }

   {
   	 if(sortir_stock_B==1)
	 goto n1;
	 else
	 if(sortir_stock_B==2)
	 goto n2;
	 else
	 if(sortir_stock_B==3)
	 goto n3; 
	 else
	 if(sortir_stock_B==4)
	 goto n4;
	 else
	 if(sortir_stock_B==5) 
	 goto n5;
	 else
	 if(sortir_stock_B==6)
	 goto n6;
	 else
	 if(sortir_stock_B==7)
	 goto y7;
   }
	
	Beep(1000,300);
	Beep(1000,300);
    F:F1:F2:F3:m7:m77:n6:s1:s2:s6:s11:s14: MessageBox (NULL, "VOULEZ VOUS VRAIMENT QUITER? \n",
    "GENIE-CALCUL", MB_OK);
    Beep(5000,200);
    MessageBox (NULL, "1- APPUYEZ 1 POUR LE MENU PRINCIPAL \n2- APPUYER SUR 2 POUR SORTIR \n3- APPUYEZ SUR 3 POUR CHANGER DE PROFIL \n",
    "GENIE-CALCUL", MB_OK);
    Beep(5000,200);
    MessageBox (NULL, "APPUYEZ SUR LA TOUCHE ENTRER ENSUITE\n",
    "GENIE-CALCUL", MB_OK);
    Beep(5000,200);
    printf("-M./Mme.:- %s %s MERCI D'AVOIR UTILISE CE LOGICIEL \n",nom,prenom);
    scanf("%d",&sortir);
    Beep(5000,200);
    while(sortir<1 || sortir>3)
        {
          Beep(1000,300);
          Beep(1000,300);
    	 MessageBox (NULL, "ERREUR DE SYNTAXE, TAPEZ 1, 2 OU 3 SELON LES OPTIONS DONNEES \n",
         "ERREUR", MB_OK);
         Beep(5000,200);
         printf("M./Mme.:- %s %s RE-ESSAYEZ \n",nom,prenom);
         scanf("%d",&sortir);
         Beep(5000,200);
        }
        {
        	if (sortir==1)
            goto E1;
            else
            if (sortir==2)
            goto G;
            else
            goto y8;
        }
        G: printf("\nFIN DE SESSION DU\n");
        printf("Date :%s\n", __DATE__ );
        printf("A\n");
        printf("HEURE :%s", __TIME__ );
		printf("PAR\n");
		printf("M./Mme. :- %s\n",nom,prenom);
		Sleep(1500);
		Sleep(1500);    
    
	return 0;
}
