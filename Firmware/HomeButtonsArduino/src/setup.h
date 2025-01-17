#ifndef HOMEBUTTONS_SETUP_H
#define HOMEBUTTONS_SETUP_H

#include "logger.h"

class App;

class HBSetup : public Logger {
 public:
  HBSetup(App& app) : Logger("Setup"), app_(app) {}

  void start_wifi_setup();
  void start_setup();

 private:
  App& app_;
  bool web_portal_saved_ = false;

  void save_params_callback();
};

#endif  // HOMEBUTTONS_SETUP_H
