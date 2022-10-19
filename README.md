[![Foo](https://img.shields.io/badge/version-1.0-brightgreen)](#versions)
[![Foo](https://img.shields.io/badge/website-eternaldev.ru-red)](https://eternaldev.ru)
[![Foo](https://img.shields.io/badge/Telegram-eternaldev__ru-blue)](https://t.me/eternaldev_ru)

# edPedal - педаль для Discord
Cлужит для использования ножной педали в качестве HID-устройства, что позволяет сделать ее однокнопочной USB-клавиатурой. Основная цель - вrлючение/выключение микрофона в программе Discord (в режиме рации)

### Совместимость
Данный вариант разработан для аналога Arduino Nano на ATtiny88 (плата MH-ET). Но библиотека [easyHID](https://github.com/GyverLibs/EasyHID) позволяет сделать HID-устройство также на ATmega328 (платы Nano, Uno, Mini), ATtiny167 (плата Digispark PRO), ATtiny48, ATmega168/88/48/8. Смотрите описание библиотеки в [официальном репозитории](https://github.com/GyverLibs/EasyHID).

## Установка
- В Arduino IDE перейти в "Файл" -> "Настройки"
- В поле "Дополнительные ссылки Менеджера плат" вставить http://drazzy.com/package_drazzy.com_index.json и нажать "Ок"
- Перейти в "Инструменты" -> "Плата" -> "Менеджер плат…"
- Начать вводить в поле поиска "attiny". Выбрать и установить "ATTinyCore"
- Перейти в "Инструменты" -> "Плата". В списке плат должно появиться семейство плат ATTinyCore. Выбираем ATtiny88 (Micronucleous, MH-ET t88 w/16MHz CLOCK). Настройки оставляем стандартные.
- Также, необходимо установить драйвер DigistumpArduino из папки "driver" проекта, [либо по этой ссылке](https://github.com/digistump/DigistumpArduino) с официального GitHub.

## Прошивка
- Плату к компьютеру не подключаем, порт не выбираем
- В Arduino IDE нажимаем кнопку загрузки, ждём компиляции
- Появится надпись "Please plug in the device (will time out in 60 seconds)..."
- После этого, в течение 1 минуты, необходимо подключить плату к USB, начнется прошивка

## Подключение
Схема для подключения педали к плате очень проста:

![scheme](/docs/circuit.png)

<a id="versions"></a>
## Версии
- v1.0