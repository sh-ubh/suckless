/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "black",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Locked";

/* text color */
static const char * text_color = "#a8fffe";

/* text size (must be a valid size) */
static const char * font_name = "fixed";

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
