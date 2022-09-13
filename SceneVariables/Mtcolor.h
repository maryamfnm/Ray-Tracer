//
// Created by Maryam Forootaninia on 9/20/19.
//

#ifndef ASSIGNMENT0_MTCOLOR_H
#define ASSIGNMENT0_MTCOLOR_H
#include <string>
using namespace std;

class Mtcolor {

    public:
        double Odr;
        double Odg;
        double Odb;
        double Osr;
        double Osg;
        double Osb;
        double ka;
        double kd;
        double ks;
        double n;
        double alpha;
        double eta;

    public:

        Mtcolor();

        double getOdr();

        void setOdr(double odr);

        double getOdg();

        void setOdg(double odg);

        double getOdb();

        void setOdb(double odb);

        double getOsr();

        void setOsr(double osr);

        double getOsg();

        void setOsg(double osg);

        double getOsb();

        void setOsb(double osb);

        double getKa();

        void setKa(double ka);

        double getKd();

        void setKd(double kd);

        double getKs();

        void setKs(double ks);

        double getN();

        void setN(double n);

        double getAlpha();

        void setAlpha(double _alpa);

        double getEta();

        void setEta(double _eta);
};
#endif
