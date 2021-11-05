static const char norm_fg[] = "#f6cab8";
static const char norm_bg[] = "#2b2440";
static const char norm_border[] = "#ac8d80";

static const char sel_fg[] = "#f6cab8";
static const char sel_bg[] = "#EC897E";
static const char sel_border[] = "#f6cab8";

static const char urg_fg[] = "#f6cab8";
static const char urg_bg[] = "#FE5D78";
static const char urg_border[] = "#FE5D78";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
