@echo off
hdc kill
hdc shell "tar -czvf /data/log.tar.gz /data/log/"
hdc file recv /data/log.tar.gz
hdc shell "rm -rf /data/log.tar.gz"
pause
