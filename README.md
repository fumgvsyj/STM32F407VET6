&nbsp;&nbsp;This is a project based on stm32f407vet6. <br>


## 简介
&nbsp;&nbsp;此为stm32f407vet6的一个C/C++混编工程(供戏耳,莫当真)，包含了一些实验项目，使用了FreeRTOS、LVGL等。 <br>
此工程可分为Application、Module、BSP、Library、GUI、Drivers这几个部分

- **Application**：即应用级，是与硬件无关的部分，只管应用的实现。包含各种实验项目，如语音存储与回放、双音频信号发生器等。
通过其Base下的JYZQ_Conf.h来控制使用哪个项目，由C++实现  <br><br>
- **Module**：即模块级，主要用于编写各种算法等，与驱动无关，主要由C++实现  <br><br>
- **BSP**：板级支持包，本想建立Drivers目录但与后面重名了。基于HAL编写的裸机驱动，同时提供对应C接口供使用 <br><br>
- **Library**：库，包含了第三方库如FreeRTOS、LVGL、FATS等，同时添加了DATA目录，用于存放一些数据，如正弦波波形数据等  <br><br>
- **GUI**：设计用户界面的，使用的是LVGL，里面包含了界面设计和界面逻辑以及资源文件三部分  <br><br>
- **Drivers**：里面存放的是ST官方提供的HAL，除了stm32fxx_hal.h里我添加了一个Error_Handler内联函数外，其余地方未修改。同时为了避免误操作，把整个文件夹设置成了只读状态  <br><br>


**构想**：<br>
&nbsp;&nbsp;框架主体使用的是**FreeRTOS**，除了FreeRTOS本身自由、简单易上手的特点外，另一点是CLion集成了FreeRTOS的图形化调试，非常直观。同时，把整体开发流程主要分为了驱动、模块、应用三级，同时这些驱动、模块、应用相关文件由一个xxx_Conf.h来控制，决定了哪些文件可以被编译。<br>
  
<!-- 闹着玩的 -->
**人员**：WJY、WZX、XZQ &nbsp;&nbsp;&nbsp; 软：JY、ZQ &nbsp;&nbsp; 硬：ZX <br>
<!-- 一个磕磕碰碰的团队 -->
<!-- ZQ开发&维护  JY开发  ZX硬件支持-->
  
------
______

### 2024-10-7
&nbsp;&nbsp;Oh，竟然还有Rust开发的TockOS。Rust看着还挺简洁的，但现在生态还得观望观望。<br>
&nbsp;&nbsp;要我说真正适合开发的编程语言还得是像Koltin那样，语法非常简洁美观。比如分号就该“可有可无”，因为现在大多数都是写一行换一行，
基本不会把语句都挤在一行。所以应该默认可以不用分号作结尾，遇到特殊的情况再用分号作结尾，这样既不用每句都加一个分号，也不用像Python那样处处考虑缩进
<!-- 尝试了一下C++20的module特性，实在是太难了，光CMake如何配置就有好几种教程，结果试来试去几个小时啥也没干成，真是飞天大。我还是先当一会保守派吧-->
<!-- github总会时不时连不上去，更换DNS也没改善多少。测试了一下，科学上网还真有用。 -->


### 2024-10-6
&nbsp;&nbsp;听说Zephyr劲头很不错，有空试一下<br>
<!-- 真是奇怪啊，18:30到19:00左右github就没有那么卡了，可以访问服务器了。后面又不行了，这混账的网络问题。这莫非是想让我们晚上办公？可怜我现在还不会魔法…… -->
<!-- 还是在CLion里面写Readme舒服啊，预览与代码补全一步到位~ 更别说还有什么框选快捷选择~-->
<!-- 又是markdown语法又是标签语言的，啊！！    慢慢学吧 -->
<!-- 我了个天呐，这个Zephyr的linux味十足，先放一放 -->

### 2024-9-22
&nbsp;&nbsp;曾有一个包含些许小项目的完整stm32f407本地工程，但没有推送。在一次重装中手生了，误把所有数据都清除了。如今先建一个大致的框架，后续且行且看吧 <br>
<!-- 板子什么时候到啊，该不会是国庆吧 -->

<!-- 注释区 -->
<!-- 防呆区 -->
<!-- 
 *  CLion：
 *        ① 右击本地分支，【更新】的意思是把远程仓库最新的提交更新到本地，【推送】则相反。【拉取】是把本地分支搞到最新，当然它只是个请求。
 *        ② 如果【推送】失败，那么说明时候未到，我的意思是网络问题，得等一段时间或者上魔法
-->