@echo off
set api=0
if %api%==1 goto :create

setlocal
set uac=~uac_permission_tmp_%random%
md "%SystemRoot%\system32\%uac%" 2>nul
if %errorlevel%==0 ( rd "%SystemRoot%\system32\%uac%" >nul 2>nul ) else (
    echo set uac = CreateObject^("Shell.Application"^)>"%temp%\%uac%.vbs"
    echo uac.ShellExecute "%~s0","","","runas",1 >>"%temp%\%uac%.vbs"
    echo WScript.Quit >>"%temp%\%uac%.vbs"
    "%temp%\%uac%.vbs" /f
    del /f /q "%temp%\%uac%.vbs" & exit )
endlocal
# 申请管理员权限
set templatepath=C:\hv\vhd
#设置模板存放路径
set vpspath=C:\hv\vps
# 设置VPS路径
cls
goto :menu

:menu
cls
title 菜单
echo ==============================
echo Hyper-V Auto VM-manager
echo Hyper-V Bat 4.0重构版
echo 作者：
echo ==============================
echo 当前变量：
echo 模板存放路径=%templatepath%
echo VPS磁盘存放路径=%vpspath%
echo ==============================
echo 1.简单创建VM
echo 2.复杂创建VM
echo 3.改变VM配置
echo 4.删除VM
echo 5.列出虚拟机
echo 6.开启虚拟机
echo 7.关闭虚拟机
echo 8.重启虚拟机
echo 9.退出脚本
set /p num=
if %num%==1 goto :newvm
if %num%==2 goto :newvm2
if %num%==3 goto :changevm
if %num%==4 goto :delvm
if %num%==5 goto :allvm
if %num%==6 goto :startvm
if %num%==7 goto :poweroffvm
if %num%==8 goto :reboot
if %num%==9 goto :exit
goto :menu

:newvm
title 创建VM（简易版）
cls
echo 请输入你要创建VM的名称
set name=未输入
set /p name=
echo 请输入你要创建虚拟机的系统模板名称，比如 2012
set  system=未输入
set /p system=
cls
echo =======================================
echo 请输入你要创建的虚拟机型号
echo 1c1g=b1s
echo 1c2g=b2s
echo 2c2g=b3s
echo 2c4g=b4s
echo 4c4g=b5s
echo 4c8g=b6s
echo 8c8g=b7s
echo 8c16g=b8s
echo 16c16g=b9s
echo q=回到主页
echo ---------------------------------------
echo 请输入：
echo ---------------------------------------
set xh=0
set /p xh=
if %xh%==0 (
echo 请输入
pause
goto :newvm
)
if %xh%==b1s goto :b1s
if %xh%==b2s goto :b2s
if %xh%==b3s goto :b3s
if %xh%==b4s goto :b4s
if %xh%==b5s goto :b5s
if %xh%==b6s goto :b6s
if %xh%==b7s goto :b7s
if %xh%==b8s goto :b8s
if %xh%==b9s goto :b9s
if %xh%==q goto :menu

:b1s
set different=1
set memory=1
set dynamic=1
set cpu=1
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b2s
set different=1
set memory=2
set dynamic=1
set cpu=1
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b3s
set different=1
set memory=2
set dynamic=1
set cpu=2
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b4s
set different=1
set memory=4
set dynamic=1
set cpu=2
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b5s
set different=1
set memory=4
set dynamic=1
set cpu=4
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b6s
set different=1
set memory=8
set dynamic=1
set cpu=4
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b7s
set different=1
set memory=8
set dynamic=1
set cpu=8
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b8s
set different=1
set memory=16
set dynamic=1
set cpu=8
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:b9s
set different=1
set memory=16
set dynamic=1
set cpu=16
set limitcpu=0
set datadisk=0
set network=lan
set nesting=0
set start=1
goto :create

:newvm2
title NEW-VM2
cls
echo 请输入你要创建虚拟机的名称
set name=0
set /p name=
echo 请输入你要创建虚拟机的模板（比如2012 就是2012.vhdx）
set system=0
set /p system=
echo 是否使用差异存盘(1是0否 默认1)
set different=1
set /p different=
echo 设置内存大小(比如1,输入值为数字)
set memory=1
set /p memory=
echo 是否动态内存(1是0否 默认1)
set dynamic=1
set /p dynamic=
echo 设置CPU核心数 (默认1)
set cpu=1
set /p cpu=
echo 是否限制CPU使用(1是0否，默认0)
set limitcpu=0
set /p limitcpu=
if %limitcpu%==1 (
echo 请输入CPU限速百分比(默认50%）
set limit=50
set /p limit=
)
echo 是否启用虚拟机嵌套（1是0否,默认0 WIN2016以下不支持虚拟机嵌套!）
set nesting=0
set /p nesting=
echo 是否为虚拟机加入数据盘(1是0否，默认0)
set datadisk=0
set /p datadisk=
if %datadisk%==1 (
echo 请输入数据盘大小
set disk=0
set /p disk=
)
echo 请输入网卡桥接(默认lan)
set network=lan
set /p network=
echo 是否开启此虚拟机(1是0否 默认1)
set start=1
set /p start=
set api=0
goto :create
cls

:create
cls
title 正在开启虚拟机，等待用户确认后创建虚拟机
echo =======================================
echo 下面是你输入的信息，按任意按钮创建虚拟机
echo 开机来源是否来自api=%api%
echo 模板路径%templatepath%
echo VM路径%vpspath%
echo 名称=%name%
echo 模板=%system%
echo 差异存盘%different%
echo 内存大小=%memory%G
echo 是否动态内存=%dynamic%
echo CPU核心数=%cpu%核
echo 是否限制CPU使用=%limitcpu%
if %limitcpu%==1 echo CPU限速=%limit%
echo 是否创建数据盘=%datadisk%
if %datadisk%==1 echo 数据盘=%disk%G
echo 桥接网卡=%network%
echo 虚拟机嵌套=%nesting%
echo 是否开启这个虚拟机=%start%
echo =======================================
if %api%==0 pause
cls
title 用户确认，开始创建虚拟机
if %different%==0 copy %templatepath%\%system%.vhdx %vpspath%\%name%.vhdx
:: 复制虚拟机磁盘镜像
if %different%==1 powershell New-VHD -ParentPath %templatepath%\%system%.vhdx -Path %vpspath%\%name%.vhdx -Differencing
:: 创建一个差异存盘
powershell New-VM -Name "%name%" -MemoryStartupBytes %memory%GB -VHDPath %vpspath%\%name%.vhdx -SwitchName %network%
powershell Set-VMMemory %name% -DynamicMemoryEnabled $false
:: 创建一个虚拟机，并设置内存，网卡，名称
if %dynamic%==1 powershell Set-VMMemory %name% -DynamicMemoryEnabled $true -MinimumBytes 32MB -StartupBytes %memory%GB -MaximumBytes %memory%GB -Priority 50 -Buffer 20
:: 设置动态内存
powershell Set-VM -VMName %name% -CheckpointType Disabled
:: 禁用检查点
if %limitcpu%==0 powershell Set-VMProcessor %name% -Count %cpu%
:: 设置CPU核心数
if %limitcpu%==1 powershell Set-VMProcessor %Name% -Count %cpu% -Maximum %limit% -RelativeWeight 100
:: 设置CPU限制
if %datadisk%==1 powershell New-VHD -Path %vpspath%\data\%name%data.vhdx -BlockSizeBytes 128MB -LogicalSectorSize 4KB -SizeBytes %disk%GB
if %datadisk%==1 powershell Add-VMHardDiskDrive -VMName %name% -Path %vpspath%\data\%name%data.vhdx
:: 设置数据盘
if %nesting%==1 powershell Set-VMProcessor -VMName %name% -ExposeVirtualizationExtensions $true
:: 开启嵌套虚拟化
if %start%==1 PowerShell Start-VM -Name %name%
:: 开启VM
cls
title 创建完成
echo 创建完成
pause
goto :menu

:changevm
cls
title 修改VM
echo 请输入要修改的VM名称(会立刻关闭虚拟机)
set name=1
set /p name=
PowerShell Stop-VM -Name %name% -TurnOff
cls
echo =======================================
echo 1.改变VM大小
echo 2.重装VM
echo 3.增加数据盘
echo 4.删除数据盘
echo 5.回到主菜单
echo =======================================
set num=0
set /p num=
if %num%==1 goto :change
if %num%==2 goto :recreatevm
if %num%==3 goto :adddisk
if %num%==4 goto :deldisk
if %num%==5 goto :menu
if %num%==0 goto :changevm

:allvm
cls
title 所有虚拟机列表
powershell Get-VM
pause
goto :menu

:startvm
cls
title 开启虚拟机
echo 输入要开启的VM名称
set name=0
set /p name=
PowerShell Start-VM -Name %name%
echo 开启成功
pause
goto :menu

pause
goto :menu

:poweroff

:reboot
title 重启虚拟机
cls
echo 输入要重启VM名称
set name=0
set/p name=
powershell Restart-VM %name%
echo VM重启完成
pause
goto :menu

:change
cls
echo 输入新的CPU大小
set cpu=0
set /p cpu=
echo 输入新的内存大小（G）
set mem=0
set /p mem=
powershell Set-VMProcessor %name% -Count %CPU%
powershell Set-VMMemory %name% -DynamicMemoryEnabled $true -MinimumBytes 32MB -StartupBytes %mem%GB -Priority 50 -Buffer 20
PowerShell Start-VM -Name %name%
echo VM状态更改完毕
pause
goto :changevm

:recreatevm
cls
echo 输入要重装镜像名称(默认差异存盘)
set system=0
set /p system= 
TIMEOUT /T 3
del %vpspath%\%name%.vhdx
powershell Remove-VMHardDiskDrive -VMName %name% -ControllerType IDE -ControllerNumber 0 -ControllerLocation 0
powershell Remove-VMHardDiskDrive -VMName %name% -ControllerType IDE -ControllerNumber 0 -ControllerLocation 1
powershell New-VHD -ParentPath %templatepath%\%system%.vhdx -Path %vpspath%\%name%.vhdx -Differencing

powershell Add-VMHardDiskDrive -VMName %name% -Path %vpspath%\%name%.vhdx  
powershell Add-VMHardDiskDrive -VMName %name% -Path %vpspath%\date\%name%data.vhdx  
PowerShell Start-VM -Name %name%  
cls
echo 虚拟机重装完成
echo 如果没有数据盘出现报错正常
pause
goto :changevm

:poweroffvm
title 关闭虚拟机
cls
echo 输入要关闭VM名称
set name=0
set /p name=
PowerShell Stop-VM -Name %name% -TurnOff
echo 关闭完成
pause
goto :menu

:adddisk
cls
echo 请输入增加数据盘的大小
set capacity=0
set /p capacity=
powershell New-VHD -Path %vpspath%\date\%name%data.vhdx -BlockSizeBytes 128MB -LogicalSectorSize 4KB -SizeBytes %capacity%GB
powershell Add-VMHardDiskDrive -VMName %name% -Path %vpspath%\date\%name%data.vhdx
cls
PowerShell Start-VM -Name %name%  
echo 增加完成
goto :changevm

:deldisk
cls
powershell PowerShell Remove-VMHardDiskDrive -VMName %name% -ControllerType IDE -ControllerNumber 0 -ControllerLocation 1
del %vpspath%\date\%name%date.vhdx
PowerShell Start-VM -Name %name%  
cls
pause
echo 删除完成
goto :changevm

:delvm
cls
title 删除VM
echo 请输入关闭虚拟机的名称 比如VPS1
set name=0
set /p name=
PowerShell Stop-VM -Name %name% -TurnOff 
PowerShell Remove-VM -Name "%name% -Force
del %vpspath%\%name%.vhdx 
del %vpspath%\data\%name%data.vhdx
echo 删除完成
pause
goto :menu

:exit
exit

pause