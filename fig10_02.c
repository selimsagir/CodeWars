// Structure member operator and
// structure pointer operator

#include <stdio.h>
#include <stdlib.h>
//card structure
struct card {
  char *face;
  char *suit;
};


int main(void){

  struct card aCard;
  aCard.face = "Ace";
  aCard.suit = "Spades";

  struct card *cardPtr = &aCard;  //assign the adress of aCard to cardptr

  printf("%s%s%s\n%s%s%s\n%s%s%s\n",aCard.face, " of ", aCard.suit, cardPtr->face, " of ", cardPtr->suit,
          (*cardPtr).face, " of ", (*cardPtr).suit);

}
