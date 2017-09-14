//
//  tree.hpp
//  hw02_AnimationPractice
//
//  Created by T Co on 9/10/17.
//
//

#ifndef tree_h
#define tree_h

#include "ofMain.h"

#include <stdio.h>


class tree {
public:
    
    void setup(int _speed, int _xPos, int _trunkWidth);
    void update();
    void draw();
    
    float trunkWidth;
    float trunkHeight;
    float speed;
    float x;
    float y;
    
    int numLeaves = 600;
    int minOffset = 5;
    int maxOffset = 130;
    int alpha = 150;
    int radius = 10;

    
    tree();
    
private:
    
    
};


#endif /* tree_hpp */
