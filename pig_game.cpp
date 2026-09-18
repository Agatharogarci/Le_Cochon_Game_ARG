//
// Created by Agatha on 16/09/2026.
//
#include "pig_game.h"

#include <cstdlib>
#include <iostream>

#include <print>

int diceRoll() {
    return 1 + rand() % 6;
}
    //poser la question "Veux tu continuer [Y/N]
    //verifier la reponse
    //reponse = Y -> on continue
    //reponse = N -> on arrete, on bloque le score
    //autre chose -> on repose la question

bool askContinue() {
    std::string playerAnswer;

    do {
        std::println("Veux tu continuer [Y/N] ?");
        std::cin >> playerAnswer;

        std::println("Voici votre reponse {}", playerAnswer);

        if (playerAnswer == "Y" || playerAnswer == "y" || playerAnswer == "Yes") {
            return true;
        }
        if (playerAnswer == "N" || playerAnswer == "n" || playerAnswer == "No") {
            std::println("Le jeu est termine");
            return false;
        }


    }while (true);

}
