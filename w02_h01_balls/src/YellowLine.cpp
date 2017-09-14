//
//  YellowLine.cpp
//  hw02_AnimationPractice
//
//  Created by T Co on 9/9/17.
//
//

#include "YellowLine.h"


YellowLine::YellowLine(){
    
}

void YellowLine::setup(int _startPos){
    width = 300;
    height = 20;
//    x = 0 - width;
    x = _startPos;
    y = ofGetHeight() - ofGetHeight()/5;
    
    speed = 30;
    
}

void YellowLine::update(){
    if (x>ofGetWidth()){
//        YellowLine.clear();
    }
    
    x+=speed;
}

void YellowLine::draw(){
    
    ofLog(OF_LOG_NOTICE) << speed;
    
    ofSetColor(236,225,127);
    ofDrawRectangle(x, y, width, height);
}

void YellowLine::mousePressed(int x, int y, int button){  //hold down the mouse, retrigger once it's down
    
//    if (button == OF_MOUSE_BUTTON_LEFT){
//        speed+=20;
//    }
//    
//    if (button == OF_MOUSE_BUTTON_RIGHT){
//        speed-=20;
//    }
    
}
