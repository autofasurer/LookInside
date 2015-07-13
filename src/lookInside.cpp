#include "lookInside.h"

//--------------------------------------------------------------
void lookInside::setup(){
    
    ofBackground(0);
    light.enable();
    ofEnableDepthTest();
    //set sphere's sizes
    outer.set(100, 50);
    inner.set(30, 50);
    
    //set the clip plane
    
}

//--------------------------------------------------------------
void lookInside::update(){
    glClipPlane(GL_CLIP_PLANE0, planeEquation);
}

//--------------------------------------------------------------
void lookInside::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
    glEnable(GL_CLIP_PLANE0);
        ofSetColor(255, 0, 0);
        outer.drawFaces();
    glDisable(GL_CLIP_PLANE0);
    glDisable(GL_CULL_FACE);
   
    ofSetColor(0, 0, 255);
    inner.drawFaces();
}

//--------------------------------------------------------------
void lookInside::keyPressed(int key){

}

//--------------------------------------------------------------
void lookInside::keyReleased(int key){

}

//--------------------------------------------------------------
void lookInside::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void lookInside::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void lookInside::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void lookInside::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void lookInside::windowResized(int w, int h){

}

//--------------------------------------------------------------
void lookInside::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void lookInside::dragEvent(ofDragInfo dragInfo){ 

}
