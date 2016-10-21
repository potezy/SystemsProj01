#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct song_node{ 
  char name[256];
  char artist[256];
  struct song_node *next;
}song_node;


song_node * insert_front(song_node * , song_node *);

song_node * insert_order(song_node * , song_node *);

void * print_list(song_node *);

song_node * return_song(song_node* , char *);

song_node * return_artist(song_node * , char *);

song_node * return_rand(song_node *);

song_node * remove_node(song_node * , song_node *);

song_node * free_list(song_node *);

#endif