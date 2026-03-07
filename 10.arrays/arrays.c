#include <stdio.h>

const int num_students = 4;

int main(void){

    int exam1[num_students];
    int exam2[num_students];
    int total[num_students];

    //intput exam1 scores
    for(int i = 0; i<num_students; i++){
        printf("Input exam 1 score for students %d : ", i);
        scanf("%d", &exam1[i]);
    }
    printf("\n");
    
    //intput exam2 scores
    for(int i = 0; i<num_students; i++){
        printf("Input exam 2 score for students %d : ", i);
        scanf("%d", &exam2[i]);
    }
    printf("\n");

    //calculating total grades
    for(int i=0; i<num_students; i++){
        total[i] = exam1[i] + exam2[i];
    }

    //output
    for(int i=0; i<num_students; i++){
        printf("Total for Student %d = %d\n", i, total[i]);
    }
    return 0;
}