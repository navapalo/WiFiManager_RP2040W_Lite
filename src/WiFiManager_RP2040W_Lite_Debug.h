/*******************************************************************************************************************************
  WiFiManager_RP2040W_Lite_Debug.h
  
  For RP2040W boards using built-in

  WiFiManager_RP2040W_Lite is a library for the RP2040W boards 
  (https://github.com/khoih-prog/WiFiManager_RP2040W_Lite) to enable store Credentials in LittleFS for easy 
  configuration/reconfiguration and autoconnect/autoreconnect of WiFi and other services without Hardcoding.

  Built by Khoi Hoang https://github.com/khoih-prog/WiFiManager_RP2040W_Lite
  Licensed under MIT license
  
  Version: 1.0.0

  Version Modified By   Date        Comments
  ------- -----------  ----------   -----------
  1.0.0   K Hoang      11/09/2021  Add support to RP2040W using arduino-pico core
 ********************************************************************************************************************************/

#ifndef WiFiManager_RP2040W_Lite_Debug_h
#define WiFiManager_RP2040W_Lite_Debug_h

#ifdef WIFI_GENERIC_DEBUG_OUTPUT
  #define DBG_PORT_WG       WIFI_GENERIC_DEBUG_OUTPUT
#else
  #define DBG_PORT_WG       Serial
#endif

// Change _WIFI_GENERIC_LOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#ifndef _WIFI_GENERIC_LOGLEVEL_
  #define _WIFI_GENERIC_LOGLEVEL_       0
#endif

const char WG_MARK[] = "[WG] ";

#define WG_PRINT_MARK   DBG_PORT_WG.print(WG_MARK)

#define WG_PRINT        DBG_PORT_WG.print
#define WG_PRINTLN      DBG_PORT_WG.println

// Error waitResponse message
#define ERROR_RESPONSE  ":Error waitResponse"

//////////////////////////////////////////

#define WG_LOGERROR0(x)     if(_WIFI_GENERIC_LOGLEVEL_>0) { WG_PRINT(x); }
#define WG_LOGERROR(x)      if(_WIFI_GENERIC_LOGLEVEL_>0) { WG_PRINT_MARK; WG_PRINTLN(x); }
#define WG_LOGERROR1(x,y)   if(_WIFI_GENERIC_LOGLEVEL_>0) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINTLN(y); }
#define WG_LOGERROR2(x,y,z) if(_WIFI_GENERIC_LOGLEVEL_>0) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINTLN(z); }
#define WG_LOGERROR3(x,y,z,w) if(_WIFI_GENERIC_LOGLEVEL_>0) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINTLN(w); }
#define WG_LOGERROR5(x,y,z,w,xx,yy) if(_WIFI_GENERIC_LOGLEVEL_>0) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINT(w); WG_PRINT(xx); WG_PRINTLN(yy); }

//////////////////////////////////////////

#define WG_LOGWARN0(x)     if(_WIFI_GENERIC_LOGLEVEL_>1) { WG_PRINT(x); }
#define WG_LOGWARN(x)      if(_WIFI_GENERIC_LOGLEVEL_>1) { WG_PRINT_MARK; WG_PRINTLN(x); }
#define WG_LOGWARN1(x,y)   if(_WIFI_GENERIC_LOGLEVEL_>1) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINTLN(y); }
#define WG_LOGWARN2(x,y,z) if(_WIFI_GENERIC_LOGLEVEL_>1) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINTLN(z); }
#define WG_LOGWARN3(x,y,z,w) if(_WIFI_GENERIC_LOGLEVEL_>1) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINTLN(w); }
#define WG_LOGWARN5(x,y,z,w,xx,yy) if(_WIFI_GENERIC_LOGLEVEL_>1) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINT(w); WG_PRINT(xx); WG_PRINTLN(yy); }

//////////////////////////////////////////

#define WG_LOGINFO0(x)     if(_WIFI_GENERIC_LOGLEVEL_>2) { WG_PRINT(x); }
#define WG_LOGINFO(x)      if(_WIFI_GENERIC_LOGLEVEL_>2) { WG_PRINT_MARK; WG_PRINTLN(x); }
#define WG_LOGINFO1(x,y)   if(_WIFI_GENERIC_LOGLEVEL_>2) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINTLN(y); }
#define WG_LOGINFO2(x,y,z) if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINTLN(z); }
#define WG_LOGINFO3(x,y,z,w) if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINTLN(w); }
#define WG_LOGINFO5(x,y,z,w,xx,yy) if(_WIFI_GENERIC_LOGLEVEL_>2) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINT(w); WG_PRINT(xx); WG_PRINTLN(yy); }

//////////////////////////////////////////

#define WG_LOGDEBUG0(x)     if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT(x); }
#define WG_LOGDEBUG(x)      if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINTLN(x); }
#define WG_LOGDEBUG1(x,y)   if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINTLN(y); }
#define WG_LOGDEBUG2(x,y,z) if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINTLN(z); }
#define WG_LOGDEBUG3(x,y,z,w) if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINTLN(w); }
#define WG_LOGDEBUG5(x,y,z,w,xx,yy) if(_WIFI_GENERIC_LOGLEVEL_>3) { WG_PRINT_MARK; WG_PRINT(x); WG_PRINT(y); WG_PRINT(z); WG_PRINT(w); WG_PRINT(xx); WG_PRINTLN(yy); }

//////////////////////////////////////////

#endif    //WiFiManager_RP2040W_Lite_Debug_h