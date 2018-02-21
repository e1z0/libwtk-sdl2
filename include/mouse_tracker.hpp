#ifndef LIBWTK_SDL2_MOUSE_TRACKER_HPP
#define LIBWTK_SDL2_MOUSE_TRACKER_HPP

#include <optional>

#include "mouse_event.hpp"

// Tracks mouse movement and state and produces events in a way that widgets
// don't have to hold a lot of internal state.
struct mouse_tracker
{
    void mouse_down(point p);
    mouse_up_event mouse_up(point p);

    // TODO add mouse movement path

    private:

    std::optional<point> _opt_down_pos;
};

#endif
