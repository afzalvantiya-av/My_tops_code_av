#include<stdio.h>

    struct timeduration
        {
            int hour;
            int minutes;
        };

    struct MovieShow
    {
        char movie[30];
        int screen;
        struct timeduration time;
    };
    
void main(){

    struct MovieShow show={"Avengers: End Game",3,19,00};

    printf("Movie name: %s Screen: %d time: %d:%d",show.movie,show.screen,show.time);
}