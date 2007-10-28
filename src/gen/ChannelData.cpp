/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//---THIS FILE WAS AUTOMATICALLY GENERATED.  DO NOT EDIT---//

//To change this file, alter the niftools/docsys/gen_niflib.py Python script.

#include "../../include/gen/ChannelData.h"
using namespace Niflib;

//Constructor
ChannelData::ChannelData() : type((unsigned int)0), unknownFlag((unsigned int)0), bitsPerChannel((byte)0), unknownByte1((byte)0) {};

//Copy Constructor
ChannelData::ChannelData( const ChannelData & src ) {
	*this = src;
};

//Copy Operator
ChannelData & ChannelData::operator=( const ChannelData & src ) {
	this->type = src.type;
	this->unknownFlag = src.unknownFlag;
	this->bitsPerChannel = src.bitsPerChannel;
	this->unknownByte1 = src.unknownByte1;
	return *this;
};

//Destructor
ChannelData::~ChannelData() {};
