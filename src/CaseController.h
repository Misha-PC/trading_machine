
class CaseController{
private:
    const uint16_t caseID[10][10] = {
             { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9}, 
             {10 ,11, 12, 13, 14, 15, 16, 17, 18, 19}, 
             {20, 21, 22, 23, 24, 25, 26, 27, 28, 29}, 
             {30, 31, 32, 33, 34, 35, 36, 37, 38, 39}, 
             {40, 41, 42, 43, 44, 45, 46, 47, 48, 49},
             {50, 51, 52, 53, 54, 55, 56, 57, 58, 59}, 
             {60, 61, 62, 63, 64, 65, 66, 67, 68, 69}, 
             {70, 71, 72, 73, 74, 75, 76, 77, 78, 79},
             {80, 81, 82, 83, 84, 85, 86, 88, 88, 89},
             {90, 91, 92, 93, 94, 95, 96, 99, 98, 99}
        };

    uint16_t caseName [10][10];
    uint16_t casePrice[10][10];
    uint16_t gitTest = 54;
    

public:
    CaseController(uint16_t, uint16_t);

    void initCaseMotor(int *); 
    void initLiftMotor(int *);

    // void setCaseName(uint16_t, uint16_t, String);
    void setCaseName(uint16_t, uint16_t, uint16_t);
    void setCaseName(uint16_t, uint16_t, uint16_t *);
    
    void setCasePrice(uint16_t, uint16_t, uint16_t);
    void setCasePrice(uint16_t, uint16_t, uint16_t *);

};