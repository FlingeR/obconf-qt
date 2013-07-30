/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2013  <copyright holder> <email>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/


#ifndef OBCONF_MAINDIALOG_H
#define OBCONF_MAINDIALOG_H

#include <QDialog>
#include "ui_obconf.h"

namespace Obconf {

class MainDialog : public QDialog {
  Q_OBJECT

public:
  MainDialog();
  virtual ~MainDialog();

  virtual void accept();
  virtual void reject();

private:
  void setLeftHandedMouse();
  void loadSettings();

  void theme_setup_tab();
  void appearance_setup_tab();
  void windows_setup_tab();
  void mouse_setup_tab();
  void moveresize_setup_tab();
  void margins_setup_tab();
  void desktops_setup_tab();
  void dock_setup_tab();

private Q_SLOTS:
  // theme
  
  //apearance
  void on_window_border_toggled(bool checked);
  void on_animate_iconify_toggled(bool checked);
  void on_title_layout_textChanged(const QString& text);

  // font
  void on_font_active_changed();
  void on_font_inactive_changed();
  void on_font_menu_header_changed();
  void on_font_menu_item_changed();
  void on_font_active_display_changed();
  void on_font_inactive_display_changed();

  // move & resize
  void on_resist_window_valueChanged(int newValue);
  void on_resist_edge_valueChanged(int newValue);
  void on_resize_contents_toggled(bool checked);

  void on_drag_threshold_valueChanged(int newValue);

  void on_fixed_x_pos_valueChanged(int newValue);
  void on_fixed_y_pos_valueChanged(int newValue);
  void on_warp_edge_toggled(bool checked);
  void on_warp_edge_time_valueChanged(int newValue);

  // margins
  void on_margins_left_valueChanged(int newValue);
  void on_margins_right_valueChanged(int newValue);
  void on_margins_top_valueChanged(int newValue);
  void on_margins_bottom_valueChanged(int newValue);

  // mouse
  void on_focus_mouse_toggled(bool checked);
  void on_focus_delay_valueChanged(int newValue);
  void on_focus_raise_toggled(bool checked);
  void on_focus_notlast_toggled(bool checked);
  void on_focus_under_mouse_toggled(bool checked);
  void on_doubleclick_time_valueChanged(int newValue);

  // desktop
  void on_desktop_num_valueChanged(int newValue);
  void on_desktop_popup_toggled(bool checked);
  void on_desktop_popup_time_valueChanged(int newValue);

  // docks
  void on_dock_float_x_valueChanged(int newValue);
  void on_dock_float_y_valueChanged(int newValue);
  void on_dock_stacking_top_toggled(bool checked);
  void on_dock_stacking_normal_toggled(bool checked);
  void on_dock_stacking_bottom_toggled(bool checked);
  void on_dock_nostrut_toggled(bool checked);
  void on_dock_hide_toggled(bool checked);
  void on_dock_hide_delay_valueChanged(int newValue);
  void on_dock_show_delay_valueChanged(int newValue);


private:
  Ui::MainDialog ui;
};

}

#endif // OBCONF_MAINDIALOG_H
