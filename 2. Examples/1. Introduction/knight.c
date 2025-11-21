#include <stdio.h>

#define KNIGHT_NAME "Sir Lancelot"
#define BATTLE_CRY "For Camelot!"

void announce_knight(void) {
    printf("I am %s! %s\n", KNIGHT_NAME, BATTLE_CRY);
}

int main(void) {
    announce_knight();
    
    int enemies = 5;
    for (int i = 0; i < enemies; i++) {
        printf("Defeated enemy %d!\n", i + 1);
    }
    
    printf("Victory!\n");
    return 0;
}