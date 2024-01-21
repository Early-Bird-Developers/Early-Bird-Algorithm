SELECT  CATEGORY, SUM(SALES) AS TOTAL_SALES
FROM    BOOK BK, BOOK_SALES BS
WHERE   BK.BOOK_ID = BS.BOOK_ID AND
        BS.SALES_DATE LIKE '2022-01%'
GROUP BY CATEGORY
ORDER BY CATEGORY;
