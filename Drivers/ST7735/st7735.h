#ifndef __ST7735_H
#define __ST7735_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Orientácio:
   - 0: 128x160 8pin catlakozo felül (portrait)
   - 1: 160x128 8pin catlakozo bal oldalt (landscape)
   - 2: 128x160 8pin catlakozo alul (portrait)
   - 3: 160x128 8pin catlakozo jobb oldalt (landscape)
*/
#define  ST7735_ORIENTATION       3

/* Color mode
   - 0: RGB565
   - 1: BRG565
*/
#define  ST7735_COLORMODE         0

//-----------------------------------------------------------------------------
// ST7735 Size (fizikai felbontás, az alapértelmezett (0) orientáciora vonatkoztatva)
#define  ST7735_LCD_PIXEL_WIDTH   128
#define  ST7735_LCD_PIXEL_HEIGHT  160

/* LCD driver structure */
extern   LCD_DrvTypeDef   *lcd_drv;
      
#ifdef __cplusplus
}
#endif

#endif /* __ST7735_H */
