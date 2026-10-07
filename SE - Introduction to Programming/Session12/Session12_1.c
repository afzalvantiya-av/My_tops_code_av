#include<stdio.h>

    struct Playlist{
        char title[20];
        char artist[20];
        int duration;
    };

void main(){

    struct Playlist song1={"Shape of You","Ed Sheeran",233};

    printf("Song Title: %s \nartist name: %s \nSong duration: %d Seconds",song1.title,song1.artist,song1.duration);

}