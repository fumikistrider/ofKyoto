//
//  Particle.cpp
//  particlesystem
//
//  Created by Yoshioka Fumiki on 12/09/12.
//
//

#include "Particle.h"

Particle::Particle()
{
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    speedX = ofRandom(-100, 100);
    speedY = ofRandom(-100, 100);
    dim = 20;
}

Particle::Particle(float _x, float _y, int _dim) {
    x = _x;
    y = _y;
    dim = _dim;
    speedX = ofRandom(-10, 10);
    speedY = ofRandom(-10, 10);

    int col = ofRandom(5);
    switch (col) {
        case 0:
            color.setHex(0x2AE80C);
            break;
        case 1:
            color.setHex(0x0DFF36);
            break;
        case 2:
            color.setHex(0x7CFF00);
            break;
        case 3:
            color.setHex(0xC4E80C);
            break;
        case 4:
            color.setHex(0xFFF20D);
            break;
            
        default:
            break;
    }
}

void Particle::update()
{
    if(x < 0 ){
        x = 0;
        speedX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    }
    if(y < 0 ){
        y = 0;
        speedY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        speedY *= -1;
    } 
    x+=speedX;
    y+=speedY;
}

void Particle::draw()
{
    for(int i = dim; i > 0; i--){
        //ofSetColor(color);
        ofEnableAlphaBlending();
        ofSetColor(color,24);
        ofCircle(x, y, dim - i);
        ofDisableAlphaBlending();
    }

}