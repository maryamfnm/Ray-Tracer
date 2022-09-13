//
// Created by Maryam Forootaninia on 9/20/19.
//

#include "Mtcolor.h"
#include <string>
using namespace std;

Mtcolor::Mtcolor() {}

double Mtcolor::getOdr() {
    return this->Odr;
}

void Mtcolor::setOdr(double odr) {
    this->Odr = odr;
}

double Mtcolor::getOdg() {
    return this->Odg;
}

void Mtcolor::setOdg(double odg) {
    this->Odg = odg;
}

double Mtcolor::getOdb() {
    return this->Odb;
}

void Mtcolor::setOdb(double odb) {
    this->Odb = odb;
}

double Mtcolor::getOsr() {
    return this->Osr;
}

void Mtcolor::setOsr(double osr) {
    this->Osr = osr;
}

double Mtcolor::getOsg() {
    return this->Osg;
}

void Mtcolor::setOsg(double osg) {
    this->Osg = osg;
}

double Mtcolor::getOsb() {
    return this->Osb;
}

void Mtcolor::setOsb(double osb) {
    this->Osb = osb;
}

double Mtcolor::getKa() {
    return ka;
}

void Mtcolor::setKa(double ka) {
    this->ka = ka;
}

double Mtcolor::getKd() {
    return this->kd;
}

void Mtcolor::setKd(double kd) {
    this->kd = kd;
}

double Mtcolor::getKs() {
    return this->ks;
}

void Mtcolor::setKs(double ks) {
    this->ks = ks;
}

double Mtcolor::getN() {
    return this->n;
}

void Mtcolor::setN(double n) {
    this->n = n;
}

double Mtcolor::getAlpha() {
    return this->alpha;
}

void Mtcolor::setAlpha(double _alpa) {
    this->alpha = _alpa;
}

double Mtcolor::getEta() {
    return this->eta;
}

void Mtcolor::setEta(double _eta) {
    this->eta = _eta;
}

