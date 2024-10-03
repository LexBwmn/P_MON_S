#pragma once
#include <string>
#include <vector>

// 1-1.7
// Class: BodyWeightPressureMonitor
// Inputs: 
// - weight (float)
// - pressure (float)
// Outputs: 
// - displayWeight (float)
// - displayPressure (float)
// Purpose: Tracks and displays the patient's weight and pressure levels.

class BodyWeightPressureMonitor {
private:
    float weight;
    float pressure;
public:
    void setWeight(float w) { weight = w; }
    void setPressure(float p) { pressure = p; }
    float getWeight() const { return weight; }
    float getPressure() const { return pressure; }
};

// Class: HeartRateMonitor
// Inputs: 
// - heartRate (int)
// Outputs: 
// - displayHeartRate (int)
// - alert (bool)
// Purpose: Measures and displays the patient's heart rate and provides alerts if the heart rate exceeds predefined thresholds.
class HeartRateMonitor {
private:
    int heartRate;
    bool alert;
public:
    void setHeartRate(int hr) { heartRate = hr; }
    int getHeartRate() const { return heartRate; }
    bool checkAlert(int threshold) { return heartRate > threshold; }
};

// Class: BedTemperatureMonitor
// Inputs: 
// - bedTemperature (float)
// Outputs: 
// - displayBedTemperature (float)
// Purpose: Monitors and displays the temperature of the patient's bed.
class BedTemperatureMonitor {
private:
    float bedTemperature;
public:
    void setBedTemperature(float temp) { bedTemperature = temp; }
    float getBedTemperature() const { return bedTemperature; }
};

// Class: BloodPressureMonitor
// Inputs: 
// - systolic (int)
// - diastolic (int)
// Outputs: 
// - displaySystolic (int)
// - displayDiastolic (int)
// Purpose: Tracks and displays the patient's blood pressure.
class BloodPressureMonitor {
private:
    int systolic;
    int diastolic;
public:
    void setSystolic(int s) { systolic = s; }
    void setDiastolic(int d) { diastolic = d; }
    int getSystolic() const { return systolic; }
    int getDiastolic() const { return diastolic; }
};

// Class: GlucoseMonitor
// Inputs: 
// - glucoseLevel (float)
// Outputs: 
// - displayGlucoseLevel (float)
// Purpose: Measures and displays blood sugar levels.
class GlucoseMonitor {
private:
    float glucoseLevel;
public:
    void setGlucoseLevel(float level) { glucoseLevel = level; }
    float getGlucoseLevel() const { return glucoseLevel; }
};

// Class: RespiratoryOxygenMonitor
// Inputs: 
// - respiratoryRate (int)
// - oxygenSaturation (float)
// Outputs: 
// - displayRespiratoryRate (int)
// - displayOxygenSaturation (float)
// Purpose: Monitors and displays respiratory rate and oxygen saturation levels.
class RespiratoryOxygenMonitor {
private:
    int respiratoryRate;
    float oxygenSaturation;
public:
    void setRespiratoryRate(int rate) { respiratoryRate = rate; }
    void setOxygenSaturation(float saturation) { oxygenSaturation = saturation; }
    int getRespiratoryRate() const { return respiratoryRate; }
    float getOxygenSaturation() const { return oxygenSaturation; }
};

// Class: MedicineMonitor
// Inputs: 
// - medicineType (std::string)
// - dosage (float)
// - date (std::string)
// Outputs: 
// - displayMedicineType (std::string)
// - displayDosage (float)
// - displayDate (std::string)
// Purpose: Records the type of medicine given, dosage, and date.
class MedicineMonitor {
private:
    std::string medicineType;
    float dosage;
    std::string date;
public:
    void setMedicineType(const std::string& type) { medicineType = type; }
    void setDosage(float d) { dosage = d; }
    void setDate(const std::string& d) { date = d; }
    std::string getMedicineType() const { return medicineType; }
    float getDosage() const { return dosage; }
    std::string getDate() const { return date; }
};

// 2-2.5
// Class: BedPositioningSystem
// Inputs: 
// - weight (float)
// - pressure (float)
// Outputs: 
// - bedAngle (float)
// Purpose: Adjusts the bed angle based on weight distribution data from the Body Weight and Pressure Monitor.
class BedPositioningSystem {
private:
    float weight;
    float pressure;
    float bedAngle;
public:
    void setWeight(float w) { weight = w; }
    void setPressure(float p) { pressure = p; }
    void adjustBedAngle() {
        // Logic to adjust bed angle based on weight and pressure
        bedAngle = (weight + pressure) / 2; // Example logic
    }
    float getBedAngle() const { return bedAngle; }
};

// Class: BedTemperatureSystem
// Inputs: 
// - bedTemperature (float)
// Outputs: 
// - regulatedTemperature (float)
// Purpose: Regulates the bed temperature based on readings from the Bed Temperature Monitor.
class BedTemperatureSystem {
private:
    float bedTemperature;
    float regulatedTemperature;
public:
    void setBedTemperature(float temp) { bedTemperature = temp; }
    void regulateTemperature() {
        // Logic to regulate bed temperature
        regulatedTemperature = bedTemperature; // Example logic
    }
    float getRegulatedTemperature() const { return regulatedTemperature; }
};

// Class: RespiratoryOxygenControl
// Inputs: 
// - respiratoryRate (int)
// - oxygenSaturation (float)
// Outputs: 
// - oxygenLevel (float)
// Purpose: Adjusts oxygen levels based on respiratory rate data from the Respiratory Rate and Oxygen Saturation Monitor.
class RespiratoryOxygenControl {
private:
    int respiratoryRate;
    float oxygenSaturation;
    float oxygenLevel;
public:
    void setRespiratoryRate(int rate) { respiratoryRate = rate; }
    void setOxygenSaturation(float saturation) { oxygenSaturation = saturation; }
    void adjustOxygenLevel() {
        // Logic to adjust oxygen level
        oxygenLevel = respiratoryRate * oxygenSaturation / 100; // Example logic
    }
    float getOxygenLevel() const { return oxygenLevel; }
};

// Class: MedicineControllingSystem
// Inputs: 
// - medicineType (std::string)
// - dosage (float)
// - date (std::string)
// Outputs: 
// - adjustedDosage (float)
// - nextDoseTime (std::string)
// Purpose: Adjusts medication dosage and timing based on information from the Medicine Monitoring device.
class MedicineControllingSystem {
private:
    std::string medicineType;
    float dosage;
    std::string date;
    float adjustedDosage;
    std::string nextDoseTime;
public:
    void setMedicineType(const std::string& type) { medicineType = type; }
    void setDosage(float d) { dosage = d; }
    void setDate(const std::string& d) { date = d; }
    void adjustDosage() {
        // Logic to adjust dosage
        adjustedDosage = dosage * 1.1; // Example logic
    }
    void setNextDoseTime(const std::string& time) { nextDoseTime = time; }
    float getAdjustedDosage() const { return adjustedDosage; }
    std::string getNextDoseTime() const { return nextDoseTime; }
};

// Class: GlucoseControllingSystem
// Inputs: 
// - glucoseLevel (float)
// Outputs: 
// - regulatedGlucose (float)
// Purpose: Regulates glucose levels delivered to the patient based on data from the Glucose Monitor.
class GlucoseControllingSystem {
private:
    float glucoseLevel;
    float regulatedGlucose;
public:
    void setGlucoseLevel(float level) { glucoseLevel = level; }
    void regulateGlucose() {
        // Logic to regulate glucose level
        regulatedGlucose = glucoseLevel * 0.9; // Example logic
    }
    float getRegulatedGlucose() const { return regulatedGlucose; }
};

