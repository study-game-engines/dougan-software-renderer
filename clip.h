

#ifndef SR_CLIP_H
#define SR_CLIP_H

/**
 * sr_clip.h
 * --------
 * defines functions to clip a polygon of vectors (x, y, z, w) in
 * homogeneous space
 * 
 */

#include "sr.h"

/*********************************************************************
 *                                                                   *
 *                        public declarations                        *
 *                                                                   *
 *********************************************************************/

void
clip_poly(float* src, int* n_pts, 
          int n_attr, uint8_t clip_flags);

void
clip_test(float* pt, uint8_t* flags);

#endif /* SR_CLIP_H */
