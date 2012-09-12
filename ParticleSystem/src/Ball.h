//
//  Ball.h
//  particlesystem
//
//  Created by Yoshioka Fumiki on 12/09/10.
//
//

#ifndef __particlesystem__Ball__
#define __particlesystem__Ball__

#include "ofMain.h"

class Ball {
public:
    // Constructor
    Ball();
    
    // Methods
    void moveTo(int,int);
    void draw();
    
    // Properties
    int x;
    int y;
    ofColor color;
};

#endif /* defined(__particlesystem__Ball__) */
