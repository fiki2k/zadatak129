// Program treba provjerit jeli matrica rijetka ili ne.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int ukupno = 0;

     printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

	
	// MAtrica je rijetka ako joj je vecina elemenata 0.
    /*
     	Broji ukupan broj nula u matrici.
     */
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            /*
             	Ako je element nula.
             */
            if(A[i][j] == 0)
            {
                ukupno++;
            }
        }
    }

    if(ukupno >= (i * j)/2)
    {
        printf("\nDana matrica je rijetka.");
    }
    else
    {
        printf("\nDana matrica nije rijetka.");
    }

    return 0;
}
