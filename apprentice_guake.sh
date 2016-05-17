#!/usr/bin/env bash
# Install the Apprentice colorscheme into Guake

gconftool-2 -s -t string /apps/guake/style/background/color '#262626262626'
gconftool-2 -s -t string /apps/guake/style/font/color '#bcbcbcbcbcbc'
gconftool-2 -s -t string /apps/guake/style/font/palette '#1c1c1c1c1c1c:#afaf5f5f5f5f:#5f5f87875f5f:#878787875f5f:#5f5f8787afaf:#5f5f5f5f8787:#5f5f87878787:#6c6c6c6c6c6c:#444444444444:#ffff87870000:#8787afaf8787:#ffffffffafaf:#8f8fafafd7d7:#87878787afaf:#5f5fafafafaf:#ffffffffffff'
