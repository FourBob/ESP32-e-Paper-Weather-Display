// Example credentials (copy to owm_credentials.h and fill in your data)
const char* ssid     = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

String apikey       = "YOUR_OWM_API_KEY";                      // https://openweathermap.org/
const char server[] = "api.openweathermap.org";

// Location and formatting
String LAT              = "51.2277";   // Düsseldorf Latitude
String LON              = "6.7735";    // Düsseldorf Longitude
String City             = "DUSSELDORF";
String Country          = "DE";
String Language         = "DE";        // de, en, etc.
String Hemisphere       = "north";     // or "south"
String Units            = "M";         // 'M' Metric (C, m/s, mm, hPa)
const char* Timezone    = "CET-1CEST,M3.5.0,M10.5.0/3";
const char* ntpServer   = "0.europe.pool.ntp.org";
int   gmtOffset_sec     = 3600;
int  daylightOffset_sec = 3600;

