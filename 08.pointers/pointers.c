#include <stdio.h>

int main(int argc, char *argv[]){

    int ages[] = {23,43,12,89,24};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };//array of strings

    int count = sizeof(ages) / sizeof(int);//safely getting the size of ages

    //first way indexing    
    for (int i = 0; i<count ; i++){
        printf("%s has %d years alive.\n", names[i],ages[i]);
    }
    int *cur_age = ages;
    char **cur_name = names;

    //second way using pointers
    for (int i = 0; i<count ; i++){
        printf("%s is %d years old.\n",*(cur_name + i), *(cur_age + i));
    }//valor del puntero cur_age mas el offset
    printf("---\n");

    //third way, pointers are just arrays
    for (int i = 0; i<count ; i++){
        printf("%s is %d years old again.\n", cur_name[i],cur_age[i]);
    }
    printf("---\n");

    //fourth way with pointers in a stupid, complex way
    for(cur_name = names, cur_age = ages; (cur_age-ages)<count; cur_name++, cur_age++){
        printf("%s lived %d years so far.\n",*cur_name,*cur_age);
    }

    return 0;
}