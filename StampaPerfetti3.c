#include <stdio.h>

/* applicazione che legge un numero e stampa tutti i
 * numeri perfetti compresi fra 1 e quel numero */
int main() {
      int limite;                    // fino ache numero ti vuoi spingere
      /* INPUT */
      printf("Caro utente, fino a che numero ti vuoi spingere?\n");
      scanf("%d", &limite);
      /* controlla ciascun numero fra 1 e limite; se perfetto, stampalo */
      for(int i=1; i<=limite; i++) {
            /* calcola la somma dei divisori minori di i */
            int somma =0;               // per contenere la somma dei divisori
            /* somma alla variabile somma ciascun numero fra 1 ed i-1 che divide i */
            for(int j=1; j<i; j++)
                  if(i%j==0)
                       somma+=j;
            if(somma==i)
                  printf("Ho trovato un numero perfetto: %d\n", i);

      system("PAUSE");
      }
}
