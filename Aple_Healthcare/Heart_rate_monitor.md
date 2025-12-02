https://wiki.seeedstudio.com/Grove-Finger-clip_Heart_Rate_Sensor_with_shell/#software-part

1. Setup heart rate monitor

Code snippets:
```
void heartRate_setup() {
Wire.begin();
}
```

2. Check the heart rate

Code snippets:
```
void heartRate() {
    Wire.requestFrom(0xA0 >> 1, 1);   
    rate = floor(Wire.read());    
    Serial.println(rate);
}
```