/*------------------------------------------------------------------------------
Copyright (C) 2004-2007 Hydro-Quebec

This file is part of CGNSOO

CGNSOO is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

CGNSOO is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with CGNSOO  If not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
------------------------------------------------------------------------------*/
#include "checkerror.H"

namespace CGNSOO
{
	
cgns_exception::~cgns_exception() throw()
{
}

cgns_uninitialized::~cgns_uninitialized() throw()
{
}

cgns_mismatch::~cgns_mismatch() throw()
{
}

cgns_wrongnode::~cgns_wrongnode() throw()
{
}

cgns_badargument::~cgns_badargument() throw()
{
}

cgns_notfound::~cgns_notfound() throw()
{
}

};
