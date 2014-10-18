#include "animation.h"
#include "world.h"

using namespace std;

Animation::Animation(){
    name="";

    frame_count=0;
    animation_speed=0;

    end_behavior="";
}

void Animation::setup(double frame_width){
    sprite_sheet.clear();

    for(int i=0;i<frame_count;i++){
        sprite_sheet.push_back(Collision_Rect());
        sprite_sheet[i].x=i*frame_width;
        sprite_sheet[i].y=0.0;
        sprite_sheet[i].w=frame_width;
        sprite_sheet[i].h=image.get_image(name)->h;
    }
}