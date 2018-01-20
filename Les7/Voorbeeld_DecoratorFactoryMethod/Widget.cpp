#include "Widget.h"
#include "InputWidget.h"
#include "BorderDecorator.h"
#include "TouchDecorator.h"
#include "VirtualTouchDecorator.h"

#define HOLOLENS true

Widget* Widget::makeWidget(int type) {
    Widget* widget;
    if (type == 1) {
        widget = new InputWidget(80, 24);
    } else if (type == 2) {
        Widget* tmp = new BorderDecorator(new InputWidget(80, 24));
        if (HOLOLENS) {
            widget = new VirtualTouchDecorator(tmp);
        } else {
            widget = new TouchDecorator(tmp);
        }
    } else if (type == 3) {
        widget = new BorderDecorator((new InputWidget(80, 24)));
    }
    return widget;
}
