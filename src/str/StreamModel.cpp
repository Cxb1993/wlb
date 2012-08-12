/*
 * StreamModel.cpp
 * Andreas Bülling, 2012
 * andreas@bulling.se
 *
 * Abstract mother class for streaming models.
 */

#include "StreamModel.h"

StreamModel::StreamModel() {
}

StreamModel::~StreamModel() {
	// TODO Auto-generated destructor stub
}

void StreamModel::registerF(double ****f){
	this->f = f;
}

void StreamModel::registerN(struct LatticeModel::dimension &n){
	this->n = n;
}

