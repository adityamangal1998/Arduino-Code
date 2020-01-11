EESchema Schematic File Version 4
LIBS:smart_agriculture-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Notes Line
	3200 1800 3200 5500
Wire Notes Line
	3200 5500 890  5500
Wire Notes Line
	890  5500 890  1800
Wire Notes Line
	890  1800 3200 1800
Text Label 4810 5250 2    50   ~ 0
D0
Wire Wire Line
	4450 4640 4680 4640
Wire Wire Line
	4450 4740 4680 4740
Text Label 4680 4740 2    50   ~ 0
SCL
Text Label 4680 4640 2    50   ~ 0
SDA
$Comp
L moisture~sensor:moisture_sensor U3
U 1 1 5D0C106C
P 4200 5450
F 0 "U3" H 4175 5875 50  0000 C CNN
F 1 "FC-28" H 4175 5784 50  0000 C CNN
F 2 "" H 4200 5450 50  0001 C CNN
F 3 "" H 4200 5450 50  0001 C CNN
	1    4200 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 5250 4810 5250
Wire Wire Line
	3900 5350 3540 5350
$Comp
L bme280i2c:BMEI2C U2
U 1 1 5D0C1066
P 4200 4890
F 0 "U2" H 4150 5405 50  0000 C CNN
F 1 "BMEI2C" H 4150 5314 50  0000 C CNN
F 2 "" H 4200 4890 50  0001 C CNN
F 3 "" H 4200 4890 50  0001 C CNN
	1    4200 4890
	1    0    0    -1  
$EndComp
Text Label 3620 4740 0    50   ~ 0
GND
Wire Wire Line
	3850 4740 3620 4740
Text Label 3620 4640 0    50   ~ 0
vin
Wire Wire Line
	3850 4640 3620 4640
Wire Wire Line
	3900 5250 3540 5250
Text Label 3540 5250 0    50   ~ 0
VCC
Text Label 3540 5350 0    50   ~ 0
GND
Wire Notes Line
	3360 5550 3360 4260
Wire Notes Line
	5090 4250 5090 5550
Wire Notes Line
	3360 4250 5090 4250
Wire Notes Line
	5090 5550 3360 5550
Text Notes 3400 4200 0    50   ~ 0
Moisture & BME sensor
Text Notes 910  1780 0    50   ~ 0
ESP32
Wire Wire Line
	2190 4350 2500 4350
Text Label 2500 4350 2    50   ~ 0
VCC
$Comp
L esp-32~devmodule:ESP-32DEVMODULE U1
U 1 1 5D0B8D13
P 3440 4350
F 0 "U1" H 1840 6415 50  0000 C CNN
F 1 "ESP-32DEVMODULE" H 1840 6324 50  0000 C CNN
F 2 "" H 3440 4350 50  0001 C CNN
F 3 "" H 3440 4350 50  0001 C CNN
	1    3440 4350
	1    0    0    -1  
$EndComp
Wire Wire Line
	2190 2550 2470 2550
Text Label 2470 2550 2    50   ~ 0
vin
Wire Wire Line
	1490 3750 1220 3750
Text Label 1220 3750 0    50   ~ 0
D0
Wire Wire Line
	2190 3450 2570 3450
Text Label 2570 3450 2    50   ~ 0
SCL
Wire Wire Line
	2190 3550 2570 3550
Text Label 2570 3550 2    50   ~ 0
SDA
Wire Wire Line
	2190 4250 2510 4250
Text Label 2510 4250 2    50   ~ 0
GND
NoConn ~ 4450 5350
$EndSCHEMATC
