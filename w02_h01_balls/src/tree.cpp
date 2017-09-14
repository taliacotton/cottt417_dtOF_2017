//
//  tree.cpp
//  hw02_AnimationPractice
//
//  Created by T Co on 9/10/17.
//
//

#include "tree.h"

tree::tree(){
    
}

void tree::setup(int _speed, int _xPos, int _trunkWidth){
    trunkWidth = _trunkWidth;
    trunkHeight = 260;
    x = _xPos;
    y = ofGetHeight() - ofGetHeight()/4 - trunkHeight;

    speed = _speed;

}

void tree::update(){
//    if (x>ofGetWidth()){
//        x = 0 - width;
//    }
    
    x+=speed;
}

void tree::draw(){
    ofSetColor(87,69,51);
    ofDrawRectangle(x, y, trunkWidth, trunkHeight);
    
    //QUESTION HOW TO MAKE LEAVES NOT RANDOM EACH TIME DO I NEED TO MAKE AN ARRAY AND KEEP TRACK OF EACH ONE'S POSITION?
        
    ofVec2f leafPos(x+trunkWidth/2, y);
    
    for (int t=0; t<numLeaves; t++){
        float offsetDistance = ofRandom(minOffset, maxOffset);
        float rotation = ofRandom(360);
        
        ofColor leafColor1(253,111,39, alpha);
        ofColor leafColor3(245,200,22, alpha);

        
        ofVec2f leafOffset(offsetDistance, 0.0);
        leafOffset.rotate(rotation+90);
        
        ofVec2f p1(0, 15.0);
//        ofVec2f p2(40, 0);
//        ofVec2f p3(0, -15.0);
        
        p1 += leafPos + leafOffset;
//        p2 += leafPos + leafOffset;
//        p3 += leafPos + leafOffset;
        

        ofColor inBetween = leafColor1.getLerped(leafColor3, ofRandom(1.0));
        ofSetColor(inBetween, alpha);
        
        ofDrawCircle(p1, radius);

//        ofDrawTriangle(p1, p2, p3);

    }
    
    
    
    
}
