# 立创·实战派 ESP32-S3 专属移植说明 (AgentDeck)

本分支（`feature/lichuang-szp`）专为 **立创开源硬件 · 实战派 ESP32-S3 开发板** 适配移植，支持 3.5 寸 ST7789 IPS 屏幕与板载外设。

---

## 🛠️ 硬件参数
- **主控**：ESP32-S3-WROOM-1 (16MB Flash, 8MB Octal PSRAM)
- **屏幕**：3.5 寸 IPS (ST7789, 320×240, SPI 通信)
- **IO 扩展**：PCA9557 (I2C 地址 `0x19`)，控制 LCD_CS (IO0)
- **背光控制**：GPIO 42（P-MOSFET，**低电平点亮**）

---

## 🚀 方式一：源码编译与一键烧录（推荐）

1. **进入 esp32 目录**：
   ```bash
   cd esp32
   ```

2. **编译固件**：
   ```bash
   pio run -e lichuang_szp
   ```

3. **连接开发板烧录**：
   将数据线插入实战派的 **CH343 串口**（或按 Boot 键进入下载模式）：
   ```bash
   pio run -e lichuang_szp -t upload
   ```

---

## ⚡ 方式二：使用 esptool 烧录预合成固件

如果本地不想安装 PlatformIO 开发环境，可以使用 `esptool` 一键烧录编译合成包 `firmware.factory.bin`：

```bash
pip install esptool
esptool.py --chip esp32s3 -p <你的串口设备> -b 921600 write_flash 0x0 firmware.factory.bin
```

---

## 💻 电脑端上位机连接

1. 烧录完成后，将 USB 数据线插到实战派的 **USB 原生接口**（ESP32-S3 Native USB 口）。
2. 在电脑终端启动 AgentDeck 守护进程：
   ```bash
   npx @agentdeck/setup
   agentdeck daemon
   ```
3. 守护进程会自动识别板子并握手：
   ```text
   Board: lichuang_szp
   Version: 1.10.0
   ```
4. 现在启动 Claude Code 或 Codex，屏幕上的赛博水族馆和 Agent 状态/额度监控就会实时联动！
