//
//  YellowLine.hpp
//  hw02_AnimationPractice
//
//  Created by T Co on 9/9/17.
//
//

#ifndef YellowLine_h
#define YellowLine_h

#include "ofMain.h"

#include <stdio.h>

class YellowLine {
public:
    
    void setup(int _startPos);
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    
    float x;
    float y;
    float speed;
    float height;
    float width;
    
    int constantSpeed = 20;
    
    YellowLine();
    
    
private:
    
    
};






#endif /* YellowLine_hpp */
