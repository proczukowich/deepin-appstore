/*
 * Copyright (C) 2015 ~ 2017 Deepin Technology Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SHELL_TOOLTIP_H
#define SHELL_TOOLTIP_H

#include <QWidget>

class QLabel;
class QHBoxLayout;
//class QPropertyAnimation;


class ToolTip : public QWidget {
    Q_OBJECT

    Q_ENUMS(ArrowDirection)
public:
    enum ArrowDirection {
        ArrowLeft,
        ArrowRight,
    };

    explicit ToolTip(bool supportBorder, QWidget* parent = nullptr);
    ~ToolTip();

    void moveShow(const int x, const int y);

public Q_SLOTS:
    void show(const QString& text,
              const QRect& activationGeometry);


private:
    QLabel* label = nullptr;
    QHBoxLayout* layout = nullptr;
    ArrowDirection arrowDirection = ArrowRight;
    // QPropertyAnimation* animation = nullptr;

    const bool supportBorder = true;

    void updateStyle();
};


#endif //SHELL_TOOLTIP_H
