#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_sprite_ptr.h>


#include "bn_sprite_items_ladybug.h"

int main(){
    bn::core::init();

    bn::backdrop::set_color(bn::color(31, 20, 5));

    bn::sprite_ptr ladybug = bn::sprite_items::ladybug.create_sprite();

    while (true)
    {
        bn::core::update();
    }
    
}