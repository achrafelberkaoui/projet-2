#include <stdio.h>
#include <string.h>
int choix;
int N,i;
float note;
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

void AjoutEtud(){
    
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
    float S,M,Mg;
    printf("veuillez choisier CNE d'etudiant pour ajoute les notes :");
    scanf("%d",&i-1);
    printf("L'etudiant %s %s saisir les notes : \n",Etudient[i].Nom,Etudient[i].Prenom);
    for(i=0; i<4; i++){
    printf(" saisir les notes %d : ",i+1);
    scanf("%f",&note);
    S+= note;

    do{
            if (note < 0 || note > 20)
            {
               printf("desole ! note entre 0 et 20 ");
               scanf("%f",&note);
            }
            
            
         }while (note < 0 || note > 20);
      
         
    }
    M = S /4;
    printf("La Moyenne des notes : %.2f\n",M);

    Mg =M /N;
    printf("Moyenne general d'etudiants : %.2f\n",Mg);


}

void AfficherEtudient(){
    for(i=0; i<N; i++){
    printf("Etudiant %d: %s %s %s",i+1,Etudient[i].CNE,Etudient[i].Prenom,Etudient[i].Nom);
}
}

int main (){

    AjoutEtud();
    SaisirNotes();
    AfficherEtudient();
    return 0;
}