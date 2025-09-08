#include <stdio.h>
#include <string.h>
int choix;
struct AjouEtu{
    char CNE [15];
    char Nom[10];
    char Prenom[10];
};

struct AjouEtu Etudient[100];

int MainMenu(){
printf("======Menu Principale=====\n\n");
printf("1) Ajouter un etudiant\n");
printf("2) Saisir les notes d'un etudiant\n");
printf("3) Afficher tous les etudiants\n");
printf("4) Afficher bulletin d'un etudiant\n");
printf("5) Calculer la moyenne generale\n");
printf("0) Quitter");
printf("Quel est votre choix ? ");
   scanf("%d", &choix);
   return choix;
}

void AjoutEtud(int i){
    int N;
printf("veuillez saisir le Nombre d'etudiant : ");
scanf("%d",&N);
printf("veuillez saisir les elements suivant : \n");
for(i = 0; i< N; i++){
    printf("veuillez entrer le CNE :");
    scanf("%s",&Etudient[i].CNE);
    printf("veuillez entrer le Nom :");
    scanf("%s",&Etudient[i].Nom);
    printf("veuillez entrer le Prenom :");
    scanf("%s",&Etudient[i].Prenom);
}
}

void SaisirNotes (){
    float note;
    int indice;

    printf("veuillez choisier CNE d'etudiant pour ajoute les notes :");
    scanf("%d",&indice-1);
    printf("L'etudiant %s %s saisir les notes : \n",Etudient[indice].Nom,Etudient[indice].Prenom);
    for(indice=0; indice<4; indice++){
    printf(" saisir les notes %d : ",indice+1);
    scanf("%f",&note);
    do{
            if (note < 0 || note > 20)
            {
               printf("desole ! note entre 0 et 20 ");
               scanf("%f",&note);
            }
            
            
         }while (note < 0 || note > 20);
      
         
    }
}

float CalculMoyen(){
    int N; 

}

int main (){
    int i;
    AjoutEtud(i);
    SaiserNotes ();

    return 0;
}