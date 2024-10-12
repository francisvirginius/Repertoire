//
//  main.c
//  HelloWorld
//
//  Created by francis virginius on 12/10/2024.
//
#include <stdio.h>
#include <string.h>
#include "controller.h"

#define MAX_CONTACTS 100

typedef struct {
    char nom[50];
    char telephone[15];
    char email[50];
} Contact;

Contact contacts[MAX_CONTACTS]; // demander d'expliqué cette partie 
int nb_contacts = 0;

void ajouter_contact() {
    if (nb_contacts < MAX_CONTACTS) {
        printf("Entrez le nom : ");
        scanf("%s", contacts[nb_contacts].nom);
        printf("Entrez le numéro de téléphone : ");
        scanf("%s", contacts[nb_contacts].telephone);
        printf("Entrez l'email : ");
        scanf("%s", contacts[nb_contacts].email);
        nb_contacts++;
        printf("Contact ajouté avec succès !\n");
    } else {
        printf("Impossible d'ajouter plus de contacts.\n");
    }
}

void afficher_contacts() {
    if (nb_contacts == 0) {
        printf("Aucun contact à afficher.\n");
    } else {
        for (int i = 0; i < nb_contacts; i++) {
            printf("\nContact %d\n", i+1);
            printf("Nom : %s\n", contacts[i].nom);
            printf("Téléphone : %s\n", contacts[i].telephone);
            printf("Email : %s\n", contacts[i].email);
        }
    }
}

void rechercher_contact() {
    char nom[50];
    printf("Entrez le nom à rechercher : ");
    scanf("%s", nom);
    
    for (int i = 0; i < nb_contacts; i++) {
        if (strcmp(nom, contacts[i].nom) == 0) {
            printf("\nContact trouvé :\n");
            printf("Nom : %s\n", contacts[i].nom);
            printf("Téléphone : %s\n", contacts[i].telephone);
            printf("Email : %s\n", contacts[i].email);
            return;
        }
    }
    printf("Aucun contact trouvé avec ce nom.\n");
}
