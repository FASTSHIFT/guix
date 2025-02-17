/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.1.10.1                                              */
/*  Date (dd.mm.yyyy): 23. 3.2022   Time (hh:mm): 14:57                        */
/*******************************************************************************/


#define GUIX_STUDIO_GENERATED_FILE
#include <stddef.h>
#include "guix_sprite_resources.h"
#include "guix_sprite_specifications.h"

static GX_WIDGET *gx_studio_nested_widget_create(GX_BYTE *control, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
MAIN_WINDOW_CONTROL_BLOCK main_window;
GX_DISPLAY display_1_control_block;
GX_WINDOW_ROOT display_1_root_window;
GX_CANVAS  display_1_canvas_control_block;
ULONG      display_1_canvas_memory[307200];

extern GX_CONST GX_THEME *display_1_theme_table[];
extern GX_CONST GX_STRING *display_1_language_table[];

GX_STUDIO_DISPLAY_INFO guix_sprite_display_table[1] =
{
    {
    "display_1",
    "display_1_canvas",
    display_1_theme_table,
    display_1_language_table,
    DISPLAY_1_THEME_TABLE_SIZE,
    DISPLAY_1_LANGUAGE_TABLE_SIZE,
    DISPLAY_1_STRING_TABLE_SIZE,
    640,                                     /* x resolution                   */
    480,                                     /* y resolution                   */
    &display_1_control_block,
    &display_1_canvas_control_block,
    &display_1_root_window,
    display_1_canvas_memory,                 /* canvas memory area             */
    1228800,                                 /* canvas memory size in bytes    */
    GX_SCREEN_ROTATION_NONE                  /* rotation angle                 */
    }
};


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

UINT gx_studio_pixelmap_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_PIXELMAP_SLIDER *slider = (GX_PIXELMAP_SLIDER *) control_block;
    GX_PIXELMAP_SLIDER_PROPERTIES *props = (GX_PIXELMAP_SLIDER_PROPERTIES *) info->properties;
    GX_PIXELMAP_SLIDER_INFO pixelmap_info;
    GX_SLIDER_INFO slider_info;
    slider_info.gx_slider_info_min_val = props->min_val;
    slider_info.gx_slider_info_max_val = props->max_val;
    slider_info.gx_slider_info_current_val = props->current_val;
    slider_info.gx_slider_info_increment = props->increment;
    slider_info.gx_slider_info_min_travel = props->min_travel;
    slider_info.gx_slider_info_max_travel = props->max_travel;
    slider_info.gx_slider_info_needle_width = props->needle_width;
    slider_info.gx_slider_info_needle_height = props->needle_height;
    slider_info.gx_slider_info_needle_inset = props->needle_inset;
    slider_info.gx_slider_info_needle_hotspot_offset = props->needle_hotspot;
    pixelmap_info.gx_pixelmap_slider_info_lower_background_pixelmap = props->lower_pixelmap;
    pixelmap_info.gx_pixelmap_slider_info_upper_background_pixelmap = props->upper_pixelmap;
    pixelmap_info.gx_pixelmap_slider_info_needle_pixelmap = props->needle_pixelmap;
    status = gx_pixelmap_slider_create(slider,
                    info->widget_name,
                    parent,
                    &slider_info,
                    &pixelmap_info,
                    info->style,
                    info->widget_id,
                    &info->size);
    return status;
}

UINT gx_studio_sprite_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_SPRITE *sprite = (GX_SPRITE *) control_block;
    GX_SPRITE_PROPERTIES *props = (GX_SPRITE_PROPERTIES *) info->properties;
    status = gx_sprite_create(sprite, info->widget_name, parent,
               props->frame_list, props->frame_count,
               info->style, info->widget_id, &info->size);
    return status;
}

UINT gx_studio_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent)
{
    UINT status;
    GX_PROMPT *prompt = (GX_PROMPT *) control_block;
    GX_PROMPT_PROPERTIES *props = (GX_PROMPT_PROPERTIES *) info->properties;
    status = gx_prompt_create(prompt, info->widget_name, parent, props->string_id, info->style, info->widget_id, &info->size);
    if (status == GX_SUCCESS)
    {
        gx_prompt_font_set(prompt, props->font_id);
#if defined(GUIX_5_4_0_COMPATIBILITY)
        gx_prompt_text_color_set(prompt, props->normal_text_color_id, props->selected_text_color_id);
#else
        gx_prompt_text_color_set(prompt, props->normal_text_color_id, props->selected_text_color_id, props->disabled_text_color_id);
#endif
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
GX_WINDOW_PROPERTIES main_window_properties =
{
    0                                        /* wallpaper pixelmap id          */
};
GX_SPRITE_FRAME main_window_bird_sprite_frame_list[18] =
{
    {
        GX_PIXELMAP_ID_BIRD_01,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        40                                   /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_02,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        80                                   /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_03,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        120                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_04,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        200                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_05,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_04,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_03,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_02,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_01,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_02,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_03,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_04,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        255                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_05,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        200                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_04,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        160                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_03,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        120                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_02,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        100                                  /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_01,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        80                                   /* alpha value                    */
    },
    {
        GX_PIXELMAP_ID_BIRD_02,              /* pixelmap id                    */
        0,                                   /* x offset                       */
        0,                                   /* y offset                       */
        2,                                   /* frame delay                    */
        GX_SPRITE_BACKGROUND_NO_ACTION,      /* background operation           */
        40                                   /* alpha value                    */
    }
};

GX_SPRITE_PROPERTIES main_window_bird_sprite_properties =
{
    main_window_bird_sprite_frame_list,      /* address of frame list          */
    18,                                      /* frame count                    */
};
GX_ICON_PROPERTIES main_window_icon_1_properties =
{
    GX_PIXELMAP_ID_MS_AZURE_LOGO_SMALL,      /* normal pixelmap id             */
    0                                        /* selected pixelmap id           */
};
GX_PIXELMAP_SLIDER_PROPERTIES main_window_slider_background_size_properties =
{
    10,                                      /* minimum value                  */
    100,                                     /* maximum value                  */
    100,                                     /* current value                  */
    10,                                      /* increment                      */
    20,                                      /* minimum travel                 */
    20,                                      /* maximum travel                 */
    5,                                       /* needle width                   */
    10,                                      /* needle height                  */
    3,                                       /* needle inset                   */
    2,                                       /* needle hotspot                 */
    GX_PIXELMAP_ID_GX_SLIDER_BG_HORIZONTAL,  /* lower pixelmap id              */
    0,                                       /* upper pixelmap id              */
    GX_PIXELMAP_ID_GX_SLIDER_NEEDLES_HORIZONTAL  /* needle pixelmap id         */
};
GX_PIXELMAP_SLIDER_PROPERTIES main_window_slider_alpha_value_properties =
{
    0,                                       /* minimum value                  */
    255,                                     /* maximum value                  */
    255,                                     /* current value                  */
    10,                                      /* increment                      */
    20,                                      /* minimum travel                 */
    20,                                      /* maximum travel                 */
    5,                                       /* needle width                   */
    10,                                      /* needle height                  */
    3,                                       /* needle inset                   */
    2,                                       /* needle hotspot                 */
    GX_PIXELMAP_ID_GX_SLIDER_BG_HORIZONTAL,  /* lower pixelmap id              */
    0,                                       /* upper pixelmap id              */
    GX_PIXELMAP_ID_GX_SLIDER_NEEDLES_HORIZONTAL  /* needle pixelmap id         */
};
GX_PROMPT_PROPERTIES main_window_size_prompt_properties =
{
    GX_STRING_ID_STRING_15,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};
GX_PROMPT_PROPERTIES main_window_fade_prompt_properties =
{
    GX_STRING_ID_STRING_16,                  /* string id                      */
    GX_FONT_ID_PROMPT,                       /* font id                        */
    GX_COLOR_ID_TEXT,                        /* normal text color              */
    GX_COLOR_ID_SELECTED_TEXT,               /* selected text color            */
    GX_COLOR_ID_TEXT                         /* disabled text color            */
};

GX_CONST GX_STUDIO_WIDGET main_window_fade_prompt_define =
{
    "fade_prompt",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_SHADOW,                      /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_SHADOW,                      /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {60, 417, 200, 443},                     /* widget size                    */
    GX_NULL,                                 /* no next widget                 */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_fade_prompt), /* control block */
    (void *) &main_window_fade_prompt_properties /* extended properties        */
};

GX_CONST GX_STUDIO_WIDGET main_window_size_prompt_define =
{
    "size_prompt",
    GX_TYPE_PROMPT,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_THIN|GX_STYLE_ENABLED|GX_STYLE_TEXT_CENTER,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PROMPT),                       /* control block size             */
    GX_COLOR_ID_SHADOW,                      /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_SHADOW,                      /* disabled color id              */
    gx_studio_prompt_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {60, 373, 200, 403},                     /* widget size                    */
    &main_window_fade_prompt_define,         /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_size_prompt), /* control block */
    (void *) &main_window_size_prompt_properties /* extended properties        */
};

GX_CONST GX_STUDIO_WIDGET main_window_slider_alpha_value_define =
{
    "slider_alpha_value",
    GX_TYPE_PIXELMAP_SLIDER,                 /* widget type                    */
    ID_ALPHA_SLIDER,                         /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED,   /* style flags                  */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PIXELMAP_SLIDER),              /* control block size             */
    GX_COLOR_ID_WIDGET_FILL,                 /* normal color id                */
    GX_COLOR_ID_WIDGET_FILL,                 /* selected color id              */
    GX_COLOR_ID_WIDGET_FILL,                 /* disabled color id              */
    gx_studio_pixelmap_slider_create,        /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {206, 415, 507, 452},                    /* widget size                    */
    &main_window_size_prompt_define,         /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_slider_alpha_value), /* control block */
    (void *) &main_window_slider_alpha_value_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET main_window_slider_background_size_define =
{
    "slider_background_size",
    GX_TYPE_PIXELMAP_SLIDER,                 /* widget type                    */
    ID_BACKGROUND_SIZE,                      /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_RAISED|GX_STYLE_ENABLED,   /* style flags                  */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_PIXELMAP_SLIDER),              /* control block size             */
    GX_COLOR_ID_WIDGET_FILL,                 /* normal color id                */
    GX_COLOR_ID_WIDGET_FILL,                 /* selected color id              */
    GX_COLOR_ID_WIDGET_FILL,                 /* disabled color id              */
    gx_studio_pixelmap_slider_create,        /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {207, 373, 508, 410},                    /* widget size                    */
    &main_window_slider_alpha_value_define,  /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_slider_background_size), /* control block */
    (void *) &main_window_slider_background_size_properties /* extended properties */
};

GX_CONST GX_STUDIO_WIDGET main_window_icon_1_define =
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
    {18, 18, 206, 47},                       /* widget size                    */
    &main_window_slider_background_size_define, /* next widget definition      */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_icon_1), /* control block  */
    (void *) &main_window_icon_1_properties  /* extended properties            */
};

GX_CONST GX_STUDIO_WIDGET main_window_bird_sprite_define =
{
    "bird_sprite",
    GX_TYPE_SPRITE,                          /* widget type                    */
    ID_BIRD_SPRITE,                          /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT|GX_STYLE_ENABLED|GX_STYLE_SPRITE_AUTO,   /* style flags */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(GX_SPRITE),                       /* control block size             */
    GX_COLOR_ID_WHITE,                       /* normal color id                */
    GX_COLOR_ID_SELECTED_FILL,               /* selected color id              */
    GX_COLOR_ID_WHITE,                       /* disabled color id              */
    gx_studio_sprite_create,                 /* create function                */
    GX_NULL,                                 /* drawing function override      */
    GX_NULL,                                 /* event function override        */
    {56, 51, 213, 200},                      /* widget size                    */
    &main_window_icon_1_define,              /* next widget definition         */
    GX_NULL,                                 /* no child widgets               */ 
    offsetof(MAIN_WINDOW_CONTROL_BLOCK, main_window_bird_sprite), /* control block */
    (void *) &main_window_bird_sprite_properties /* extended properties        */
};

GX_CONST GX_STUDIO_WIDGET main_window_define =
{
    "main_window",
    GX_TYPE_WINDOW,                          /* widget type                    */
    GX_ID_NONE,                              /* widget id                      */
    #if defined(GX_WIDGET_USER_DATA)
    0,                                       /* user data                      */
    #endif
    GX_STYLE_BORDER_NONE|GX_STYLE_TRANSPARENT,   /* style flags                */
    GX_STATUS_ACCEPTS_FOCUS,                 /* status flags                   */
    sizeof(MAIN_WINDOW_CONTROL_BLOCK),       /* control block size             */
    GX_COLOR_ID_WHITE,                       /* normal color id                */
    GX_COLOR_ID_WHITE,                       /* selected color id              */
    GX_COLOR_ID_WHITE,                       /* disabled color id              */
    gx_studio_window_create,                 /* create function                */
    (VOID (*)(GX_WIDGET *)) MainWindowDraw,  /* drawing function override      */
    (UINT (*)(GX_WIDGET *, GX_EVENT *)) MainWindowEventProcess, /* event function override */
    {0, 0, 639, 479},                        /* widget size                    */
    GX_NULL,                                 /* next widget                    */
    &main_window_bird_sprite_define,         /* child widget                   */
    0,                                       /* control block                  */
    (void *) &main_window_properties         /* extended properties            */
};
GX_CONST GX_STUDIO_WIDGET_ENTRY guix_sprite_widget_table[] =
{
    { &main_window_define, (GX_WIDGET *) &main_window },
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
    GX_CONST GX_STUDIO_WIDGET_ENTRY *entry = guix_sprite_widget_table;
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

    GX_STUDIO_DISPLAY_INFO *display_info = &guix_sprite_display_table[display];


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
