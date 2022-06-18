[![Foo](https://img.shields.io/badge/version-1.0-brightgreen)](#versions)
[![Foo](https://img.shields.io/badge/website-eternaldev.ru-red)](https://eternaldev.ru)
[![Foo](https://img.shields.io/badge/Telegram-eternaldev__ru-blue)](https://t.me/eternaldev_ru)

# edPedal - педаль для Discord
Cлужит для использования ножной педали в качестве HID-устройства, что позволяет сделать ее однокнопочной USB-клавиатурой. Основная цель - вrлючение/выключение микрофона в программе Discord (в режиме рации)

### Совместимость
Данный вариант разработан для аналога Arduino Nano на ATtiny88 (плата MH-ET). Но библиотека [easyHID](https://github.com/GyverLibs/EasyHID) позволяет сделать HID-устройство также на ATmega328 (платы Nano, Uno, Mini), ATtiny167 (плата Digispark PRO), ATtiny48, ATmega168/88/48/8. Смотрите описание библиотеки в [официальном репозитории](https://github.com/GyverLibs/EasyHID).

## Установка
Как загружать прошивку в платы MH-ET рассказано [здесь](https://alexgyver.ru/lessons/tiny88/#articleTOC_3)

## Подключение
Схема для подключения педали к плате очень проста:
<br>
![scheme](/docs/circuit.png)

<a id="versions"></a>
## Версии
- v1.0