// This file is part of VPaint, a vector graphics editor.
//
// Copyright (C) 2012-2015 Boris Dalstein <dalboris@gmail.com>
//
// The content of this file is MIT licensed. See COPYING.MIT, or this link:
//   http://opensource.org/licenses/MIT

#ifndef COLORSELECTOR_H
#define COLORSELECTOR_H

#include <QToolButton>

#include "Color.h"

class ColorSelector : public QToolButton
{
    Q_OBJECT

public:
    explicit ColorSelector(const Color & initialColor = Qt::black, QWidget *parent = 0);

    // Get/Set color
    Color color() const;
    void setColor(const Color & newColor);

    // Set icon of QToolButton to match stored color.
    //
    // If clients change the icon size via setIconSize(), then they
    // must call updateIcon() afterwards. Ideally setIconSize() should be
    // overriden call this automatically, but unfortunately  setIconSize()
    // isn't a virtual method.
    void updateIcon();

signals:
    void colorChanged(const Color & newColor);

private slots:
    void processClick_();

private:
    // Stored color
    Color color_;
};

#endif // COLORSELECTOR_H
