//
//  PutVega.cpp
//  RatioProtectivePut
//
//  Created by Aman on 2014-10-23.
//  Copyright (c) 2014 Aman. All rights reserved.
//

#include "PutVega.h"

//Calculate Euro vanilla Put Vega
double put_vega (const double S, const double K, const double r, const double v, const double T) {
    return S*norm_pdf(d_j(1, S, K, r, v, T))*sqrt(T);
}
