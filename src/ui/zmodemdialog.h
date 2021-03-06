/***************************************************************************
 *   fqterm, a terminal emulator for both BBS and *nix.                    *
 *   Copyright (C) 2008 fqterm development group.                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.               *
 ***************************************************************************/

#ifndef FQTERM_ZMODEM_DIALOG_H
#define FQTERM_ZMODEM_DIALOG_H

#include "ui_zmodemdialog.h"

namespace FQTerm {

class zmodemDialog: public QDialog {
  Q_OBJECT;
 public:
  zmodemDialog(QWidget *parent_ = 0, Qt::WindowFlags fl = 0);
  ~zmodemDialog();

  void setFileInfo(const QString &, int);
  void addErrorLog(const QString &);
  void clearErrorLog();
  void setProgress(int);

 public slots:
  void slotCancel();

 signals:
  void canceled();

 private:
  Ui::zmodemDialog ui_;
};

}  // namespace FQTerm

#endif  // FQTERM_ZMODEM_DIALOG_H
