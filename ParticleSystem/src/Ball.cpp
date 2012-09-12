//
//  Ball.cpp
//  particlesystem
//
//  Created by Yoshioka Fumiki on 12/09/10.
//
//

#include "Ball.h"

Ball::Ball(){
    // Set the initial color
    color.set( ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    
    // Initial x position of the ball
    x = ofRandom( ofGetWindowWidth() );
    
    // Initial y position of the ball
    y = ofRandom( ofGetWindowHeight() );
}

void Ball::moveTo(){
}

void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofCircle( x, y, 30);
}
