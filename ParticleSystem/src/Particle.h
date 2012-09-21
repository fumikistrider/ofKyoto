//
//  Particle.h
//  particlesystem
//
//  Created by Yoshioka Fumiki on 12/09/12.
//
//

#ifndef __particlesystem__Particle__
#define __particlesystem__Particle__

#include "ofMain.h"

class Particle{
public:
    Particle();
    Particle(float,float,int);
    
    void update();
    void draw();
    
    float x;
    float y;
    float speedX;
    float speedY;
    int dim;
    ofColor color;
    
};
#endif /* defined(__particlesystem__Particle__) */
