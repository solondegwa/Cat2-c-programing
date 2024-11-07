/*
  Author : Solomon Gichane
  Reg_no : CT102/G/21749/24
  */
//array data structure is a collection of elements that are stored in contigious memory location and must be of the same data type

#include<stdio.h>

int main(){
    int i,j;
    int scores[2][2]={{65,92},{84,72}};
    int k,l;
    int Scores[2][2]={{35,70},{59,67}};

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("score[%d][%d]=%d\n",i,j, scores[i][j]);
        }
    }
    for(k=0;k<2;k++){
        for(l=0;l<2;l++){
            printf("score[%d][%d]=%d\n",k,l, Scores[k][l]);
        }
    }
    return 0;

}
