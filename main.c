#include <stdio.h>
#include <stdlib.h>
#include "player.h"

void main() {
  song_node *a;
  a = (song_node*) malloc( sizeof(song_node) );
  strcpy(a->name, "name");
  strcpy(a->artist, "artist");
  print_list(a);


song_node *b;
  b = (song_node*) malloc( sizeof(song_node) );
  strcpy(b->name, "sampleName");
  strcpy(b->artist, "sampleArtist");
  print_list(b);

  printf("LIST FUNCTIONS\n");
  printf("insert_front\n");
  a = insert_front(a, b);
  print_list(a);   
  printf("search_artist\n");
  print_node(search_artist(a, "artist"));
  printf(\n");
  printf("search_song\n");
  print_node(search_name(a, "a"));
  printf("\n");
  printf("remove_node\n");
  a = remove_node(a,b);
  print_list(a); 
  printf("return_rand\n");
  print_node(return_rand(a));
  printf(free_list\n");
  free_list(a);
  print_list(a);
  
  printf("LIBRARY FUNCTIONS\n");
  printf("add\n");
  add("e", "eartist");
  add("d", "dartist");
  add("closer","chainsmokers"); 
  printf("print_lib\n");
  print_lib();
  printf("printl_letter\n");
  print_letter("a");
  printf("search_song\n");
  song_node * ret = search_song("closer");
  print_list(ret);
  printf("search_artist_lib\n");
  song_node * ret2 = search_artist("imagine dragons");
  print_list(ret2);
  delete_player();
  print_lib();

}
