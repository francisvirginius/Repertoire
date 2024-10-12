//
//  main.c
//  HelloWorld
//
//  Created by francis virginius on 12/10/2024.
//
#include <stdio.h>
#include "controller.h"

int main() {
    int choix;
    while(1) {
        printf("\n*** Gestionnaire de Contacts ***\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
        
        switch(choix) {
            case 1:
                ajouter_contact();
                break;
            case 2:
                afficher_contacts();
                break;
            case 3:
                rechercher_contact();
                break;
            case 4:
                printf("Au revoir !\n");
                return 0;
            default:
                printf("Choix invalide, réessayez.\n");
        }
    }
    return 0;
}
