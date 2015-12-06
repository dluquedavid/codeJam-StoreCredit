//
//  main.cpp
//  StoreCredit
//
//  Created by David Rodriguez Luque on 6/12/15.
//  Copyright © 2015 David Rodriguez Luque. All rights reserved.
//

#include <iostream>
int totalNumberOfCase = 0;

int main(int argc, const char * argv[]) {
   
    scanf ("%d", &totalNumberOfCase);
    for (int caseIndex = 0; caseIndex< totalNumberOfCase; caseIndex++) {
        int credit = 0, totlaOfProducts = 0;
        scanf ("%d", &credit);
        scanf ("%d", &totlaOfProducts);
        int productPrice[totlaOfProducts];
        int productIndexArray[1000];
        int index = 0;
         for (int productIndex = 0; productIndex < totlaOfProducts; productIndex++) {
              std::cin >> productPrice[index];
             if (productPrice[index] < credit) {
                 for (int k=0; k < index; k++) {
                     if (productPrice[index] + productPrice[k] == credit) {
                         int index2 = productIndexArray[productPrice[k]];
                         if (productIndex > index2) {
                             printf ("Case #%d: %d %d\n", caseIndex+1, index2+1, productIndex+1);
                         }else{
                             printf ("Case #%d: %d %d\n", caseIndex+1, index2+1, productIndex+1);
                         }
                         break;
                     }
                 }
                 productIndexArray[productPrice[index]]=productIndex;
                 index ++;
                 
             }
             
         }
    }
    
    return 0;
    
}
