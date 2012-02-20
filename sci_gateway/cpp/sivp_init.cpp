/***********************************************************************
 * SIVP - Scilab Image and Video Processing toolbox
 * Copyright (C) 2005  Vincent Etienne
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 ***********************************************************************/


#include "common.h"
#include "gw_sivp.h"

char sSIVP_PATH[MAX_FILENAME_LENGTH];

/***************************************************
 * this function should be called when SIVP is loaded
 ***************************************************/
int int_sivp_init(char * fname)
{

  int mR, nR, lR;

  CheckRhs(1,1);
  CheckLhs(0,1);

  //get the directory where SIVP is intalled
  GetRhsVar(1, "c", &mR, &nR, &lR);
  strncpy(sSIVP_PATH, cstk(lR), MAX_FILENAME_LENGTH);

  cvSetErrMode(CV_ErrModeParent);
  memset(OpenedAviCap, 0, sizeof(OpenedAvifileCap));

  return 0;

}