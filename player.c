#include <stdlib.h>
#include <stdio.h>
#include "player.h"
#include "linkedlist.h"
#include <ctype.h>
#include <string.h>

void  add(char * a ,char * n){
    int row = tolower(n[0]) - 97  ;
    song_node * new = (song_node *)malloc(sizeof(song_node));
    strcpy(new->name,n);
    strcpy(new->artist, a);
    new->next = NULL;
    table[row] = insert_order(table[row] ,  new);
}

song_node * search_song(char *name){
    int i;
    song_node *temp;
    for( i = 0; i < 26; i ++){
        temp = return_song(table[i] , name);
        if (temp) return temp;
    }

    printf("That song is not in the player");
    return NULL;
}

song_node * search_artist(char *artist){
    int i;
    song_node *temp;
    for(i = 0; i < 26; i ++){
        temp = return_artist(table[i] , artist);
        if (temp) return temp;
    }

    printf("No songs from that artist in the player");
    return NULL;
}

void print_letter(char * letter){
    printf("songs under the letter %s: " , letter);
    int row = tolower(* letter) - 97;
    print_list(table[row]);
}

//void *print_artist(song_node *table[], char *artist){
 //   int row = tolower(* artist) -97;
    
    
//}

void  print_lib(){
    int i;
    for(i = 0; i< 26; i ++){
        char c = i + 97;
        print_letter(c );
    }
}

//song_node *shuffle(song_node *table[]){
//    srand(time(NULL));
//    int r = rand() % 26;
//    int cnt = 5;
//    while(cnt){
        
//    }
    
//}

song_node *delete_song(song_node *song){
    song_node * list = table[(song->name)[0] -97];
    return remove_node(list , song);
}

void delete_player(){
    int i;
    for(i = 0; i < 26; i ++){
        while(table[i]){
            free_list(table[i]);
        }
    }
    
}
