//This is display testing file. There is no way to compile this through terminal until the whole application has deployed. 
//
//
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>

int main(int argc, char **argv) {
    
    bool done = false;
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *even_queue = NULL;
    
    if(!al_init())
    {
        al_show_native_message_box(NULL, NULL, NULL,
        "failed to initialize allegro!", NULL, NULL);
        return -1;
    }
    display = al_create_display(640,480);
    
    if(!display)
    {
        al_show_native_message_box(NULL, NULL, NULL,
          "failed to initialize display!", NULL, NULL);
        return -1;
    }
  
    al_clear_to_color(al_map_rgb(255,0,255));
 
    al_flip_display();
    
    al_rest(10.0);
 
    al_destroy_display(display);
 
    return 0;
}

