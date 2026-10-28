#include "kotte/application.hpp"

#include <cstdint>
#include <exception>
#include <string_view>

int main(int argc, char** argv) {
    try {
        constexpr std::uint64_t seed = 0x4b4f545445ULL;
        const bool stress = argc > 1 && std::string_view{ argv[1] } == "--stress";
        const kotte::WorldConfiguration configuration = stress
            ? kotte::WorldConfiguration::stress
            : kotte::WorldConfiguration::gameplay;
        kotte::Application app{ 1280, 720, "Kotte", seed, configuration };
        app.run();
    } catch(const std::exception& error){
        TraceLog(LOG_ERROR, "%s", error.what());
        return 1;
    }    
    return 0;
}
