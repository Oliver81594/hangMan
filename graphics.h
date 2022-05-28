void draw(int hp){
    switch(hp){
        case 0:
            printf("   ____ \n  |    |      \n  |    o      \n  |   /|\\    \n  |    |      \n  |   / \\    \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 1:
            printf("   ____ \n  |    |      \n  |    o      \n  |   /|\\    \n  |    |      \n  |   /       \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 2:
            printf("   ____ \n  |    |      \n  |    o      \n  |   /|\\    \n  |    |      \n  |           \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 3:
            printf("   ____ \n  |    |      \n  |    o      \n  |   /|\\    \n  |           \n  |           \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 4:
            printf("   ____ \n  |    |      \n  |    o      \n  |   /|      \n  |           \n  |           \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 5:
            printf("   ____ \n  |    |      \n  |    o      \n  |   /       \n  |           \n  |           \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 6:
            printf("   ____ \n  |    |      \n  |    o      \n  |           \n  |           \n  |           \n _|_          \n|   |______   \n|__________|  \n");
            break;
        case 7:
            printf("   ____ \n  |    |      \n  |           \n  |           \n  |           \n  |           \n _|_          \n|   |______   \n|__________|  \n");
            break;
    }
}

void skull(){
    system("clear");
    printf(
    "            _,.-------.,_             \n"
    "        ,;~'             '~;,         \n"
    "      ,;                     ;,       \n"
    "     ;                         ;      \n"
    "    ,'                         ',     \n"
    "   ,;                           ;,    \n"
    "   ; ;      .           .      ; ;    \n"
    "   | ;   ______       ______   ; |    \n"
    "   |  `/~'     ~'' . '~     '~\\' |    \n"
    "   |  ~  ,-~~~^~, | ,~^~~~-,  ~  |    \n"
    "    |   |  Game  }:{  Over  |   |     \n"
    "    |   l       / | \\       !   |     \n"
    "    .~  (__,.--' .^. '--.,__)  ~.     \n"
    "    |     ---;' / | \\ `;---     |     \n"
    "     \\__.       \\/^\\/       .__/      \n"
    "      V| \\                 / |V       \n"
    "       | |T~\\___!___!___/~T| |        \n"
    "       | |`IIII_I_I_I_IIII'| |         \n"
    "       |  \\,III I I I III,/  |        \n"
    "        \\   `~~~~~~~~~~'    /         \n"
    "          \\   .       .   /           \n"
    "            \\.    ^    ./             \n"
    "              ^~~~^~~~^               \n \n");
}

void congrats(){
    printf(
"                                       .''.        \n"
"       .''.      .        *''*    :_\\/_:     .     \n"
"      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.  \n"
"  .''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-  \n"
" :_\\/_:'.:::.    ' *''*    * '.\'/.' _\\(/_'.':'.'  \n"
" : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *  \n"
"  '..'  ':::'     * /\\ *     .'/.\'.   '           \n"
"      *            *..*         :                  \n"
"      *                                            \n"
"        *                                          \n");

printf("                   Congratulations \n");
}

void new_frame(){
    extern char word[50];
    extern int lives;
    extern char wrong[50];
    system("clear");
    draw(lives);
    printf("%s \n", word);
    printf("Wrong guesses: %s \n", wrong);
}