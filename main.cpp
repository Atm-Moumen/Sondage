#include <iostream>
#include<string.h>
#define n 30

using namespace std;
struct elect{int nis;
string  nom,prn;
   };

int main()
{ elect t[n];
  int nbe=0,nbo=0,nbn=0,c,i=0,q,f=0;
  float pe=0,po=0,pn=0;

    cout<<"******* sondage sur la greve d etudiants contre les elections ******* \n ";
    cout<<"entrez le nombre total d electeurs:\n";
    cin>>nbe;

    if(nbe>0){
   while((i<nbe)&&(f==0))
   {
       cout<<"est ce que vous voulez voter\n si oui saisis 4:\n";
       cin>>q;
       if(q==4){
       cout<<"-----------------------------------------------------------------\n";
       cout<<"s il vous plait entrer votre coordonnees:\n";
       cout<<"donner votre nom :\n ";
       cin>>t[i].nom;
      cout<<"donner votre  prenom:\n ";
       cin>>t[i].prn;
       cout<<"donner votre numero d inscription:\n";
       cin>>t[i].nis;
       cout<<"es-tu avec la greve?\n si oui tapes 1 sinon 0:\n";
       cin>>c;
        switch(c)
         { case 1:nbo++;i++;break;
           case 0:nbn++;i++;break;

         }

       }else f=1;
   }
   if(i>0)
    { pe=(i*100.0)/nbe;
      po=(nbo*100.0)/i;
      pn=(nbn*100.0)/i;
    }
    cout<<"\n***********les resultats de sondage*****************\n";

     cout<<"le nombre des electeurs est: "<<i<< " et de persentage: " <<pe<<" \n";
     cout<<"le nombre des electeurs qui sont avec la greve est: "<<nbo<<" et de persontage: "<<po<<"\n";
     cout<<"le nombre des electeurs qui ne sont pas avec la greve est: "<<nbn<<" et de persontage: "<< pn<<"\n";
     cout<<"alors ";

    if(nbo>nbn)
      cout<<"la greve contenue \n";
    else{ if(nbn>nbo ) cout<<"la greve s arrete \n";
     else cout<<"on refait le sondage hhhh\n ";}

   }else cout<<"tu ne peut pas faire le sondage\n ";
   cout<<"********les coordonnes des eleceteurs******************\n";
    cout<<"nom \t\t prenom \t\t numero d inscription \n";
    for(int j=0;j<i;j++)
    {

        cout<<t[j].nom<<" \t\t "<<t[j].prn<<" \t\t    "<<t[j].nis<<"\n";
    }



    return 0;
}

