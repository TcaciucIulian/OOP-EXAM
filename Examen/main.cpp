// Tcaciuc Iulian-Marius, 143, GNU CCC Compiler
#include <iostream>
#include "bilet.h"
#include "clasaUnu.h"
using namespace std;

int main()
{
 int n=1;

 Bilet **bilete=new Bilet*[n];
 int x=0;
 cout<<" Eliberare bilet ";
 cin>>x;

 int *tip=new int[200];
 while(x==1)
 {
  cout<<" Eliberare de nou bilet apasati tasta 1 sau gata apasati tasta 2 ";
  cin>>x;
if(x==1)
{
  cout<<" Introduceti statia de plecare ";
  char *statiePlecare= new char [30];
  cin.get();
  cin.get(statiePlecare,30);

  cout<<endl<<" Introduceti statie de sosire ";
  char *statieSosire=new char[30];
  cin.get();
  cin.get(statieSosire,30);

  cout<<endl<<" Introduceti zi de plecare ";
  int ziPlecare;
  cin>>ziPlecare;

  cout<<endl<<" Introduceti luna plecare ";
  int lunaPlecare;
  cin>>lunaPlecare;

  cout<<endl<<" Introduceti an plecare ";
  int anPlecare;
  cin>>anPlecare;

  cout<<endl<<" Introduceti ora plecare ";
  int oraPlecare;
  cin>>oraPlecare;

  cout<<endl<<" Introduceti minute plecare ";
  int minutePlecare;
  cin>>minutePlecare;


  cout<<endl<<" Introduceti durata calatoriei ";
  int durataCalatorie;
  cin>>durataCalatorie;

  cout<<endl<<" Introduceti distanta parcursa ";
  int distantaParcursa;
  cin>>distantaParcursa;
  if(distantaParcursa<100)
    {

     cout<<endl<<" Alegeti clasa biletului ";
     cin>>tip[n];

     int codTren=1;
     if(tip[n]==1)
            {
                int pretBilet;
                pretBilet=(distantaParcursa*(39))/100;
                pretBilet=pretBilet+(20/100)*pretBilet;
                bilete[n]=new ClasaUnu(statiePlecare,statieSosire,ziPlecare,lunaPlecare,anPlecare,oraPlecare,minutePlecare,codTren,durataCalatorie,distantaParcursa,pretBilet,0,"Pizza","Confort ridicat");
                n++;
                Bilet **bilete=new Bilet*[n];
            }
        else if(tip[n]==2)
            {
            int pretBilet;
            pretBilet=(distantaParcursa*(39))/100;
            bilete[n]=new ClasaDoi(statiePlecare,statieSosire,ziPlecare,lunaPlecare,anPlecare,oraPlecare,minutePlecare,codTren,durataCalatorie,distantaParcursa,pretBilet,0," Confort Scazut");
            n++;
            Bilet **bilete=new Bilet*[n];
            }
    }
   else if(distantaParcursa>=100)
   {
    cout<<endl<<" Introduceti locul dorit ";
    int locDorit;
    cin>>locDorit;

    //2 = inter regio;
    int codTren=2;

    cout<<endl<<" Alegeti clasa biletului ";
    cin>>tip[n];
    if(tip[n]==1)
            {
            int pretBilet;
            pretBilet=(distantaParcursa*(7))/10;

            bilete[n]=new ClasaUnu(statiePlecare,statieSosire,ziPlecare,lunaPlecare,anPlecare,oraPlecare,minutePlecare,codTren,durataCalatorie,distantaParcursa,pretBilet,locDorit," Pizza "," Confort Ridicat ");
            n++;
            Bilet **bilete=new Bilet*[n];
            }
      else
        {
        int pretBilet;
        pretBilet=(distantaParcursa*(7))/10;
        bilete[n]=new ClasaDoi(statiePlecare,statieSosire,ziPlecare,lunaPlecare,anPlecare,oraPlecare,minutePlecare,codTren,durataCalatorie,distantaParcursa,pretBilet,locDorit,"Confort scazut" );
        n++;
        Bilet **bilete=new Bilet*[n];
        }
   }
  }
 }
 for(int i=1;i<=n;i++) bilete[i]->afisare();

 cout<<" Introduceti tip de tren ";
 int tipTren;
 cin>>tipTren;
 for(int i=1;i<n;i++)
    if(tip[i]==tipTren)
        bilete[i]->afisare();

 cout<<" Introduecti distanta ";
 int distanta;
 cin>>distanta;
 for(int i=1;i<n;i++)
    if(bilete[i]->getDistanta()>distanta)
         bilete[i]->afisare();

 int serieBilet;
 int tipTren1;
 cin>>tipTren1;
 int numarBilet1;
 cin>>numarBilet1;
 for(int i=1;i<=n;i++)
   if(tipTren1=tip[i] && numarBilet1==i)
      bilete[i]->afisare();

}
