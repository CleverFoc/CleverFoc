# CleverFoc —— 开源的 FOC 控制库

[![Static Analysis](https://github.com/CleverFoc/CleverFoc/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/CleverFoc/CleverFoc/actions/workflows/cppcheck.yml)
[![Unit testing](https://github.com/CleverFoc/CleverFoc/actions/workflows/code_test.yml/badge.svg)](https://github.com/CleverFoc/CleverFoc/actions/workflows/code_test.yml)

## 1. 简介

CleverFoc 是一个开源的 FOC 控制库，使用 C 语言编写，不依赖任何第三方库，可以轻松的在不同的 MCU 上移植。

CleverFoc 拥有以下特性:

### 针对使用者

- 多种控制模式
    - 电流闭环
    - 速度闭环
    - 位置闭环
    - 开环控制
    - 自定义的控制方案...
- 多种传感器类型
    - ABZ 编码器
    - HALL 传感器
    - 磁编码器
    - 无编码器/无传感器
    - 自定义的编码器...
- 多种电流检测方式
    - 在线电流检测
    - 低端电流检测
        - 3 电阻电流检测
        - 2 电阻电流检测
    - 无电流检测(开环模式)
    - 自定义的电流检测...

### 针对开发者

- 设备驱动框架
    - PWM 设备驱动
    - 电流检测设备驱动
    - 编码器/传感器设备驱动
- 可扩展的控制框架
    - 支持自定义控制算法
- 无第三方依赖，无特定平台依赖
- 详细的注释，方便阅读和修改



## 2. 目录结构

```
CleverFoc
├── include # 头文件
├── test # 测试代码
└── src # 源文件

```

## 3. 使用

**项目尚未处于可用状态，暂时不提供使用方法**


## 4. 许可证

CleverFoc 使用 MIT 许可证，详情请参考 [LICENSE](LICENSE) 文件。