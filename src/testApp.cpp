#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    string host = Spacebrew::SPACEBREW_CLOUD; // "localhost";
    string name = "dot2dot";
    string description = "feelingdotty";
    
    spacebrew.addPublish("dot2dot", Spacebrew::TYPE_BOOLEAN);
    spacebrew.addSubscribe("dotclick", Spacebrew::TYPE_BOOLEAN); //"boolean" ); // just typing "boolean" also works
    spacebrew.connect( host, name, description );
    
    // listen to spacebrew events
    Spacebrew::addListener(this, spacebrew);
    
    ofBackground(50);
    pearl.setup();
    stone.setup();
    
    click=false;
    clicktwo = false;


}

//--------------------------------------------------------------
void testApp::update(){
    


}

//--------------------------------------------------------------
void testApp::draw(){
    if (!click) {
        pearl.display();
    } else {
        pearl.reset(mouseX, mouseY);
    }
    if (!clicktwo) {
        stone.display();
    } else {
        stone.reset(mouseX, mouseY);
    }

}

//--------------------------------------------------------------

void testApp::onMessage( Spacebrew::Message & m ){
    if ( m.name == "dotclick" ){
        click = m.valueBoolean();
    }
}

void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    //pearl.reset(mouseX, mouseY);
    clicktwo=true;
    spacebrew.sendBoolean("dot2dot", true);
    }
    

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    clicktwo=false;
    spacebrew.sendBoolean("dot2dot", false);
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
