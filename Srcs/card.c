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

	switch (card->value)
	{
	case (11):
    	printf("[%s%s] ", "Valet", suit);
		break;
	case (12):
    	printf("[%s%s] ", "Dame", suit);
		break;
	case (13):
    	printf("[%s%s] ", "Roi", suit);
		break;
	default:
	    printf("[%d%s] ", card->value, suit);
		break;
	}
}
