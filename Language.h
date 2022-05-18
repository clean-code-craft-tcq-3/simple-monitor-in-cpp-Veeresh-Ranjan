#define English 0
#define German 1
#define Japanese 0
#if (English)
    #define TEMP_OUT_OF_RANGE "Temperature out of range!"
    #define SOC_OUT_OF_RANGE "State of Charge out of range!"
    #define CR_OUT_OF_RANGE "Charge Rate out of range!"
    #define TEMP_WARNING "Warning: Temperature approaching near to threshold levels!"
    #define SOC_WARNING "Warning: SOC approaching near to threshold levels!"
    #define CR_WARNING "Warning: Charge Rate approaching near to threshold levels!"
    #define BATTERY_NOK "Battery Not ok!"
#elif(German)
    #define TEMP_OUT_OF_RANGE "Temperatur außerhalb des Bereichs!"
    #define SOC_OUT_OF_RANGE "Ladezustand außerhalb des Bereichs!"
    #define CR_OUT_OF_RANGE "Laderate außerhalb des Bereichs!"
    #define TEMP_WARNING "Warnung: Die Temperatur nähert sich dem Schwellenwert!"
    #define SOC_WARNING "Warnung: SOC nähert sich dem Schwellenwert!"
    #define CR_WARNING "Warnung: Die Laderate nähert sich dem Schwellenwert!"
    #define BATTERY_NOK "Batterie nicht in Ordnung!"
#else
    #define TEMP_OUT_OF_RANGE "Ondo ga han'i-gaidesu!"
    #define SOC_OUT_OF_RANGE "Jūden jōtai ga han'i-gaidesu!"
    #define CR_OUT_OF_RANGE "Jūden-ritsu ga han'i-gaidesu!"
    #define TEMP_WARNING "Keikoku: Ondo ga shikīchi reberu ni chikadzuite imasu!"
    #define SOC_WARNING "Keikoku: SOC ga shikīchi reberu ni chikadzuite imasu!"
    #define CR_WARNING "Keikoku: Jūden-ritsu ga shikīchi reberu ni chikadzuite imasu!"
    #define BATTERY_NOK "Batterī wa daijōbude wa arimasen!"
#endif // defined

