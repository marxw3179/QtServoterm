/*
* This file is part of the stmbl project.
*
* Copyright (C) 2020 Forest Darling <fdarling@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef STMBL_SERVOTERM_HISTORYLINEEDIT_H
#define STMBL_SERVOTERM_HISTORYLINEEDIT_H

#include <QLineEdit>
#include <QStringList>

namespace STMBL_Servoterm {

class ScopeDataDemux;

class HistoryLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    HistoryLineEdit(QWidget *widget = nullptr);
    void saveLine();
protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    
    QStringList _history;
    QStringList::iterator _current;
};

} // namespace STMBL_Servoterm

#endif // STMBL_SERVOTERM_HISTORYLINEEDIT_H
