#!/bin/bash
rsync -aP --exclude ".idea" . styl3r@192.168.43.12:~/CLionProjects/JSE
rsync -aP --exclude ".idea" styl3r@192.168.43.12:~/CLionProjects/JSE/ .

