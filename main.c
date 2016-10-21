#include <stdio.h>
#include <stdlib.h>
#include "library.h"

void main() {

 
  printf("LIST FUNCTIONS\n");
  

  printf("insert_front\n");
  a = insert_front(a, b);
  print_list(a);
    
  printf("insert_order");
  insert_order(a, d);
  print_list(a);

  printf("search_artist\n");
  insert_order();
  print_node(search_artist(a, "can artist"));
  printf(\n");


  printf("search_song\n");
  print_node(search_name(a, "a"));
  printf("\n");
  

  printf("remove_node\n");
  a = remove_node(a,b);
  print_list(a);

 
  printf("return_rand\n");
  printf("Printing rest of list after random node");
  print_node(return_rand(a));


  printf(free_list\n");
  free_list(a);
  print_list(a);
  



  printf("LIBRARY FUNCTIONS\n");


  printf("add\n");
  add("e", "Ean artist");
  add("d", "Dan artist");
  add("someone like you","adele");  
  add("hello","adele");
  add("wherever i go","one republic");
  add("closer","bob");
  add("closer","chainsmokers");
  
 
  printf("print_lib\n");
  print_lib();



  

  printf("shuffle\n");
  shuffle();
 
 
  printf("print_artist\n");
  print_artist("adele");
  

  printf("Testing printl_etter\n");
  print_letter("a");

  
  printf("Testing search_song\n");
  song_node * ret = search_song("closer");
  print_node(ret);
  
  
  printf("Testing search_artist_lib\n");
  song_node * ret2 = search_artist_lib("one republic");
  print_node(ret2);


  free_lib();
  print_lib();

}