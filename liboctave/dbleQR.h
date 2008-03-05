/*

Copyright (C) 1994, 1995, 1996, 1997, 2000, 2002, 2004, 2005, 2006,
              2007 John W. Eaton

This file is part of Octave.

Octave is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

Octave is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with Octave; see the file COPYING.  If not, see
<http://www.gnu.org/licenses/>.

*/

// updating/downdating by Jaroslav Hajek 2008

#if !defined (octave_QR_h)
#define octave_QR_h 1

#include <iostream>

#include "dMatrix.h"
#include "dColVector.h"
#include "dRowVector.h"

class
OCTAVE_API
QR
{
public:

  enum type
    {
      std,
      raw,
      economy
    };

  QR (void) : q (), r () { }

  QR (const Matrix&, QR::type = QR::std);

  QR (const Matrix& q, const Matrix& r);

  QR (const QR& a) : q (a.q), r (a.r) { }

  QR& operator = (const QR& a)
    {
      if (this != &a)
	{
	  q = a.q;
	  r = a.r;
	}
      return *this;
    }

  ~QR (void) { }

  void init (const Matrix&, QR::type);

  Matrix Q (void) const { return q; }

  Matrix R (void) const { return r; }

  void update (const Matrix& u, const Matrix& v);

  void insert_col (const Matrix& u, octave_idx_type j);

  void delete_col (octave_idx_type j);

  void insert_row (const Matrix& u, octave_idx_type j);

  void delete_row (octave_idx_type j);

  void economize (void);

  friend std::ostream&  operator << (std::ostream&, const QR&);

protected:

  Matrix q;
  Matrix r;
};

#endif

/*
;;; Local Variables: ***
;;; mode: C++ ***
;;; End: ***
*/
