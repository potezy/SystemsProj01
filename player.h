#ifndef PLAYER_H
#define PLAYER_H

#include "player.h"

song_node *table[26];

void  add( char *,char *);

song_node * search_song( char *);

song_node * search_artist( char *);

void print_letter(char *);

void print_artist(char *);

void  print_lib();

song_node *shuffle();

song_node *delete_song(song_node *);

void delete_player();

#endif