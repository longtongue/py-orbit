//////////////////////////////// -*- C++ -*- //////////////////////////////
//
// FILE NAME
//   ParticleIdNumber.hh
//
// AUTHOR
//    S. Cousineau
//
// CREATED
//    02/13/2013
//
// DESCRIPTION
//    A subclass of the particle attributes class. This is container
//    for an id number for each macro-particle in the bunch.
//
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//
// INCLUDE FILES
//
///////////////////////////////////////////////////////////////////////////
#ifndef PARTICLE_IDNUMBER_H
#define PARTICLE_IDNUMBER_H

///////////////////////////////////////////////////////////////////////////
//
// INCLUDE FILES
//
///////////////////////////////////////////////////////////////////////////
#include <string>

///////////////////////////////////////////////////////////////////////////
//
// CLASS NAME
//    ParticleIdNumber
//
///////////////////////////////////////////////////////////////////////////
#include "ParticleAttributes.hh"

class ParticleIdNumber : public ParticleAttributes
{
public:
  //--------------------------------------
  //the public methods of the ParticleIdNumber class
  //--------------------------------------

  ParticleIdNumber(Bunch* bunch);
  ~ParticleIdNumber();

  //int& getIdNumber(int particle_index);

};

///////////////////////////////////////////////////////////////////////////
//
// END OF FILE
//
///////////////////////////////////////////////////////////////////////////

#endif