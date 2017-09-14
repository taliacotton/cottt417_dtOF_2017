#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    float slowTreeSpeed = 3;
    float fastTreeSpeed = 5;
    
    float speed = 20;
    
    ofBackground(214,234,252);
    //NOTE TO TALIA: Once you get this working add style by making sky ellipses with transparency and lerp color
    

    

    YellowLine firstLine;
    yellowLinesVector.push_back(firstLine);
    
    for (int i=0;i<yellowLinesVector.size();i++){
        yellowLinesVector[i].setup(0-200);
    }
    
    tree slowestTree;
    slowestTree.setup(2, 0, 20);
    slowestTrees.push_back(slowestTree);
    
    tree slowTree;
    slowTree.setup(3, 0, 25);
    slowTrees.push_back(slowTree);
    
    tree fastTree;
    fastTree.setup(4, 0, 30);
    fastTrees.push_back(fastTree);
    

    
//    fastTrees.push_back(aTree);
    
//    for (int i=0;i<slowTrees.size();i++){
//        slowTrees[i].setup(5, i*200);
//    }

//    ofLog(OF_LOG_NOTICE) << yellowLinesVector.size();
//    ofLog(OF_LOG_NOTICE) << yellowLinesVector[0].x;
    

   }

//--------------------------------------------------------------
void ofApp::update(){
    
    ofLog(OF_LOG_NOTICE) << constantSpeed;
    

//    for (int i=0;i<slowestTrees.size();i++){
//        ofLog(OF_LOG_NOTICE) << slowestTrees[i].x;
//    }
    
    //NOTE TO TALIA Make the appearance of trees more random
    
    for (int i = 0; i<slowestTrees.size(); i++){
        if (slowestTrees[i].x > ofGetWidth()){
            slowestTrees.erase(slowestTrees.begin()+i);
        }
        if (slowestTrees[i].x == pow(slowestTrees[i].speed, 2) * constantSpeed){
            tree aTree;
            aTree.setup(2, 0, 20);
            slowestTrees.push_back(aTree);
            
        }
    }
    
    for (int i = 0; i<slowTrees.size(); i++){
        if (slowTrees[i].x > ofGetWidth()){
            slowTrees.erase(slowTrees.begin()+i);
        }
        if (slowTrees[i].x == pow(slowTrees[i].speed, 2) * constantSpeed){
            tree aTree;
            aTree.setup(3, 0, 25);
            slowTrees.push_back(aTree);

        }
    }
    
    for (int i = 0; i<fastTrees.size(); i++){
        if (fastTrees[i].x > ofGetWidth()){
            fastTrees.erase(fastTrees.begin()+i);
        }
        if (fastTrees[i].x == pow(fastTrees[i].speed, 2) * constantSpeed){
            tree aTree;
            aTree.setup(5, 0, 30);
            fastTrees.push_back(aTree);
            
        }
    }
    
    for (int i=0;i<yellowLinesVector.size();i++){
        
        //if it reaches the end erase that item
        if (yellowLinesVector[i].x > ofGetWidth()){
            yellowLinesVector.erase(yellowLinesVector.begin()+i);
        }
        
         // if it reaches a certain point add a new item
         if (yellowLinesVector[i].x == 610){
            YellowLine tempLine;
            tempLine.setup(0 - 200);
            yellowLinesVector.push_back(tempLine);
        }
        
    }
    
    for (int i=0;i<yellowLinesVector.size();i++){
        yellowLinesVector[i].update();
    }
    
    for (int i=0;i<slowestTrees.size();i++){
        slowestTrees[i].update();
    }
    
    for (int i=0;i<slowTrees.size();i++){
        slowTrees[i].update();
    }
    
    for (int i=0;i<fastTrees.size();i++){
        fastTrees[i].update();
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    

    

    ofColor sky1(206,234,255, 110);
    ofColor sky2(229,250,255, 110);
    
    for (int i=0;i<30;i++){
        for (int j=0;j<30;j++){
            ofColor inBetween = sky1.getLerped(sky2, ofRandom(1.0));
            
            ofSetColor(inBetween);
            ofDrawCircle(40*i, 40*j, 100);
            
        }
    }

    
    
    ofSetColor(50,54,57);
    ofDrawRectangle(0, ofGetHeight() - ofGetHeight() / 4, ofGetWidth(), ofGetHeight() / 4);

    
    
    for (int i=0;i<yellowLinesVector.size();i++){
        yellowLinesVector[i].draw();
    }
    
    for (int i=0;i<slowestTrees.size();i++){
        slowestTrees[i].draw();
    }
    
    for (int i=0;i<slowTrees.size();i++){
        slowTrees[i].draw();
    }
    
    for (int i=0;i<fastTrees.size();i++){
        fastTrees[i].draw();
    }
    
//    for (int i=0;i<NLINES;i++){
//        yellowLine[i].draw();
//    }
    



    
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
void ofApp::mousePressed(int x, int y, int button){  //hold down the mouse, retrigger once it's down

    if (button == OF_MOUSE_BUTTON_LEFT){
        constantSpeed*=20;
    }
    
    if (button == OF_MOUSE_BUTTON_RIGHT){
        constantSpeed*=20;
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){ // only happens once
    
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
