/* Screen */
// Voltage range: 2500 - 3300
#define SCREENOFFBRIGHTNESS 2500
#define SCREENONBRIGHTNESS 2900

/* IMU */
#define SENSITIVITY 6
#define TICKTIME 5 // 200Hz

/* RTC */
#define UTCOFFSETINSECONDS 8 * -3600
#define DAYLIGHTOFFSETINSECONDS 3600

/* UI */
#define COLORMULTIPLIER 3
#define TEXTCOLOR GREEN
#define TEXTBACKGROUND BLACK
#define TEXTSIZE 2

/* Watcher */
#define WATCHTHRESHOLD 0.16
#define INITIALWAKETIME 10 * 1000  // 10 seconds
#define EVENTTIMEOUT 10 * 1000  // 10 seconds
#define REWINDSTEPS 1000 / TICKTIME * 2 // 2 seconds