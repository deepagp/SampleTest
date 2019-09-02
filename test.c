#include<stdio.h>    
int main()    
{    
  SELECT   RETAIL_SECT,
                     RING
            INTO    :X-RETAIL-SECT,
                    :X-RING-TYPE
            FROM     TBX  X
            WHERE    X.ROG            = :X-ROG
               AND   X.CORP_ITEM_CD   = :X-CORP-ITEM-CD
               AND   X.UPC_COUNTRY    = 0
               AND   X.UPC_SYSTEM     = 4
            ORDER BY PRIMARY_UPC_SW DESC
            FETCH FIRST ROW ONLY
            QUERYNO 3676
      UPDATE   X
            SET
                     PRIMARY_UPC_SW=:X-PRIMARY-UPC-SW,
                     PACK_RETAIL=:X-PACK-RETAIL,
                     LABEL_SIZE=:X-LABEL-SIZE,
                     LABEL_NUMBERS=:X-LABEL-NUMBERS,
                     PRT_SIGN_IND=:X-PRT-SIGN-IND,
                     ITEM_SELECTION=:X-ITEM-SELECTION,
                     RING=:X-RING
            WHERE   (ROG = :X-ROG
               AND   CORP_ITEM_CD = :X-CORP-ITEM-CD
               AND   UPC_MANUF = :X-UPC-MANUF
               AND   UPC_SALES = :X-UPC-SALES
               AND   UPC_COUNTRY = :X-UPC-COUNTRY
               AND   UPC_SYSTEM = :X-UPC-SYSTEM
               AND   UNIT_TYPE = :X-UNIT-TYPE)
            QUERYNO 35
 
 }    
