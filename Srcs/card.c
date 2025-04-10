#include "card.h"

/*
 * Afficher correctement la valeur de la carte pour le jeu de base.
 * Pour les cartes 11, 12, 13, afficher respectivement "Valet", "Dame", "Roi".
 */
void print_card(const Card *card) {
    char *suit;
    switch (card->suit) {
        case HEARTS:   suit = "♥"; break;
        case DIAMONDS: suit = "♦"; break;
        case CLUBS:    suit = "♣"; break;
        case SPADES:   suit = "♠"; break;
        default:       suit = "?"; break;
    }

    char *value = NULL;
    switch (card->value) {
        case 11: value = "Valet"; break;
        case 12: value = "Dame";  break;
        case 13: value = "Roi";   break;
    }
    
    if (!value)
        printf("[%d%s] ", card->value, suit);
    else
        printf("[%s %s] ", value, suit);
}
