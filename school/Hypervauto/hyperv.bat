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
# �������ԱȨ��
set templatepath=C:\hv\vhd
#����ģ����·��
set vpspath=C:\hv\vps
# ����VPS·��
cls
goto :menu

:menu
cls
title �˵�
echo ==============================
echo Hyper-V Auto VM-manager
echo Hyper-V Bat 4.0�ع���
echo ���ߣ�
echo ==============================
echo ��ǰ������
echo ģ����·��=%templatepath%
echo VPS���̴��·��=%vpspath%
echo ==============================
echo 1.�򵥴���VM
echo 2.���Ӵ���VM
echo 3.�ı�VM����
echo 4.ɾ��VM
echo 5.�г������
echo 6.���������
echo 7.�ر������
echo 8.���������
echo 9.�˳��ű�
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
title ����VM�����װ棩
cls
echo ��������Ҫ����VM������
set name=δ����
set /p name=
echo ��������Ҫ�����������ϵͳģ�����ƣ����� 2012
set  system=δ����
set /p system=
cls
echo =======================================
echo ��������Ҫ������������ͺ�
echo 1c1g=b1s
echo 1c2g=b2s
echo 2c2g=b3s
echo 2c4g=b4s
echo 4c4g=b5s
echo 4c8g=b6s
echo 8c8g=b7s
echo 8c16g=b8s
echo 16c16g=b9s
echo q=�ص���ҳ
echo ---------------------------------------
echo �����룺
echo ---------------------------------------
set xh=0
set /p xh=
if %xh%==0 (
echo ������
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
echo ��������Ҫ���������������
set name=0
set /p name=
echo ��������Ҫ�����������ģ�壨����2012 ����2012.vhdx��
set system=0
set /p system=
echo �Ƿ�ʹ�ò������(1��0�� Ĭ��1)
set different=1
set /p different=
echo �����ڴ��С(����1,����ֵΪ����)
set memory=1
set /p memory=
echo �Ƿ�̬�ڴ�(1��0�� Ĭ��1)
set dynamic=1
set /p dynamic=
echo ����CPU������ (Ĭ��1)
set cpu=1
set /p cpu=
echo �Ƿ�����CPUʹ��(1��0��Ĭ��0)
set limitcpu=0
set /p limitcpu=
if %limitcpu%==1 (
echo ������CPU���ٰٷֱ�(Ĭ��50%��
set limit=50
set /p limit=
)
echo �Ƿ����������Ƕ�ף�1��0��,Ĭ��0 WIN2016���²�֧�������Ƕ��!��
set nesting=0
set /p nesting=
echo �Ƿ�Ϊ���������������(1��0��Ĭ��0)
set datadisk=0
set /p datadisk=
if %datadisk%==1 (
echo �����������̴�С
set disk=0
set /p disk=
)
echo �����������Ž�(Ĭ��lan)
set network=lan
set /p network=
echo �Ƿ����������(1��0�� Ĭ��1)
set start=1
set /p start=
set api=0
goto :create
cls

:create
cls
title ���ڿ�����������ȴ��û�ȷ�Ϻ󴴽������
echo =======================================
echo ���������������Ϣ�������ⰴť���������
echo ������Դ�Ƿ�����api=%api%
echo ģ��·��%templatepath%
echo VM·��%vpspath%
echo ����=%name%
echo ģ��=%system%
echo �������%different%
echo �ڴ��С=%memory%G
echo �Ƿ�̬�ڴ�=%dynamic%
echo CPU������=%cpu%��
echo �Ƿ�����CPUʹ��=%limitcpu%
if %limitcpu%==1 echo CPU����=%limit%
echo �Ƿ񴴽�������=%datadisk%
if %datadisk%==1 echo ������=%disk%G
echo �Ž�����=%network%
echo �����Ƕ��=%nesting%
echo �Ƿ�����������=%start%
echo =======================================
if %api%==0 pause
cls
title �û�ȷ�ϣ���ʼ���������
if %different%==0 copy %templatepath%\%system%.vhdx %vpspath%\%name%.vhdx
:: ������������̾���
if %different%==1 powershell New-VHD -ParentPath %templatepath%\%system%.vhdx -Path %vpspath%\%name%.vhdx -Differencing
:: ����һ���������
powershell New-VM -Name "%name%" -MemoryStartupBytes %memory%GB -VHDPath %vpspath%\%name%.vhdx -SwitchName %network%
powershell Set-VMMemory %name% -DynamicMemoryEnabled $false
:: ����һ����������������ڴ棬����������
if %dynamic%==1 powershell Set-VMMemory %name% -DynamicMemoryEnabled $true -MinimumBytes 32MB -StartupBytes %memory%GB -MaximumBytes %memory%GB -Priority 50 -Buffer 20
:: ���ö�̬�ڴ�
powershell Set-VM -VMName %name% -CheckpointType Disabled
:: ���ü���
if %limitcpu%==0 powershell Set-VMProcessor %name% -Count %cpu%
:: ����CPU������
if %limitcpu%==1 powershell Set-VMProcessor %Name% -Count %cpu% -Maximum %limit% -RelativeWeight 100
:: ����CPU����
if %datadisk%==1 powershell New-VHD -Path %vpspath%\data\%name%data.vhdx -BlockSizeBytes 128MB -LogicalSectorSize 4KB -SizeBytes %disk%GB
if %datadisk%==1 powershell Add-VMHardDiskDrive -VMName %name% -Path %vpspath%\data\%name%data.vhdx
:: ����������
if %nesting%==1 powershell Set-VMProcessor -VMName %name% -ExposeVirtualizationExtensions $true
:: ����Ƕ�����⻯
if %start%==1 PowerShell Start-VM -Name %name%
:: ����VM
cls
title �������
echo �������
pause
goto :menu

:changevm
cls
title �޸�VM
echo ������Ҫ�޸ĵ�VM����(�����̹ر������)
set name=1
set /p name=
PowerShell Stop-VM -Name %name% -TurnOff
cls
echo =======================================
echo 1.�ı�VM��С
echo 2.��װVM
echo 3.����������
echo 4.ɾ��������
echo 5.�ص����˵�
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
title ����������б�
powershell Get-VM
pause
goto :menu

:startvm
cls
title ���������
echo ����Ҫ������VM����
set name=0
set /p name=
PowerShell Start-VM -Name %name%
echo �����ɹ�
pause
goto :menu

pause
goto :menu

:poweroff

:reboot
title ���������
cls
echo ����Ҫ����VM����
set name=0
set/p name=
powershell Restart-VM %name%
echo VM�������
pause
goto :menu

:change
cls
echo �����µ�CPU��С
set cpu=0
set /p cpu=
echo �����µ��ڴ��С��G��
set mem=0
set /p mem=
powershell Set-VMProcessor %name% -Count %CPU%
powershell Set-VMMemory %name% -DynamicMemoryEnabled $true -MinimumBytes 32MB -StartupBytes %mem%GB -Priority 50 -Buffer 20
PowerShell Start-VM -Name %name%
echo VM״̬�������
pause
goto :changevm

:recreatevm
cls
echo ����Ҫ��װ��������(Ĭ�ϲ������)
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
echo �������װ���
echo ���û�������̳��ֱ�������
pause
goto :changevm

:poweroffvm
title �ر������
cls
echo ����Ҫ�ر�VM����
set name=0
set /p name=
PowerShell Stop-VM -Name %name% -TurnOff
echo �ر����
pause
goto :menu

:adddisk
cls
echo ���������������̵Ĵ�С
set capacity=0
set /p capacity=
powershell New-VHD -Path %vpspath%\date\%name%data.vhdx -BlockSizeBytes 128MB -LogicalSectorSize 4KB -SizeBytes %capacity%GB
powershell Add-VMHardDiskDrive -VMName %name% -Path %vpspath%\date\%name%data.vhdx
cls
PowerShell Start-VM -Name %name%  
echo �������
goto :changevm

:deldisk
cls
powershell PowerShell Remove-VMHardDiskDrive -VMName %name% -ControllerType IDE -ControllerNumber 0 -ControllerLocation 1
del %vpspath%\date\%name%date.vhdx
PowerShell Start-VM -Name %name%  
cls
pause
echo ɾ�����
goto :changevm

:delvm
cls
title ɾ��VM
echo ������ر������������ ����VPS1
set name=0
set /p name=
PowerShell Stop-VM -Name %name% -TurnOff 
PowerShell Remove-VM -Name "%name% -Force
del %vpspath%\%name%.vhdx 
del %vpspath%\data\%name%data.vhdx
echo ɾ�����
pause
goto :menu

:exit
exit

pause