#include "ofApp.h"
#include "Hud.h"
#include "Ball.h"
#include "Paddle.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0,0,0);
	hud = new Hud();
	p1 = new Paddle();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	hud->draw(p1);
	if (hud->getState() == "play") {
		p1->draw();
	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == OF_KEY_RETURN && hud->getState() == "start") {
		hud->changeState("play");
	}
	else if (hud->getState() == "play") {
		if (key == 'w') {
			p1->moveUp();
		}
		else if (key == 's') {
			p1->moveDown();
		}
	}
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
	hud->resize();
	p1->changeSize();
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
