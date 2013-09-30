//
//  Dot.cpp
//  spacebrew_circle_test
//
//  Created by Stephen Finney on 9/29/13.
//
//

#include "Dot.h"

Dot::Dot() {
    posX = ofGetWindowWidth() * 0.5;
    posX = ofGetWindowWidth() * 0.5;
    
}

void Dot::setup() {
    ofSetCircleResolution(100);
    velX = ofRandom(-5, 5);
    velY = ofRandom(-4, 4);
    
    size = 50;
    
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
    
    
}

void Dot::move() {
    posX = posX + velX;
    posY += velY;
    
    if (posX > ofGetWindowWidth() || posX < 0) {
        velX = velX * (-1);
    }
    
    if (posY > ofGetWindowWidth() || posY < 0) {
        velY *=(-1);
    }
}

void Dot::display(){
    ofSetColor(r, g, b);
    ofCircle(posX, posY, size);

}

void Dot::reset(float _posX, float _posY) {
    posX = _posX;
    posY = _posY;
}

