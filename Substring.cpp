#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int count=0;
void printchar(char *ptr, int num) {

        if(*(ptr + 0)==*(ptr + num-1))
        {
            count++;
        }
        //printf("\n");

  }

char str[1000000];
  int main() {

        int i = 0, j;
        int n;
        scanf("%d",&n);
        scanf("\r");
        //fflush(stdin);
        /* get the input string from the user */
        //printf("Enter your input string:");
        //gets(str, 1000000, stdin);
        //scanf("%s",str);
        //gets(str);
        str[strlen(str) - 1] = '\0';

        /* find and print the possible substrings */
        //printf("\nPossible Substrings:\n");
        while (str[i] != '\0') {
                /* printing possible substrings */
                for (j = 1; j <= strlen(str) - i; j++) {
                        /* prints j characters from str[i] */
                        printchar((str + i), j);
                }
                i++;
        }
        printf("%d\n",count);
        return 0;
  }
