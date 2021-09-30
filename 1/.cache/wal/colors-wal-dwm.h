static const char norm_fg[] = "#ceaca6";
static const char norm_bg[] = "#0c0b19";
static const char norm_border[] = "#907874";

static const char sel_fg[] = "#ceaca6";
static const char sel_bg[] = "#6B3B54";
static const char sel_border[] = "#ceaca6";

static const char urg_fg[] = "#ceaca6";
static const char urg_bg[] = "#4E3355";
static const char urg_border[] = "#4E3355";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
