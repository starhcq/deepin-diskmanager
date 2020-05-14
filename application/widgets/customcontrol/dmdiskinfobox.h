/*
* Copyright (C) 2019 ~ 2020 Deepin Technology Co., Ltd.
*
* Author:     linxun <linxun@uniontech.com>
* Maintainer: linxun <linxun@uniontech.com>
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DMDISKINFOBOX_H
#define DMDISKINFOBOX_H

#include <QObject>

class DmDiskinfoBox
{
public:
    DmDiskinfoBox(int level, QString diskpath, QString disksize);
    ~DmDiskinfoBox();

public:
    int addChild(DmDiskinfoBox *child);
    int childCount();
    void print();
public:
    int id;
    int m_level;
    QString m_diskpath;
    QString m_disksize;
    QString partitonlabel;
    QString partitionsize;
    QList<DmDiskinfoBox *> childs;
};

#endif // DMDISKINFOBOX_H