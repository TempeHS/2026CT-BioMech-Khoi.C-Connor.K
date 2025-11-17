void heartRate_setup() {
    Wire.begin();
}
void heartRate() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    rate = floor(Wire.read());    
    Serial.println(rate);
}