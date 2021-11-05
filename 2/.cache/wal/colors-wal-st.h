const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2b2440", /* black   */
  [1] = "#FE5D78", /* red     */
  [2] = "#EC897E", /* green   */
  [3] = "#5B6089", /* yellow  */
  [4] = "#8C4F80", /* blue    */
  [5] = "#359AA9", /* magenta */
  [6] = "#11F3DC", /* cyan    */
  [7] = "#f6cab8", /* white   */

  /* 8 bright colors */
  [8]  = "#ac8d80",  /* black   */
  [9]  = "#FE5D78",  /* red     */
  [10] = "#EC897E", /* green   */
  [11] = "#5B6089", /* yellow  */
  [12] = "#8C4F80", /* blue    */
  [13] = "#359AA9", /* magenta */
  [14] = "#11F3DC", /* cyan    */
  [15] = "#f6cab8", /* white   */

  /* special colors */
  [256] = "#2b2440", /* background */
  [257] = "#f6cab8", /* foreground */
  [258] = "#f6cab8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
