   This is a project based on stm32f407vet6. <br>


## 简介
&nbsp;&nbsp;此为stm32f407vet6的一个C/C++混编工程(供戏耳,莫当真)，包含了一些实验项目，使用了FreeRTOS、LVGL等。 <br>
此工程可分为Application、Module、BSP、Library、GUI、Drivers这几个部分

**Application**：即应用级，是与硬件无关的部分，只管应用的实现。包含各种实验项目，如语音存储与回放、双音频信号发生器等。
通过其Base下的JYZQ_Conf.h来控制使用哪个项目，由C++实现  <br><br>
**Module**：即模块级，主要用于编写各种算法等，与驱动无关，主要由C++实现  <br><br>
**BSP**：板级支持包，本想建立Drivers目录但与后面重名了。基于HAL编写的裸机驱动，同时提供对应C接口供使用 <br><br>
**Library**：库，包含了第三方库如FreeRTOS、LVGL、FATS等，同时添加了DATA目录，用于存放一些数据，如正弦波波形数据等  <br><br>
**GUI**：设计用户界面的，使用的是LVGL，里面包含了界面设计和界面逻辑以及资源文件三部分  <br><br>
**Drivers**：里面存放的是ST官方提供的HAL，除了stm32fxx_hal.h里我添加了一个Error_Handler内联函数外，其余地方未修改。同时为了避免误操作，把整个文件夹设置成了只读状态  <br><br>


**构想**：<br>
  框架主体使用的是**FreeRTOS**，除了FreeRTOS本身自由、简单易上手的特点外，另一点是CLion集成了FreeRTOS的图形化调试，非常直观。同时，把整体开发流程主要分为了驱动、模块、应用三级，同时这些驱动、模块、应用相关文件由一个xxx_Conf.h来控制，决定了哪些文件可以被编译。<br>
<!-- **人员**：WJY、WZX、XZQ &nbsp;&nbsp;&nbsp; 软：JY、ZQ &nbsp;&nbsp; 硬：ZX <br> -->
  
------
______

### 2024-10-6
&nbsp;&nbsp;听说Zephyr劲头很不错，有空试一下

### 2024-9-22
&nbsp;&nbsp;曾有一个包含些许小项目的完整stm32f407本地工程，但没有推送。在一次重装中手生了，误把所有数据都清除了。如今先建一个大致的框架，后续且行且看吧 <br>
