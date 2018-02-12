#include <iostream>
#include <ctime>
#include <cstdlib>
#define N 20
#include <vector>
#include <time.h>
#include <algorithm>

 /*
Ecrivez un programme qui génère aléatoirement 20 entiers dans l’intervalle [-10, 10]. Stocker ces valeurs dans un vecteur puis faite un tri croissant de ce vecteur. Afficher le tableau trié pour vérifier votre algorithme.
N’oubliez pas de faire les bons « includes » notamment pour pouvoir utiliser les vecteurs.
Vous voyez que les vecteurs sont une alternative très puissante aux tableaux classiques du C.
*/



int main()
{
    srand(time(NULL));

    std::vector <int> tab (N);

    for(int i=0;i<N;i++)
    {
        tab[i]=rand()%(21)-10;
    }
   std::sort (tab.begin(), tab.end());

std::cout << "le tableau :"<<std::endl;
    for(int i=0;i<N;i++)
    {
    std::cout <<tab[i]<<std::endl;
    }

    return 0;
}

