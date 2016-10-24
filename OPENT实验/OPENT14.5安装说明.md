# 一、安装前准备 #
  


1. 安装前必须先安装一个编译平台（本人装的是VS2012）；
2. 配置环境变量：添加path：`C:\Program Files\Microsoft Visual Studio 11.0\VC\bin;C:\Program Files\Microsoft Visual Studio 11.0\Common7\IDE;C:\Program Files\Microsoft Visual Studio 11.0\Common7\Tools;` ，新建lib：`C:\Program Files\Microsoft Visual Studio 11.0\VC\lib;`，新建include：`C:\Program Files\Microsoft Visual Studio 11.0\VC\include;`；  
3. 进入命令提示行输入`cl`检查是否配置成功；

# 二、安装OPENT14.5 #


1. 按顺序安装四个安装文件，顺序依次为`modeler_145A_PL1_7116_win.exe`，`modeler_docs_28-Jan-2008_win.exe`，`models_145A_PL1_27Feb08_win.exe`，`OPNET.Modeler.14.5.License.Maker-FFS.exe`；  
2. 四个安装文件安装路径要一致；
3. 全部安装完成之后，将`C:\ProgramFiles\OPNET\14.5.A\sys\pc_intel_win32\bin\manifest_NET2008`的全面文件复制到`C:\Program Files\OPNET\14.5.A\sys\pc_intel_win32\bin`目录下；  
4. 配置环境变量：添加path：`C:\Program Files\OPNET\14.5.A\sys\pc_intel_win32\bin`；添加include：`C:\Program Files\OPNET\14.5.A\sys\include;C:\Program Files\OPNET\14.5.A\models\std\include;`；添加lib：`C:\Program Files\OPNET\14.5.A\sys\lib;C:\Program Files\OPNET\14.5.A\sys\pc_intel_win32\lib`；
5. 进入命令提示行输入`ml`检查是否配置成功；

# 三、运行OPENT14.5 #
1. 需要以兼容模式运行：Windows XP Service Pack 1/2 均可；



## 注:             
           
安装第一个文件时候可能会弹出如下警告：`A compiler was found, but is not configured properly`，请直接忽略点击yes按钮 