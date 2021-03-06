//ofApp.h
//Jordan Baxter

#pragma once

#include "ofMain.h"
#include "Hud.h"
#include "Ball.h"
#include "Paddle.h"
#include "Bullet.h"

class ofApp : public ofBaseApp{

	public:

		Hud* hud;
		Paddle* p1;
		Paddle* p2;
		vector<Ball*> balls;
		vector<Bullet*> bullets;
		ofFile hiScore;
		string hiScoreString;

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
