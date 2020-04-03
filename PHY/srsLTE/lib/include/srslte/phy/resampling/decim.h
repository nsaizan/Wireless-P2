/*
 * Copyright 2013-2019 Software Radio Systems Limited
 *
 * This file is part of srsLTE.
 *
 * srsLTE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsLTE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

/******************************************************************************
 *  File:         decim.h
 *
 *  Description:  Integer linear decimation
 *
 *  Reference:
 *****************************************************************************/

#ifndef SRSLTE_DECIM_H
#define SRSLTE_DECIM_H

#include "srslte/config.h"

SRSLTE_API void srslte_decim_c(cf_t* input, cf_t* output, int M, int len);

SRSLTE_API void srslte_decim_f(float* input, float* output, int M, int len);

#endif // SRSLTE_DECIM_H
