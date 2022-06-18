// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace) 
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_928B62FC284539318DB7EF958DCFF4E2
#define AU_COCOA_VIEW_NAME AUCocoaView_928B62FC284539318DB7EF958DCFF4E2

// --- BUNDLE IDs (MacOS Only) 
const char* kAAXBundleID = "developer.aax.jwdftest.bundleID";
const char* kAUBundleID = "developer.au.jwdftest.bundleID";
const char* kVST3BundleID = "developer.vst3.jwdftest.bundleID";

// --- Plugin Names 
const char* kPluginName = "JWDFTest";
const char* kShortPluginName = "JWDFTest";
const char* kAUBundleName = "JWDFTest_AU";

// --- Plugin Type 
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID 
const char* kVSTFUID = "{928b62fc-2845-3931-8db7-ef958dcff4e2}";

// --- 4-char codes 
const int32_t kFourCharCode = 'JWDF';
const int32_t kAAXProductID = 'JWDF';
const int32_t kManufacturerID = 'JEPl';

// --- Vendor information 
const char* kVendorName = "JEPlugins";
const char* kVendorURL = "www.myplugins.com";
const char* kVendorEmail = "support@myplugins.com";

// --- Plugin Options 
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif
