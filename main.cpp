//
// Created by Agatha on 12/09/2026.
//
#include <iostream>



#include <print>

#include "pig_game.h"

int main() {

    srand(time(NULL));

    // tour un joueur

    int dice_result;
    int player_score = 0;
    std::string answer;
    bool continueOrNot;

    do {
        //Lance un dé
        dice_result = diceRoll();
        std::println("Resultat du de: {}", dice_result);

        if (dice_result > 1) {
            //Additionne au score précédent
            player_score += dice_result;
        }else {
            // On a fait 1, on retombe a 0
            std::println("Vous avez tout perdu");
            player_score = 0;
        }
        std::println("Player score: {}", player_score);
        continueOrNot = askContinue();
    }while (continueOrNot && player_score <= 20 && dice_result > 1);

    //FIN DE JEU
    //Le joueur arrete
    //Le résultat du dé est 1
    //Le score total a depasser 20




return 0;
}