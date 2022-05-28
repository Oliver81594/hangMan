#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "graphics.h"
#include "functions.h"

//set up global variables
char correct[50];
char word[50];
char wrong[50];  //wrong guessed letters
int lives;

void shell(){
    //only taking one char input
    char ch[2];
    char comma[1] = ",";

    //fill word with * in a correct lenght
    char c[1] = "*";
    for(int a=0; a < strlen(correct)-1; a++){
        word[a] = c[0];
    }

    new_frame();

    //simple variable that stores 1 when at least 1 letter was correct
    int f;

    while(1){
        if(lives <= 0){
            skull();
            printf("The correct word was: %s \n", correct);
            delay(5);
            break;
        }
        else{
            scanf("%s", ch);

            f = 0;
            for(int i=0; i < strlen(correct); i++){
                if(ch[0] == correct[i]){
                    word[i] = ch[0];
                    f = 1;
                }
            }
            
            if(f == 0){
                if(check_for_char(wrong, ch) == 1){
                    printf("You have already tried this letter \n");
                    delay(2);
                }
                else{
                    lives--;
                    strncat(wrong, ch, 1);
                    strncat(wrong, comma, 1);
                }
            }
            new_frame();

            if(strcmp(word, correct) + 10 == 0){
                system("clear");
                congrats();
                delay(3);
                break;
            }
        }
    }
}

int main(){
    lives = 7;
    random_word();
    shell();
    return 0;
}