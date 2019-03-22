#include <iostream>
#define max 100
using namespace std;

int main()
{
    int n;
    int i;
    int e1;
    int e2;
    int vet[max];
    int interni=0;
    int esterni=0;
    int somma_interni=0;
    int somma_esterni=0;
    int media_interni=0;
    int media_esterni=0;
    int per_int=0;
    int per_est=0;
    do
    {
   cout<<"inserisci il primo estremo: ";
   cin>>e1;
   cout<<"inserisci il secondo estremo: ";
   cin>>e2;
    }while (e2<e1);
   //caricamento vettore
   do{
   cout<<"inserire la lunghezza del vettore: ";
   cin>>n;
   }while(n<0);
   cout<<"inserisci i vettori";
   for(i=0;i<n;i++)
   {
    cin>>vet[i];
   }
   //calcolo compresi negli estremi
   for(i=1;i<n;i++)
   {
    if (vet[i]>e1&&vet[i]<e2) somma_interni=somma_interni+vet[i],interni++;
        else somma_esterni=somma_esterni+vet[i],esterni++;
   }
   //calcolo medie
   media_interni=somma_interni/interni;
   media_esterni=somma_esterni/esterni;
   //calcolo percentuale
   per_int=(interni*100)/n;
   per_est=100-per_int;
   cout<<"la media degli estrni e': "<<media_esterni<< endl;
   cout<<"la percentuale degli interni e': "<<per_int<< endl;
   cout<<"la media degli interni e': "<<media_interni<< endl;
   cout<<"la percentuale degli esterni e': "<<per_est<< endl;
    return 0;
}
