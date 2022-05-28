void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void random_word(){
    //point to global variable from hangMan.c
    extern char correct[50];

    //file open
    FILE *file = fopen("words.txt", "r");
    int count = 0;
    
    //generating random line number
    //doesnt work properly yet
    srand(time(0));
    int lineNumber = rand() % 370105;
    
    //reading word from that line number
    if( file != NULL){
        while(fgets(correct, sizeof correct, file) != NULL){
            if(count == lineNumber){
                break;
            }
            else{count++;}
        }
        fclose(file);
    }
    else{
        printf("Dictionary Not Found");
    }
}

int check_for_char(char word[50], char character[1]){
    int result = 0;
    for(int i=0; i < strlen(word);i++){
        if(word[i] == character[0]){
            result = 1;
            break;
        }
    }
    return result;
}
