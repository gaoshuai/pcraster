#ifndef INCLUDED_PCRXML_BOOLEAN
#define INCLUDED_PCRXML_BOOLEAN



#ifndef INCLUDED_STDDEFX
#include "stddefx.h"
#define INCLUDED_STDDEFX
#endif

// Library headers.

// PCRaster library headers.

// Module headers.
#ifndef INCLUDED_PCRXML_SIMPLEATTR
#include "pcrxml_simpleattr.h"
#define INCLUDED_PCRXML_SIMPLEATTR
#endif

namespace pcrxml {



//! XML Schema compliant boolean
typedef SimpleAttr<bool>   Boolean;

} // namespace pcrxml

#endif
