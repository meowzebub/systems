#include <stdio.h>

#include "dex.h"

int main(void)
{
    struct dex *pokemon = NULL;

    pokemon = insert_front(pokemon, 25, "Pikachu");
    pokemon = insert_front(pokemon, 493, "Arceus");
    pokemon = insert_front(pokemon, 461, "Weavile");
    pokemon = insert_front(pokemon, 609, "Chandelure");
    pokemon = insert_front(pokemon, 151, "Mew");

    print_list(pokemon);
    remove_node(pokemon, 493);
    print_list(pokemon);
}