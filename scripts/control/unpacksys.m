# Copyright (C) 1996 A. Scottedward Hodel 
#
# This file is part of Octave. 
#
# Octave is free software; you can redistribute it and/or modify it 
# under the terms of the GNU General Public License as published by the 
# Free Software Foundation; either version 2, or (at your option) any 
# later version. 
# 
# Octave is distributed in the hope that it will be useful, but WITHOUT 
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License 
# for more details.
# 
# You should have received a copy of the GNU General Public License 
# along with Octave; see the file COPYING.  If not, write to the Free 
# Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. 
 
function [a,b,c,d] = unpacksys(syst)
  # [a,b,c,d] = unpacksys(sys)
  # Obsolete.  Use sys2ss instead.

  # Written by David Clem August 19, 1994
  # $Revision: 2.0.0.2 $

  warning("unpacksys obsolete; calling sys2ss");
  [a,b,c,d] = sys2ss(syst);

endfunction

