#ifndef BOARD_PINOUT_H_
#define BOARD_PINOUT_H_

    // SPI Bus (Shared)
    #define SPI_SCLK                5
    #define SPI_MISO                19
    #define SPI_MOSI                27

    //  LoRa Radio (E22-400M33S / SX1268)
    #define HAS_SX1268
    #define ESP32_DIY_1W_LoRa
    #define RADIO_SCLK_PIN          SPI_SCLK
    #define RADIO_MISO_PIN          SPI_MISO
    #define RADIO_MOSI_PIN          SPI_MOSI
    #define RADIO_CS_PIN            18
    #define RADIO_RST_PIN           23
    #define RADIO_DIO1_PIN          33
    #define RADIO_BUSY_PIN          32
    #define RADIO_RXEN              14
    #define RADIO_TXEN              13
    #define RADIO_WAKEUP_PIN        RADIO_DIO1_PIN
    #define GPIO_WAKEUP_PIN         GPIO_SEL_12

    #define HAS_DISPLAY

    #define GPS_RX              12
    #define GPS_TX              15

   // Ethernet (W5500 Lite)
    #define HAS_ETHERNET
    #define ETH_TYPE                1 
    #define ETH_CS_PIN              15  // Ensure W5500 'SCS' is on 15
    #define ETH_RST_PIN             12  // Ensure W5500 'RST' is on 12
    #define ETH_SCLK_PIN            SPI_SCLK
    #define ETH_MISO_PIN            SPI_MISO
    #define ETH_MOSI_PIN            SPI_MOSI

    //  Display (OLED)
 
    #define OLED_SDA                21
    #define OLED_SCL                22
    #define OLED_RST                -1

    //  Misc
    #define INTERNAL_LED_PIN        2
 

#endif