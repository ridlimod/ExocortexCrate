#ifndef _FOUNDATION_H_
#define _FOUNDATION_H_

#ifdef NOMINMAX
    #undef NOMINMAX
    #include "Max.h"
    #define NOMINMAX
#else
    #include "Max.h"
#endif

#include <boost/smart_ptr.hpp>
#include <boost/format.hpp>
#include <boost/variant.hpp>

#include <utility>
#include <limits>

#include <set>
#include <vector>
#include <map>
#include <list>

#include <stdexcept>
#include <exception>

#include <string>

#include <math.h>
#include <float.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <map>

#include <Alembic/Abc/All.h>
#include <Alembic/AbcGeom/All.h>
#include <Alembic/AbcCoreHDF5/All.h>

typedef std::map<std::string,std::string> stringMap;
typedef std::map<std::string,std::string>::iterator stringMapIt;
typedef std::pair<std::string,std::string> stringPair;

#endif  // _FOUNDATION_H_
