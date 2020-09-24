// Tcaciuc Iulian-Marius, 143, GNU CCC Compiler
#ifndef CLASAUNU_H_INCLUDED
#define CLASAUNU_H_INCLUDED
#include "bilet.h"
class ClasaUnu : public Bilet
 {
   private:
     char *confort;
     char *meniu;
   public :
     ClasaUnu();
     ClasaUnu(char *sir1,char *sir2, int zPlc,int lPlc,int aPlc,int oPlc,int mPlc,int cTren,int dCalatorie,int dParcursa,int pBilet, int lRezervat,char *m,char *c):Bilet(sir1,sir2,zPlc,lPlc,aPlc,oPlc,mPlc,cTren,dCalatorie,dParcursa,pBilet,lRezervat),confort(c),meniu(m) {};
     void afisare()
      {
       cout<<statiePlecare<<" "<<statieSosire<<" "<<ziPlecare<<" "<<lunaPlecare<<" "<<oraPlecare<<" "<<minutePlecare<<" "<<codTren<<" "<<durataCalatorie<<" "<<distantaParcursa<<" "<<pretBilet<<" ";
       cout<<confort<<" "<<meniu<<endl;
      }
 };

 class ClasaDoi : public Bilet
  {
   private:
     char *confort;
   public:
     ClasaDoi();
     ClasaDoi(char *sir1,char *sir2, int zPlc,int lPlc,int aPlc,int oPlc,int mPlc,int cTren,int dCalatorie,int dParcursa,int pBilet, int lRezervat,char *c):Bilet(sir1,sir2,zPlc,lPlc,aPlc,oPlc,mPlc,cTren,dCalatorie,dParcursa,pBilet,lRezervat),confort(c){};
     void afisare()
      {
        cout<<statiePlecare<<" "<<statieSosire<<" "<<ziPlecare<<" "<<lunaPlecare<<" "<<oraPlecare<<" "<<minutePlecare<<" "<<codTren<<" "<<durataCalatorie<<" "<<distantaParcursa<<" "<<pretBilet;
        cout<<confort<<endl;
      }
  };

#endif // CLASAUNU_H_INCLUDED
