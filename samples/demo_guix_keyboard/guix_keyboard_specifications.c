/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.1.10.1                                              */
/*  Date (dd.mm.yyyy): 23. 3.2022   Time (hh:mm): 14:56                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "guix_keyboard_resources.h"
#include "guix_keyboard_specifications.h"

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
KEYBOARD_SCREEN_CONTROL_BLOCK keyboard_screen;
GX_DISPLAY display_1_control_block;
GX_WINDOW_ROOT display_1_root_window;
GX_CANVAS  display_1_canvas_control_block;
ULONG      display_1_canvas_memory[136240];

extern GX_CONST GX_THEME *display_1_theme_table[];
extern GX_CONST GX_STRING *display_1_language_table[];

GX_STUDIO_DISPLAY_INFO guix_keyboard_display_table[1] =
{
    {
    "display_1",
    "display_1_canvas",
    display_1_theme_table,
    display_1_language_table,
    DISPLAY_1_THEME_TABLE_SIZE,
    DISPLAY_1_LANGUAGE_TABLE_SIZE,
    DISPLAY_1_STRING_TABLE_SIZE,
    520,                                     /* x resolution                   */
    262,                                     /* y resolution                   */
    &display_1_control_block,
    &display_1_canvas_control_block,
    &display_1_root_window,
    display_1_canvas_memory,                 /* canvas memory area             */
    544960,                                  /* canvas memory size in bytes    */
    GX_SCREEN_ROTATION_NONE                  /* rotation angle                 */
    }
};


UINT gx_studio_pixelmap_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_PIXELMAP_BUTTON *button = (GX_PIXELMAP_BUTTON *) control_block;
    GX_PIXELMAP_BUTTON_PROPERTIES *props = (GX_PIXELMAP_BUTTON_PROPERTIES *) info->properties;
    status = gx_pixelmap_button_create(button, info->widget_name, parent,
               props->normal_pixelmap_id,
               props->selected_pixelmap_id,
               props->disabled_pixelmap_id,
               info->style, info->widget_id, &info->size);
    return status;
}

UINT gx_studio_icon_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_ICON *icon = (GX_ICON *) control_block;
    GX_ICON_PROPERTIES *props = (GX_ICON_PROPERTIES *) info->properties;
    status = gx_icon_create(icon, info->widget_name, parent, props->normal_pixelmap_id, info->style, info->widget_id, info->size.gx_rectangle_left, info->size.gx_rectangle_top);
    if (props->selected_pixelmap_id)
    {
        gx_icon_pixelmap_set(icon, props->normal_pixelmap_id, props->selected_pixelmap_id);
    }
    else
    {
        gx_widget_resize((GX_WIDGET *)icon, (GX_RECTANGLE *)&info->size);
    }
    return status;
}

UINT gx_studio_window_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_WINDOW *window = (GX_WINDOW *) control_block;
    GX_WINDOW_PROPERTIES *props = (GX_WINDOW_PROPERTIES *) info->properties;
    status = gx_window_create(window, info->widget_name, parent, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        if (props->wallpaper_id)
        {
            gx_window_wallpaper_set(window, props->wallpaper_id, info->style & GX_STYLE_TILE_WALLPAPER);
        }
    }
    return status;
}

UINT gx_studio_text_input_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_STRING text;
    GX_SINGLE_LINE_TEXT_INPUT *input = (GX_SINGLE_LINE_TEXT_INPUT *) control_block;
    GX_PROMPT *prompt = (GX_PROMPT *) input;
    GX_SINGLE_LINE_TEXT_INPUT_PROPERTIES *props = (GX_SINGLE_LINE_TEXT_INPUT_PROPERTIES *) info->properties;
    status = gx_single_line_text_input_create(input, info->widget_name, parent, props->buffer, props->buffer_size, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        gx_prompt_font_set(prompt, props->font_id);
        gx_single_line_text_input_text_color_set(input, props->normal_text_color_id, props->selected_text_color_id,
                                                 props->disabled_text_color_id, props->readonly_text_color_id);
        gx_single_line_text_input_fill_color_set(input, input->gx_widget_normal_fill_color, input->gx_widget_selected_fill_color,
                                                 input->gx_widget_disabled_fill_color, props->readonly_fill_color_id);
        if (props->buffer && props->buffer_size > 0 && props->string_id)
        {
             gx_display_string_get_ext(guix_keyboard_display_table[0].display, props->string_id, &text);

             if (text.gx_string_ptr)
             {
                 gx_single_line_text_input_text_set_ext(input, &text);
             }
        }
    }
    return status;
}
GX_WINDOW_PROPERTIES keyboard_screen_properties =
{
    0                                        /* wallpaper pixelmap id          */
};
GX_CHAR keyboard_screen_keyboard_input_field_buffer[100];
GX_SINGLE_LINE_TEXT_INPUT_PROPERTIES keyboard_screen_keyboard_input_field_properties =
{
    GX_STRING_ID_STRING_2,                   /* string id                      */
    GX_FONT_ID_MIDSIZE,                      /* font id                        */
    GX_COLOR_ID_DARK_GRAY,                   /* normal text color              */
    GX_COLOR_ID_DARK_GRAY,                   /* selected text color            */
    GX_COLOR_ID_DARK_GRAY,                   /* disabled text color            */
    GX_COLOR_ID_READONLY_FILL,               /* readonly fill color            */
    GX_COLOR_ID_READONLY_TEXT,               /* readonly text color            */
    keyboard_screen_keyboard_input_field_buffer, /* buffer                     */
    100,                                     /* buffer size                    */
};
GX_PIXELMAP_BUTTON_PROPERTIES keyboard_screen_pixelmap_button_1_properties =
{
    GX_PIXELMAP_ID_B_BACKSPACE,              /* normal pixelmap id             */
    GX_PIXELMAP_ID_B_BACKSPACE_H,            /* selected pixelmap id           */
    0                                        /* disabled pixelmap id           */
};
GX_WINDOW_PROPERTIES keyboard_screen_keyboard_frame_properties =
{
    0                                        /* wallpaper pixelmap id          */
};
GX_ICON_PROPERTIES keyboard_screen_icon_1_properties =
{
    GX_PIXELMAP_ID_MS_AZURE_LOGO_SMALL,      /* normal pixelmap id             */
    0                                        /* selected pixelmap id           */
};

GX_CONST GX_STUDIO_WIDGET keyboard_screen_pixelmap_button_1_define =
{
    "pixelmap_button_1",
    GX_TYPE_PIXELMAP_BUTTON,                 /* widget type                    */
    IDB_BACKSPACE,                           /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_HALIGN_RIGHT|GX_STYLE_VALIGN_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PIXELMAP_BUTTON),              /* control block size             */
    GX_COLOR_ID_BTN_LOWER,                   /* normal color id                */
    GX_COLOR_ID_BTN_UPPER,                   /* selected color id              */
    GX_COLOR_ID_BTN_LOWER,                   /* disabled color id              */
    gx_studio_pixelmap_button_create,        /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {441, 33, 511, 64},                      /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(KEYBOARD_SCREEN_CONTROL_BLOCK, keyboard_screen_pixelmap_button_1), /* control block */
    (void *) &keyboard_screen_pixelmap_button_1_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET keyboard_screen_icon_1_define =
{
    "icon_1",
    GX_TYPE_ICON,                            /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_ENABLED|GX_STYLE_HALIGN_LEFT|GX_STYLE_VALIGN_TOP,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_ICON),                         /* control block size             */
    GX_COLOR_ID_WIDGET_FILL,                 /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_WIDGET_FILL,                 /* disabled color id              */
    gx_studio_icon_create,                   /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {8, 8, 133, 27},                         /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(KEYBOARD_SCREEN_CONTROL_BLOCK, keyboard_screen_icon_1), /* control block */
    (void *) &keyboard_screen_icon_1_properties /* extended properties         */
};

GX_CONST GX_STUDIO_WIDGET keyboard_screen_keyboard_frame_define =
{
    "keyboard_frame",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE,                    /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_WINDOW),                       /* control block size             */
    GX_COLOR_ID_BLACK,                       /* normal color id                */
    GX_COLOR_ID_BLACK,                       /* selected color id              */
    GX_COLOR_ID_BLACK,                       /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) keyboard_frame_event_handler, /* event function override */
    {36, 67, 515, 256},                      /* widget size                    */
    &keyboard_screen_icon_1_define,          /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(KEYBOARD_SCREEN_CONTROL_BLOCK, keyboard_screen_keyboard_frame), /* control block */
    (void *) &keyboard_screen_keyboard_frame_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET keyboard_screen_keyboard_input_field_define =
{
    "keyboard_input_field",
    GX_TYPE_SINGLE_LINE_TEXT_INPUT,          /* widget type                    */
    ID_INPUT_FIELD,                          /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_LEFT,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_SINGLE_LINE_TEXT_INPUT),       /* control block size             */
    GX_COLOR_ID_TEXT_INPUT_FILL,             /* normal color id                */
    GX_COLOR_ID_TEXT_INPUT_FILL,             /* selected color id              */
    GX_COLOR_ID_TEXT_INPUT_FILL,             /* disabled color id              */
    gx_studio_text_input_create,             /* create function                */
    GX_NULL,                                 /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) input_field_event_process, /* event function override */
    {43, 33, 510, 62},                       /* widget size                    */
    &keyboard_screen_keyboard_frame_define,  /* next widget definition         */
    &keyboard_screen_pixelmap_button_1_define, /* child widget definition      */
    offsetof(KEYBOARD_SCREEN_CONTROL_BLOCK, keyboard_screen_keyboard_input_field), /* control block */
    (void *) &keyboard_screen_keyboard_input_field_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET keyboard_screen_define =
{
    "keyboard_screen",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE,                    /* style flags                    */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(KEYBOARD_SCREEN_CONTROL_BLOCK),   /* control block size             */
    GX_COLOR_ID_CANVAS,                      /* normal color id                */
    GX_COLOR_ID_CANVAS,                      /* selected color id              */
    GX_COLOR_ID_CANVAS,                      /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {0, 0, 519, 271},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &keyboard_screen_keyboard_input_field_define, /* child widget              */
    0,                                       /* control block                  */
    (void *) &keyboard_screen_properties     /* extended properties            */
};
GX_CONST GX_STUDIO_WIDGET_ENTRY guix_keyboard_widget_table[] =
{
    { &keyboard_screen_define, (GX_WIDGET *) &keyboard_screen },
    {GX_NULL, GX_NULL}
};

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent)
{
    UINT status = GX_SUCCESS;
    GX_WIDGET *widget = GX_NULL;
    GX_VALUE   list_count = 0;
    GX_VALUE   list_total_count = 0;

    if(parent && (parent->gx_widget_type == GX_TYPE_MENU))
    {
        list_total_count = ((GX_MENU *)parent)->gx_menu_list_total_count;
    }

    while(definition && status == GX_SUCCESS)
    {
        if (definition->create_function)
        {
            if (definition->style & GX_STYLE_DYNAMICALLY_ALLOCATED)
            {
                status = gx_widget_allocate(&widget, definition->control_block_size);
                if (status != GX_SUCCESS)
                {
                    return GX_NULL;
                }
            }
            else
            {
                if (control == GX_NULL)
                {
                    return GX_NULL;
                }
                widget = (GX_WIDGET *) (control + definition->control_block_offset);
            }

            status = definition->create_function(definition, widget, parent);

            if(list_count < list_total_count)
            {
                gx_menu_insert((GX_MENU *)parent, widget);
                ((GX_MENU *)parent)->gx_menu_list_total_count--;
                list_count++;
            }

            if (status == GX_SUCCESS)
            {
                if (definition->widget_type != GX_TYPE_TEMPLATE)
                {
#if defined(GUIX_5_4_0_COMPATIBILITY)
                    gx_widget_fill_color_set(widget, definition->normal_fill_color_id, definition->selected_fill_color_id);
#else
                    gx_widget_fill_color_set(widget, definition->normal_fill_color_id, definition->selected_fill_color_id, definition->disabled_fill_color_id);
#endif
                }

                if (!(definition->status & GX_STATUS_ACCEPTS_FOCUS))
                {
                    gx_widget_status_remove(widget, GX_STATUS_ACCEPTS_FOCUS);
                }

                if (definition->draw_function)
                {
                    gx_widget_draw_set(widget, definition->draw_function);
                }
                if (definition->event_function)
                {
                    gx_widget_event_process_set(widget, definition->event_function);
                }

                #if defined(GX_WIDGET_USER_DATA)
                widget->gx_widget_user_data = definition->user_data;
                #endif

                if (definition->child_widget)
                {
                    gx_studio_nested_widget_create(control, definition->child_widget, widget);
                }
            }
            definition = definition->next_widget;
        }
    }
    return widget;
}

GX_WIDGET *gx_studio_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent)
{
    GX_WIDGET *widget;
    widget = gx_studio_nested_widget_create(control, definition, GX_NULL);

    if (parent && widget)
    {
        gx_widget_attach(parent, widget);
    }
    return widget;
}

UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget)
{
    UINT status = GX_FAILURE;
    GX_CONST GX_STUDIO_WIDGET_ENTRY *entry = guix_keyboard_widget_table;
    GX_WIDGET *widget = GX_NULL;

    while(entry->widget_information)
    {
        if (!strcmp(name, entry->widget_information->widget_name))
        {
            widget = gx_studio_widget_create((GX_BYTE *) entry->widget, entry->widget_information, parent);
            if (widget)
            {
                status = GX_SUCCESS;
            }
            break;
        }
        entry++;
    }

    if (new_widget)
    {
        *new_widget = widget;
    }
    return status;
}


UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *),
    GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root)
{
    GX_CONST GX_THEME *theme_ptr;
    GX_RECTANGLE size;

    GX_STUDIO_DISPLAY_INFO *display_info = &guix_keyboard_display_table[display];


/* create the requested display                                                */

    gx_display_create(display_info->display,
                      display_info->name,
                      driver,
                      (GX_VALUE) display_info->x_resolution,
                      (GX_VALUE) display_info->y_resolution);


/* install the request theme                                                   */

    if(display_info->theme_table)
    {
        theme_ptr = display_info->theme_table[theme];
        if(theme_ptr)
        {
            gx_display_color_table_set(display_info->display, theme_ptr->theme_color_table, theme_ptr->theme_color_table_size);
            
/* install the color palette if required                                       */
            if (display_info->display->gx_display_driver_palette_set &&
                theme_ptr->theme_palette != NULL)
            {
                display_info->display->gx_display_driver_palette_set(display_info->display, theme_ptr->theme_palette, theme_ptr->theme_palette_size);
            }

            gx_display_font_table_set(display_info->display, theme_ptr->theme_font_table, theme_ptr->theme_font_table_size);
            gx_display_pixelmap_table_set(display_info->display, theme_ptr->theme_pixelmap_table, theme_ptr->theme_pixelmap_table_size);
            gx_system_scroll_appearance_set(theme_ptr->theme_vertical_scroll_style, (GX_SCROLLBAR_APPEARANCE *) &theme_ptr->theme_vertical_scrollbar_appearance);
            gx_system_scroll_appearance_set(theme_ptr->theme_horizontal_scroll_style, (GX_SCROLLBAR_APPEARANCE *) &theme_ptr->theme_horizontal_scrollbar_appearance);
        }
    }

/* Install the language table.                                                 */

    if(display_info->language_table)
    {
        gx_display_language_table_set_ext(display_info->display, display_info->language_table, (GX_UBYTE) display_info->language_table_size, display_info->string_table_size);
        gx_display_active_language_set(display_info->display, language);
    }

/* Set screen rotation angle.                                                  */

    display_info->display->gx_display_rotation_angle = display_info->rotation_angle;

/* create the canvas for this display                                          */

    gx_canvas_create(display_info->canvas,
                     display_info->canvas_name,
                     display_info->display,
                     GX_CANVAS_MANAGED | GX_CANVAS_VISIBLE,
                     display_info->x_resolution,
                     display_info->y_resolution,
                     display_info->canvas_memory,
                     display_info->canvas_memory_size);

/* Create the root window for this canvas                                      */

    gx_utility_rectangle_define(&size,
                                0, 0,
                                (GX_VALUE) (display_info->x_resolution - 1),
                                (GX_VALUE) (display_info->y_resolution - 1));

    gx_window_root_create(display_info->root_window,
                          display_info->name,
                          display_info->canvas, GX_STYLE_NONE, 0, &size);
    if (return_root)
    {
        *return_root = display_info->root_window;
    }
    return GX_SUCCESS;
}
#undef GUIX_STUDIO_GENERATED_FILE
