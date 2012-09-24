#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // 輪郭をスムーズに（アンチエイリアス）
    ofEnableSmoothing();
    
    // フレームレートを固定
    ofSetFrameRate(60);
    
    ofSetVerticalSync(true);
    
    // Ballインスタンスを生成
    ball = new Ball();
    

}

//--------------------------------------------------------------
void testApp::update(){
    
    // ボールの位置を更新
    ball->moveTo(mouseX, mouseY);
    
}

//--------------------------------------------------------------
void testApp::draw(){

    ofBackgroundGradient(ofColor::white,ofColor::gray, OF_GRADIENT_CIRCULAR);

    ball->draw();
    
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}