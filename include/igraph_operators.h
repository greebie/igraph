/* -*- mode: C -*-  */
/* 
   IGraph library.
   Copyright (C) 2009  Gabor Csardi <csardi@rmki.kfki.hu>
   MTA RMKI, Konkoly-Thege Miklos st. 29-33, Budapest 1121, Hungary
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA 
   02110-1301 USA

*/

#ifndef IGRAPH_OPERATORS_H
#define IGRAPH_OPERATORS_H

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS /* empty */
# define __END_DECLS /* empty */
#endif

#include "igraph_constants.h"
#include "igraph_types.h"
#include "igraph_datatype.h"
#include "igraph_vector_ptr.h"

__BEGIN_DECLS

/* -------------------------------------------------- */
/* Graph operators                                    */
/* -------------------------------------------------- */

int igraph_disjoint_union(igraph_t *res, 
			  const igraph_t *left, const igraph_t *right);
int igraph_disjoint_union_many(igraph_t *res, 
			       const igraph_vector_ptr_t *graphs);
int igraph_union(igraph_t *res, const igraph_t *left, const igraph_t *right);
int igraph_union_many(igraph_t *res, const igraph_vector_ptr_t *graphs);
int igraph_intersection(igraph_t *res, 
			const igraph_t *left, const igraph_t *right);
int igraph_intersection_many(igraph_t *res, const igraph_vector_ptr_t *graphs);
int igraph_difference(igraph_t *res, 
		      const igraph_t *orig, const igraph_t *sub);
int igraph_complementer(igraph_t *res, const igraph_t *graph, 
			igraph_bool_t loops);
int igraph_compose(igraph_t *res, const igraph_t *g1, const igraph_t *g2);

__END_DECLS

#endif