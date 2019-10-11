#include <Arduino.h>
#include "CaseController.h"


CaseController::CaseController(uint16_t widht, uint16_t hight){
    
}

void CaseController::initCaseMotor(int *pins){

}

void CaseController::setCaseName(uint16_t w, uint16_t h, uint16_t name){
    caseName[w][h] = name;
}

void CaseController::setCaseName(uint16_t w, uint16_t h, uint16_t *name){
    for (uint16_t i = 0; i < w; i++)
    {
        for (uint16_t j = 0; j < h; j++)
        {
            caseName[i][j] = *(name + i*h + j);
        }
    }    
}


void CaseController::setCasePrice(uint16_t w, uint16_t h, uint16_t price){
    casePrice[w][h] = price;
}

void CaseController::setCasePrice(uint16_t w, uint16_t h, uint16_t *price){
    for (uint16_t i = 0; i < w; i++)
    {
        for (uint16_t j = 0; j < h; j++)
        {
            casePrice[i][j] = *(price + i*h + j);
        }
    }    
}


