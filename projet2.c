#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int choix;
int N;
int i;

struct AjouEtu{
    char CNE [15];
    char Nom[10];
    char Prenom[10];
    float note[4];
    
};struct AjouEtu Etudient[100];
float MOY[100];

int MainMenu(){

printf("======Menu Principale=====\n");
printf("1) Ajouter un etudiant\n");
printf("2) Saisir les notes d'un etudiant\n");
printf("3) Afficher tous les etudiants\n");
printf("4) Afficher bulletin d'un etudiant\n");
printf("5) Calculer la moyenne generale\n");
printf("0) Quitter\n");
printf("Quel est votre choix ? ");
   scanf("%d", &choix);

return choix;
}

void AjoutEtud(){



printf("\nveuillez saisir le Nombre d'etudiant : ");
scanf("%d",&N);
if(N > 100 ||N < 0){
printf("veuillez saisir un nombre entrer 1 et 100\n");
}
printf("veuillez saisir les elements suivant : \n");
for(i = 0; i< N; i++){
    printf("veuillez entrer le CNE :");
    scanf("%s",Etudient[i].CNE);
    printf("veuillez entrer le Nom :");
    scanf("%s",Etudient[i].Nom);
    printf("veuillez entrer le Prenom :");
    scanf("%s",Etudient[i].Prenom);
    }

}

void SaisirNotes (){
    float S,M;
    int j;
    char reponse;
   oui:
    printf("\nveuillez choisier Indice d'etudiant pour ajoute les notes 1-%d :",N);
    scanf("%d",&i);
    while (i < 0 || i > N){
    printf("s'il vous plait ! Indice entre 1-%d :",N);
    scanf("%d",&i);
    }
    i=i-1;
    
    printf("L'etudiant %s %s saisir les notes : \n",Etudient[i].Nom, Etudient[i].Prenom);
        for(j=0; j<4; j++){
        printf("saisir les notes %d : ",j+1);
        scanf("%f",&Etudient[i].note[j] );

        S+= Etudient[i].note[j];

            if (Etudient[i].note[j] < 0 || Etudient[i].note[j] > 20)
            {
               printf("desole ! note entre 0 et 20 ");
               scanf("%f",&Etudient[i].note[j]);
            }
        }
        M = S/4;
        for(i=0; i< N; i++){
            MOY[i]=M;
        }
    
    printf("Voulez-vous saisir un autre etudiant (O/N) ?");
    scanf(" %c",&reponse);
    if (reponse == 'O')
    goto oui;
}

float moyenne () {
    
    float S;
    int  j;
    S = 0;
    for(i=0; i<N; i++){
    printf("%.2f",MOY[i]);
    }
    for(j=0; j<4; j++){
    S +=  Etudient[i].note[j];
    }

    

    return S/4;
}
void tabmoy (){
    float TabTmp[4];
    int j;
    
    for(j=0; j<4; j++){
   TabTmp[i] = Etudient[i].note[j];
   printf("MOyenne : %.2f",TabTmp[i]);
    }
}

void AfficherEtudients(){

    float moy = moyenne();
    for(i=0; i<N; i++){
    printf("\nEtudiant %d :\n%s %s %s",i+1, Etudient[i].CNE, Etudient[i].Prenom, Etudient[i].Nom);
    printf("\nla moyenne %.2f\n",moy);
    }

}

float MoyenneGEn(){
    float mo;
    mo = moyenne();

    return mo / N;
}

void AffichBull(){
 int j;
    printf("veuillez choisier Indice d'etudiant qui affiche le bulletin 1-%d :",N);
    scanf("%d",&i);
    i=i-1;
    do
    {
        printf("%s %s\n",Etudient[i].Nom,Etudient[i].Prenom);
        printf("%s\n",Etudient[i].CNE);
        for(j = 0; j<4; j++)
        printf("La note %d : %.2f ",j+1,Etudient[i].note[j]);
        printf("La Moyenne : %.2f\n",moyenne());
        printf("La Moyenne Generale : %.2f\n",MoyenneGEn());
        
    
    } while (N < 0 || N > 20);
    if ((N < 0 || N > 20))
    {
        printf("veuillez entre indice entre 1-%d :",N);
    }
    
    
    
}

void BackMenu(){
   printf("veuillez entrer 1 pour retour Menu :");
   scanf("%d",&choix);
   if(choix == 1){
      
      MainMenu();
   }else{

   printf("1- retour Menu :");
   scanf("%d",&choix);
   MainMenu();

   }
}

void SwitchMenu(){

do{
switch (choix)
{
case 1:
    AjoutEtud();
  BackMenu();
    break;

case 2:
    SaisirNotes();
   BackMenu();
    break;

case 3:
    AfficherEtudients();
   BackMenu();
    break;
case 4:
   //AffichBull();
   tabmoy();
   BackMenu();
    break;

default:
    printf("s'il vous plait ! veuillez choisier entrer 0 et 5 :");
    scanf("%d",&choix);
    break;
}

   } while (choix != 0);
   printf("fin de programme ! Merci ~~~~~~");
}
int main (){

    MainMenu();
   SwitchMenu();
     //AjoutEtud();
     //SaisirNotes();
       // AfficherEtudients();
     // MoyenneGEn();
     // AffichBull();
    return 0;
}