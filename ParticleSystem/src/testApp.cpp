#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // 輪郭をスムーズに（アンチエイリアス）
    ofEnableSmoothing();
    
    // フレームレートを固定
    ofSetFrameRate(60);

    // 最初のボールのX座標
    xPos = ofGetWindowWidth()*0.5;
    
    // 最初のボールのY座標
    yPos = ofGetWindowHeight()*0.5;

    pNum = 150;
    particles = new Particle*[pNum];
    for (int i = 0; i < pNum; i++) {        
        particles[i] = new Particle(ofRandom(300,400), ofRandom(200,300), ofRandom(10,40));
    }


}

//--------------------------------------------------------------
void testApp::update(){

    xPos += ( mouseX - xPos )*0.1;
    yPos += ( mouseY - yPos )*0.1;
    
    for (int i = 0; i < pNum; i++) {
        particles[i]->update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){

    ofBackgroundGradient(ofColor::white,ofColor::gray, OF_GRADIENT_CIRCULAR);
    
    ofSetHexColor(0xFFF20D);
    ofFill();
    ofCircle( xPos, yPos, 30);
    
    for (int i = 0; i < pNum; i++) {
        particles[i]->draw();
    }
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