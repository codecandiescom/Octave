/*

Copyright (C) 1996, 1997 John W. Eaton

This file is part of Octave.

Octave is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

Octave is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, write to the Free
Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301, USA.

*/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

// Instantiate MArrays of double values.

#include "f77-fcn.h"

extern "C"
{
  F77_RET_T
  F77_FUNC (xdnrm2, XDNRM2) (const octave_idx_type&, const double*,
			     const octave_idx_type&, double&);
}

#include "MArray.h"
#include "MArray.cc"

template <>
double
MArray<double>::norm (double p) const
{
  MARRAY_NORM_BODY (double, xdnrm2, XDNRM2);
}

template class MArray<double>;

INSTANTIATE_MARRAY_FRIENDS (double)

#include "MArray2.h"
#include "MArray2.cc"

template class MArray2<double>;

INSTANTIATE_MARRAY2_FRIENDS (double)

#include "MArrayN.h"
#include "MArrayN.cc"

template class MArrayN<double>;

INSTANTIATE_MARRAYN_FRIENDS (double)

#include "MDiagArray2.h"
#include "MDiagArray2.cc"

template class MDiagArray2<double>;

INSTANTIATE_MDIAGARRAY2_FRIENDS (double)

/*
;;; Local Variables: ***
;;; mode: C++ ***
;;; End: ***
*/
