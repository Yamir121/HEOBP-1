#include "Widget.h"
#include "InputWidget.h"
#include "BorderDecorator.h"
#include "TouchDecorator.h"

Widget* Widget::makeWidget(int type) {
    Widget* widget;

    if (type==0) {
        widget = new InputWidget(80, 24);
    } else if (type==1) {
        widget = new BorderDecorator(new TouchDecorator(new InputWidget(80, 24)));
    }

    return widget;
}