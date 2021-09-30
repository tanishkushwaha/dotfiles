const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c0b19", /* black   */
  [1] = "#4E3355", /* red     */
  [2] = "#6B3B54", /* green   */
  [3] = "#4B3464", /* yellow  */
  [4] = "#704456", /* blue    */
  [5] = "#DF683A", /* magenta */
  [6] = "#994B4C", /* cyan    */
  [7] = "#ceaca6", /* white   */

  /* 8 bright colors */
  [8]  = "#907874",  /* black   */
  [9]  = "#4E3355",  /* red     */
  [10] = "#6B3B54", /* green   */
  [11] = "#4B3464", /* yellow  */
  [12] = "#704456", /* blue    */
  [13] = "#DF683A", /* magenta */
  [14] = "#994B4C", /* cyan    */
  [15] = "#ceaca6", /* white   */

  /* special colors */
  [256] = "#0c0b19", /* background */
  [257] = "#ceaca6", /* foreground */
  [258] = "#ceaca6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
