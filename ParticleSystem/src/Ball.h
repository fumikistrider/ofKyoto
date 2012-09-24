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
    // コンストラクタ
    Ball();
    
    // メソッド
    void moveTo(float, float);
    void draw();
    
    // プロパティ
    float x;
    float y;
    ofColor color;
    
    
};

#endif /* defined(__particlesystem__Ball__) */
