//
//  Dot.h
//  spacebrew_circle_test
//
//  Created by Stephen Finney on 9/29/13.
//
//

#pragma once
#include "ofMain.h"

class Dot {
public:
    
    Dot();  //constructor
    
    float posX, posY;
    float velX, velY;
    
    float size;
    
    float r,g,b;
    
    void setup();
    void update ();
    void move();
    void display();
    
    void reset(float _posX, float _posY);
};

