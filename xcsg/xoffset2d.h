// BeginLicense:
// Part of: xcsg - XML based Constructive Solid Geometry
// Copyright (C) 2017 Carsten Arnholm
// All rights reserved
//
// This file may be used under the terms of either the GNU General
// Public License version 2 or 3 (at your option) as published by the
// Free Software Foundation and appearing in the files LICENSE.GPL2
// and LICENSE.GPL3 included in the packaging of this file.
// 
// This file is provided "AS IS" with NO WARRANTY OF ANY KIND,
// INCLUDING THE WARRANTIES OF DESIGN, MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE. ALL COPIES OF THIS FILE MUST INCLUDE THIS LICENSE.
// EndLicense:
   
#ifndef XOFFSET2D_H
#define XOFFSET2D_H

#include "xshape2d.h"

class xoffset2d : public xshape2d {
public:
   xoffset2d();
   xoffset2d(const cf_xmlNode& node);
   virtual ~xoffset2d();

   virtual size_t nbool();

   std::shared_ptr<clipper_profile> create_clipper_profile(const carve::math::Matrix& t = carve::math::Matrix()) const;
   std::shared_ptr<carve::mesh::MeshSet<3>> create_carve_mesh(const carve::math::Matrix& t = carve::math::Matrix()) const;

private:
   double m_delta;    // offset value
   bool   m_round;    // use rounded corners
   bool   m_chamfer;  // apply chamfer corners (ignored for m_round=true)
   std::unordered_set<std::shared_ptr<xshape2d>> m_incl;
};

#endif // XOFFSET2D_H
