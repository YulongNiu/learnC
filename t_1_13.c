#include <stdio.h>

/* The expected maximum length of input characters. */
#define MAXLEN 20
/* The length of interval of histogram.*/
#define INTERVAL 5

int main(void)
{
  /* "hislen" is the length of intervals in a histogram. "wordlen" is the lenght of each word.*/
  int i, c, hislen, wordlen;
  wordlen = 0;  
  hislen = MAXLEN/INTERVAL + 1;

  int nlen[hislen];
  /* initialization array */
  for (i = 0; i < hislen; ++i) {
    nlen[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    
    if (c != ' ' && c != '\n' && c != '\t') {

      /* in a word and count */
      ++wordlen;
    }
    else {
      if (wordlen != 0) {
        /* In the front of this input is a word */
        if (wordlen > MAXLEN) {
          /* The length of input word is longer than the MAXLEN */
          ++nlen[hislen - 1];
        }
        else {
          ++nlen[wordlen / INTERVAL];
        }
        wordlen = 0;
      }
      else {}
    }
  }

  /* for (i = 0; i < hislen; i++) { */
  /*   printf("The hislen[%d] is %d.\n", i, nlen[i]); */
  /* } */

      
  return 0;
}


