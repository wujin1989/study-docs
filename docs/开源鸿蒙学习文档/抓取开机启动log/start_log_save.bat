@echo off

hdc kill
hdc shell hilog -w stop
hdc shell hilog -r
hdc shell hilog -Q pidoff
hdc shell hilog -p off
hdc shell hilog -b D
hdc shell hilog -r -t app,core,init
hdc shell hilog -w start -t app,core,init -m none
echo "start log save"

pause