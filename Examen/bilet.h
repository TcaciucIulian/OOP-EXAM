// Tcaciuc Iulian-Marius, 143, GNU CCC Compiler
#ifndef BILET_H_INCLUDED
#define BILET_H_INCLUDED
#include <string.h>
using namespace std;
class Bilet
 {
  protected :
     char *statiePlecare;
     char *statieSosire;
     int ziPlecare;
     int lunaPlecare;
     int anPlecare;
     int oraPlecare;
     int minutePlecare;
     int codTren;
     int durataCalatorie;
     int distantaParcursa;
     int pretBilet;
     int locRezervat;
  public:
     Bilet();
     Bilet(char *,char*,int,int,int,int,int,int,int,int,int,int);
     virtual void afisare()
      {
       cout<<statiePlecare<<" "<<statieSosire<<" "<<ziPlecare<<" "<<lunaPlecare<<" "<<oraPlecare<<" "<<minutePlecare<<" "<<codTren<<" "<<durataCalatorie<<" "<<distantaParcursa<<" "<<pretBilet;
      }
     virtual ~Bilet();
     int getDistanta()
     {
         return distantaParcursa;
     }
 };
Bilet::Bilet(char *sir1,char *sir2, int zPlc,int lPlc,int aPlc,int oPlc,int mPlc,int cTren,int dCalatorie,int dParcursa,int pBilet, int lRezervat)
{
 statiePlecare=new char[strlen(sir1)+1];
 strcpy(statiePlecare,sir1);
 statieSosire=new char[strlen(sir2)+1];
 strcpy(statieSosire,sir2);
 ziPlecare=zPlc;
 lunaPlecare=lPlc;
 anPlecare=aPlc;
 oraPlecare=oPlc;
 minutePlecare=mPlc;
 codTren=cTren;
 durataCalatorie=dCalatorie;
 distantaParcursa=dParcursa;
 pretBilet=pBilet;
 locRezervat=lRezervat;
}
Bilet::~Bilet()
{
 if(statiePlecare!=NULL) delete[] statiePlecare;
 if(statieSosire!=NULL) delete[] statieSosire;

}

#endif // BILET_H_INCLUDED
