#!/bin/sh
# Set Apprentice colorscheme in generic Linux Shell
# TODO: make compatible with xterm, screen, tmux, etc

if [ "$TERM" = "linux" ]; then
  /bin/echo -e "
  \e]P01c1c1c
  \e]P1af5f5f
  \e]P25f875f
  \e]P387875f
  \e]P45f87af
  \e]P55f5f87
  \e]P65f8787
  \e]P76c6c6c
  \e]P8444444
  \e]P9ff8700
  \e]PA87af87
  \e]PBffffaf
  \e]PC8fafd7
  \e]PD8787af
  \e]PE5fafaf
  \e]PFffffff
  "
  # get rid of artifacts
  clear
fi
