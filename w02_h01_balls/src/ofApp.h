#pragma once

#include "ofMain.h"
#include "YellowLine.h"
#include "tree.h"

//#define NTREES 4

class ofApp : public ofBaseApp{

	public:
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
    
    int constantSpeed = 20;
    
    vector <YellowLine> yellowLinesVector;
    vector <tree> slowestTrees;
    vector <tree> slowTrees;
    vector <tree> fastTrees;
    
//        YellowLine yellowLine[NLINES];
    
//        vector <tree> mytree;

		
};
