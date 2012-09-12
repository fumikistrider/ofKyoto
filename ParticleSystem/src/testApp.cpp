#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // 輪郭をスムーズに（アンチエイリアス）
    ofEnableSmoothing();
    
    // フレームレートを固定
    ofSetFrameRate(30);

    // 最初のボールのX座標
    xPos = ofGetWindowWidth()*0.5;
    
    // 最初のボールのY座標
    yPos = ofGetWindowHeight()*0.5;
}

//--------------------------------------------------------------
void testApp::update(){

    xPos += ( mouseX - xPos )*0.1;
    yPos += ( mouseY - yPos )*0.1;
}

//--------------------------------------------------------------
void testApp::draw(){

    ofBackgroundGradient(ofColor::white,ofColor::yellow, OF_GRADIENT_CIRCULAR);
    
    ofSetColor(200,200,124);
    ofFill();
    ofCircle( xPos, yPos, 30);
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