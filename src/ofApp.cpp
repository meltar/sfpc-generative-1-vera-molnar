#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(500, 500);
    ofSetWindowPosition(10, 10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // todo
    // replace random margins with a random transform
    // add feature - randomly use vertical format
    // turn the main for loop into a more generic method
    float time = ofGetElapsedTimef();
    cout << (int)time << endl;
    
    ofSeedRandom((int)time);
    ofBackground(255,255,255);
//    ofSetRectMode(OF_RECTMODE_CENTER);

//    Save as SVG for pen plotting
//    ofBeginSaveScreenAsSVG("output.svg");
    float offset = 0;
    float xMargin = ofRandom(0, 20);
    float yMargin = ofRandom(0, 20);
    float winWidth = ofGetWidth() - 20;
    float winHeight = ofGetHeight() - 20;
    float stepw = winWidth/10.;
    float steph = winHeight/10.;
    int count = 10;
    float randomAngle = ofRandom(-3,3);
    
    for (int i = 0; i < count; i++){
        for (int j = 0; j < count/2; j++){
            float x = xMargin + i*stepw + stepw/2;
            float y = yMargin + j*steph + steph/2;
            
            ofPushMatrix();
            ofRotateZDeg(randomAngle);
            ofTranslate(x, y);
            float w = ofMap(2, 0, 3, stepw*0.3, stepw*0.95 );
            float h = ofMap(2, 0, 3, steph*0.3, steph*0.95 );
            float randomDirection = ofRandom(1,5);
            ofRotateZDeg(90*(int)randomDirection);
            
            ofSetColor(200, 0, 0);
            ofPolyline line;
            line.addVertex(-w/2, h/2);
            line.addVertex(w/2, h/2);
            line.addVertex(w/2, -h/2);
            line.addVertex((w/2-w/3), -h/2);
            line.addVertex((w/2-w/3), (-h/2+h*2/3));
            line.addVertex((-w/2+w/3), (-h/2+h*2/3));
            line.addVertex((-w/2+w/3), -h/2);
            line.addVertex(-w/2, -h/2);
            line.close();
            line.draw();
            ofPopMatrix();
        }
    }
    
    offset = ofGetHeight()/2;
    xMargin = ofRandom(0, 20);
    yMargin = ofRandom(0, 10);
    winWidth = ofGetWidth() - 20;
    winHeight = ofGetHeight() - 20;
    stepw = winWidth/10.;
    steph = winHeight/10.;
    randomAngle = ofRandom(-2,2);
    ofPushMatrix();
    ofTranslate(0,offset);
    
    for (int i = 0; i < count; i++){
        for (int j = 0; j < count/2; j++){
            float x = xMargin + i*stepw + stepw/2;
            float y = yMargin + j*steph + steph/2;
            
            ofPushMatrix();
            ofRotateZDeg(randomAngle);
            ofTranslate(x, y);
            float w = ofMap(2, 0, 3, stepw*0.3, stepw*0.95 );
            float h = ofMap(2, 0, 3, steph*0.3, steph*0.95 );
            float randomDirection = ofRandom(0,4);
            ofRotateZDeg(90*(int)randomDirection);
            
            ofSetColor(200, 0, 0);
            ofPolyline line;
            line.addVertex(-w/2, h/2);
            line.addVertex(w/2, h/2);
            line.addVertex(w/2, -h/2);
            line.addVertex((w/2-w/3), -h/2);
            line.addVertex((w/2-w/3), (-h/2+h*2/3));
            line.addVertex((-w/2+w/3), (-h/2+h*2/3));
            line.addVertex((-w/2+w/3), -h/2);
            line.addVertex(-w/2, -h/2);
            line.close();
            line.draw();
            ofPopMatrix();
        }
    }
    ofPopMatrix();
//    ofEndSaveScreenAsSVG();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
