#ifndef BOARD_PINOUT_H_
#define BOARD_PINOUT_H_

    //  LoRa Radio
    #define HAS_SX1268
    #define ESP32_DIY_1W_LoRa
    #define RADIO_SCLK_PIN          5
    #define RADIO_MISO_PIN          19
    #define RADIO_MOSI_PIN          27
    #define RADIO_CS_PIN            18
    #define RADIO_RST_PIN           23
    #define RADIO_DIO1_PIN          33
    #define RADIO_BUSY_PIN          32
    //old defs
    //#define RADIO_RXEN            10
    //#define RADIO_TXEN            25
    #define RADIO_RXEN              14
    #define RADIO_TXEN              13
    #define RADIO_WAKEUP_PIN        RADIO_DIO1_PIN
    #define GPIO_WAKEUP_PIN         GPIO_SEL_12

    //  Display
    #define HAS_DISPLAY

    //  GPS
    #define GPS_RX              12
    #define GPS_TX              15

    #undef  OLED_SDA
    #undef  OLED_SCL
    #undef  OLED_RST

    #define OLED_SDA                21
    #define OLED_SCL                22
    #define OLED_RST                -1      // Reset pin # (or -1 if sharing Arduino reset pin)

    //  Aditional Config
    #define INTERNAL_LED_PIN        2

#endif