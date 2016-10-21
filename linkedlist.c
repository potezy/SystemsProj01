#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.h"
#include <time.h>
song_node * insert_front(song_node * list, song_node * song){
    song->next = list;
    return song;
}

song_node * insert_order(song_node * list , song_node * song){
    song_node * next = list;
    while(strcmp(list->artist,song->artist) < 0){
        list = list->next;
    }
    

}

void * print_list(song_node * list){
    song_node * temp = list;
    printf("[");
    while(temp){
        printf("%s by %s" , temp->name , temp-> artist);
        temp = temp->next;
    }
    printf("]\n");
}

song_node * return_song(song_node* list , char * name){
    song_node * temp = list;
    while(temp){
        if(!strcmp(list->name , name)) return temp;
        temp = temp ->next;
    }
    printf("song not found");
    return NULL;
}

song_node * return_artist(song_node * list, char * artist){
    song_node * temp = list;
    while(temp){
        if(!strcmp(list->artist , artist)) return temp;
        temp = temp ->next;
    }
    printf("no songs by this artist");
    return NULL;
}

song_node *return_rand(song_node *list){
    srand(time(NULL));
    song_node *temp = list;
    int len = 0;
    while(temp){
        len ++;
        temp = temp ->next;
    }
    int index = rand() %len;
    while(index){
        list = list ->next;
        index--;
    }    
    return list;
}
song_node * remove_node(song_node * list , song_node * song){
    song_node *ret = list;
    song_node *next = list->next;
    if(!strcmp(list->artist , song->artist) && !strcmp(list->name, song->name)){
        free(list);
        return next;
    }
    while(next){
        if(!strcmp(next->artist , song->artist) && !strcmp(next->name, song->name)){
            free(list->next);
            list->next = next->next;
        }
        else{
            list = next;
            next= next->next;
        }
    return ret;
    
    }
}

song_node * free_list(song_node *list){
    song_node * first = list;
    song_node * temp;
    while(list){
        temp = list->next;
        free(list);
        list = temp;
    }
    return first;
}

