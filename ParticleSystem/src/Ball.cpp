#include "Ball.h"
Ball::Ball(){

    // 色
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
    
    // ボールのX座標
    x = ofRandom(ofGetWindowWidth());
    
    // ボールのY座標
    y = ofRandom(ofGetWindowHeight());

}

void Ball::moveTo(float targetX, float targetY){
    // 徐々に近づいていく
    x += ( targetX - x )*0.1;
    y += ( targetY - y )*0.1;
}

void Ball::draw(){
    ofSetColor(color);
    ofFill();
    ofCircle( x, y, 30);
}

