#include "engine.h"

int main(int argc, char** argv) {

    // TODO: parse cmd line args

    Engine engine;

    engine.init();
    engine.run();
    engine.cleanup();

    return 0;
}