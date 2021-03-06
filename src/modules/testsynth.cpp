#include "testsynth.h"
#include "../globals.h"
#include "testsynth.faust.h"
#include "../ui/utils.h"
#include "../ui/mainui.h"
#include <string>

// TestSynth::TestSynth() :
//   FaustSynthModule(new faust_testsynth(), {
//     {"FREQ", &frequency}
//   }),
//   screen (new TestSynthScreen(this))
// {
//   //MainUI::getInstance().currentScreen = screen;
// }

TestSynth::~TestSynth() {
  delete fDSP;
  delete screen;
}

void TestSynthScreen::draw(NanoCanvas::Canvas& ctx) {
  using namespace ui;
  using namespace drawing;
}

bool TestSynthScreen::keypress(ui::Key key) {
  switch (key) {
  default:
    return false;
  }
}
