#!/bin/sh
find . -name "*.sh" -execdir basename {} ';' | cut -f 1 -d '.'
