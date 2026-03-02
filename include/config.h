#pragma once

#define WIFI_SSID "REPLACE_ME"
#define WIFI_PWD "REPLACE_ME"

#define MY_NTP_SERVER "pool.ntp.org" // Set the best fitting NTP server (pool) for your location
#define MY_TZ "CET-1CEST,M3.5.0,M10.5.0/3" // Set your time zone from https://github.com/nayarsystems/posix_tz_db/blob/master/zones.csv

#define WORDNIKAPIKEY "" // Insert your private key from https://developer.wordnik.com/
#define MINWORDLEN 9 // Specify minimum word length to fetch from Wordnik
#define WORDUPDATESPERHOUR 0 // Set number of word updates from https://wordnik.com per hour. 0 will disable, else use an integer that results in an exact number of minutes btw updates eg. 1,2,3,4,5,6,10,12...
