/* Apprentice colorscheme */
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c1c1c", /* black   */
  [1] = "#af5f5f", /* red     */
  [2] = "#5f875f", /* green   */
  [3] = "#87875f", /* yellow  */
  [4] = "#5f87af", /* blue    */
  [5] = "#5f5f87", /* magenta */
  [6] = "#5f8787", /* cyan    */
  [7] = "#6c6c6c", /* white   */

  /* 8 bright colors */
  [8]  = "#444444", /* black   */
  [9]  = "#ff8700", /* red     */
  [10] = "#87af87", /* green   */
  [11] = "#ffffaf", /* yellow  */
  [12] = "#8fafd7", /* blue    */
  [13] = "#8787af", /* magenta */
  [14] = "#5fafaf", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#262626", /* background */
  [257] = "#bcbcbc", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
