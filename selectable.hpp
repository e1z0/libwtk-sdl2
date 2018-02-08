#ifndef SELECTABLE_HPP
#define SELECTABLE_HPP

#include "widget.hpp"

struct selectable : widget
{
    widget * find_selectable(navigation_type nt, point center) override;
    widget * navigate_selectable(navigation_type nt, point center) override;

    void on_select() override;
    void on_unselect() override;

    ~selectable() override;
};

#endif

