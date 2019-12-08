#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GTKBuilder *builder;
    GTKWidget *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "window_main.glade", NULL);

    
}
