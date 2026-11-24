#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B12D0
// Address: 0x3b12d0 - 0x3b1ae8
void sub_003B12D0_0x3b12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B12D0_0x3b12d0");
#endif

    switch (ctx->pc) {
        case 0x3b12d0u: goto label_3b12d0;
        case 0x3b12d4u: goto label_3b12d4;
        case 0x3b12d8u: goto label_3b12d8;
        case 0x3b12dcu: goto label_3b12dc;
        case 0x3b12e0u: goto label_3b12e0;
        case 0x3b12e4u: goto label_3b12e4;
        case 0x3b12e8u: goto label_3b12e8;
        case 0x3b12ecu: goto label_3b12ec;
        case 0x3b12f0u: goto label_3b12f0;
        case 0x3b12f4u: goto label_3b12f4;
        case 0x3b12f8u: goto label_3b12f8;
        case 0x3b12fcu: goto label_3b12fc;
        case 0x3b1300u: goto label_3b1300;
        case 0x3b1304u: goto label_3b1304;
        case 0x3b1308u: goto label_3b1308;
        case 0x3b130cu: goto label_3b130c;
        case 0x3b1310u: goto label_3b1310;
        case 0x3b1314u: goto label_3b1314;
        case 0x3b1318u: goto label_3b1318;
        case 0x3b131cu: goto label_3b131c;
        case 0x3b1320u: goto label_3b1320;
        case 0x3b1324u: goto label_3b1324;
        case 0x3b1328u: goto label_3b1328;
        case 0x3b132cu: goto label_3b132c;
        case 0x3b1330u: goto label_3b1330;
        case 0x3b1334u: goto label_3b1334;
        case 0x3b1338u: goto label_3b1338;
        case 0x3b133cu: goto label_3b133c;
        case 0x3b1340u: goto label_3b1340;
        case 0x3b1344u: goto label_3b1344;
        case 0x3b1348u: goto label_3b1348;
        case 0x3b134cu: goto label_3b134c;
        case 0x3b1350u: goto label_3b1350;
        case 0x3b1354u: goto label_3b1354;
        case 0x3b1358u: goto label_3b1358;
        case 0x3b135cu: goto label_3b135c;
        case 0x3b1360u: goto label_3b1360;
        case 0x3b1364u: goto label_3b1364;
        case 0x3b1368u: goto label_3b1368;
        case 0x3b136cu: goto label_3b136c;
        case 0x3b1370u: goto label_3b1370;
        case 0x3b1374u: goto label_3b1374;
        case 0x3b1378u: goto label_3b1378;
        case 0x3b137cu: goto label_3b137c;
        case 0x3b1380u: goto label_3b1380;
        case 0x3b1384u: goto label_3b1384;
        case 0x3b1388u: goto label_3b1388;
        case 0x3b138cu: goto label_3b138c;
        case 0x3b1390u: goto label_3b1390;
        case 0x3b1394u: goto label_3b1394;
        case 0x3b1398u: goto label_3b1398;
        case 0x3b139cu: goto label_3b139c;
        case 0x3b13a0u: goto label_3b13a0;
        case 0x3b13a4u: goto label_3b13a4;
        case 0x3b13a8u: goto label_3b13a8;
        case 0x3b13acu: goto label_3b13ac;
        case 0x3b13b0u: goto label_3b13b0;
        case 0x3b13b4u: goto label_3b13b4;
        case 0x3b13b8u: goto label_3b13b8;
        case 0x3b13bcu: goto label_3b13bc;
        case 0x3b13c0u: goto label_3b13c0;
        case 0x3b13c4u: goto label_3b13c4;
        case 0x3b13c8u: goto label_3b13c8;
        case 0x3b13ccu: goto label_3b13cc;
        case 0x3b13d0u: goto label_3b13d0;
        case 0x3b13d4u: goto label_3b13d4;
        case 0x3b13d8u: goto label_3b13d8;
        case 0x3b13dcu: goto label_3b13dc;
        case 0x3b13e0u: goto label_3b13e0;
        case 0x3b13e4u: goto label_3b13e4;
        case 0x3b13e8u: goto label_3b13e8;
        case 0x3b13ecu: goto label_3b13ec;
        case 0x3b13f0u: goto label_3b13f0;
        case 0x3b13f4u: goto label_3b13f4;
        case 0x3b13f8u: goto label_3b13f8;
        case 0x3b13fcu: goto label_3b13fc;
        case 0x3b1400u: goto label_3b1400;
        case 0x3b1404u: goto label_3b1404;
        case 0x3b1408u: goto label_3b1408;
        case 0x3b140cu: goto label_3b140c;
        case 0x3b1410u: goto label_3b1410;
        case 0x3b1414u: goto label_3b1414;
        case 0x3b1418u: goto label_3b1418;
        case 0x3b141cu: goto label_3b141c;
        case 0x3b1420u: goto label_3b1420;
        case 0x3b1424u: goto label_3b1424;
        case 0x3b1428u: goto label_3b1428;
        case 0x3b142cu: goto label_3b142c;
        case 0x3b1430u: goto label_3b1430;
        case 0x3b1434u: goto label_3b1434;
        case 0x3b1438u: goto label_3b1438;
        case 0x3b143cu: goto label_3b143c;
        case 0x3b1440u: goto label_3b1440;
        case 0x3b1444u: goto label_3b1444;
        case 0x3b1448u: goto label_3b1448;
        case 0x3b144cu: goto label_3b144c;
        case 0x3b1450u: goto label_3b1450;
        case 0x3b1454u: goto label_3b1454;
        case 0x3b1458u: goto label_3b1458;
        case 0x3b145cu: goto label_3b145c;
        case 0x3b1460u: goto label_3b1460;
        case 0x3b1464u: goto label_3b1464;
        case 0x3b1468u: goto label_3b1468;
        case 0x3b146cu: goto label_3b146c;
        case 0x3b1470u: goto label_3b1470;
        case 0x3b1474u: goto label_3b1474;
        case 0x3b1478u: goto label_3b1478;
        case 0x3b147cu: goto label_3b147c;
        case 0x3b1480u: goto label_3b1480;
        case 0x3b1484u: goto label_3b1484;
        case 0x3b1488u: goto label_3b1488;
        case 0x3b148cu: goto label_3b148c;
        case 0x3b1490u: goto label_3b1490;
        case 0x3b1494u: goto label_3b1494;
        case 0x3b1498u: goto label_3b1498;
        case 0x3b149cu: goto label_3b149c;
        case 0x3b14a0u: goto label_3b14a0;
        case 0x3b14a4u: goto label_3b14a4;
        case 0x3b14a8u: goto label_3b14a8;
        case 0x3b14acu: goto label_3b14ac;
        case 0x3b14b0u: goto label_3b14b0;
        case 0x3b14b4u: goto label_3b14b4;
        case 0x3b14b8u: goto label_3b14b8;
        case 0x3b14bcu: goto label_3b14bc;
        case 0x3b14c0u: goto label_3b14c0;
        case 0x3b14c4u: goto label_3b14c4;
        case 0x3b14c8u: goto label_3b14c8;
        case 0x3b14ccu: goto label_3b14cc;
        case 0x3b14d0u: goto label_3b14d0;
        case 0x3b14d4u: goto label_3b14d4;
        case 0x3b14d8u: goto label_3b14d8;
        case 0x3b14dcu: goto label_3b14dc;
        case 0x3b14e0u: goto label_3b14e0;
        case 0x3b14e4u: goto label_3b14e4;
        case 0x3b14e8u: goto label_3b14e8;
        case 0x3b14ecu: goto label_3b14ec;
        case 0x3b14f0u: goto label_3b14f0;
        case 0x3b14f4u: goto label_3b14f4;
        case 0x3b14f8u: goto label_3b14f8;
        case 0x3b14fcu: goto label_3b14fc;
        case 0x3b1500u: goto label_3b1500;
        case 0x3b1504u: goto label_3b1504;
        case 0x3b1508u: goto label_3b1508;
        case 0x3b150cu: goto label_3b150c;
        case 0x3b1510u: goto label_3b1510;
        case 0x3b1514u: goto label_3b1514;
        case 0x3b1518u: goto label_3b1518;
        case 0x3b151cu: goto label_3b151c;
        case 0x3b1520u: goto label_3b1520;
        case 0x3b1524u: goto label_3b1524;
        case 0x3b1528u: goto label_3b1528;
        case 0x3b152cu: goto label_3b152c;
        case 0x3b1530u: goto label_3b1530;
        case 0x3b1534u: goto label_3b1534;
        case 0x3b1538u: goto label_3b1538;
        case 0x3b153cu: goto label_3b153c;
        case 0x3b1540u: goto label_3b1540;
        case 0x3b1544u: goto label_3b1544;
        case 0x3b1548u: goto label_3b1548;
        case 0x3b154cu: goto label_3b154c;
        case 0x3b1550u: goto label_3b1550;
        case 0x3b1554u: goto label_3b1554;
        case 0x3b1558u: goto label_3b1558;
        case 0x3b155cu: goto label_3b155c;
        case 0x3b1560u: goto label_3b1560;
        case 0x3b1564u: goto label_3b1564;
        case 0x3b1568u: goto label_3b1568;
        case 0x3b156cu: goto label_3b156c;
        case 0x3b1570u: goto label_3b1570;
        case 0x3b1574u: goto label_3b1574;
        case 0x3b1578u: goto label_3b1578;
        case 0x3b157cu: goto label_3b157c;
        case 0x3b1580u: goto label_3b1580;
        case 0x3b1584u: goto label_3b1584;
        case 0x3b1588u: goto label_3b1588;
        case 0x3b158cu: goto label_3b158c;
        case 0x3b1590u: goto label_3b1590;
        case 0x3b1594u: goto label_3b1594;
        case 0x3b1598u: goto label_3b1598;
        case 0x3b159cu: goto label_3b159c;
        case 0x3b15a0u: goto label_3b15a0;
        case 0x3b15a4u: goto label_3b15a4;
        case 0x3b15a8u: goto label_3b15a8;
        case 0x3b15acu: goto label_3b15ac;
        case 0x3b15b0u: goto label_3b15b0;
        case 0x3b15b4u: goto label_3b15b4;
        case 0x3b15b8u: goto label_3b15b8;
        case 0x3b15bcu: goto label_3b15bc;
        case 0x3b15c0u: goto label_3b15c0;
        case 0x3b15c4u: goto label_3b15c4;
        case 0x3b15c8u: goto label_3b15c8;
        case 0x3b15ccu: goto label_3b15cc;
        case 0x3b15d0u: goto label_3b15d0;
        case 0x3b15d4u: goto label_3b15d4;
        case 0x3b15d8u: goto label_3b15d8;
        case 0x3b15dcu: goto label_3b15dc;
        case 0x3b15e0u: goto label_3b15e0;
        case 0x3b15e4u: goto label_3b15e4;
        case 0x3b15e8u: goto label_3b15e8;
        case 0x3b15ecu: goto label_3b15ec;
        case 0x3b15f0u: goto label_3b15f0;
        case 0x3b15f4u: goto label_3b15f4;
        case 0x3b15f8u: goto label_3b15f8;
        case 0x3b15fcu: goto label_3b15fc;
        case 0x3b1600u: goto label_3b1600;
        case 0x3b1604u: goto label_3b1604;
        case 0x3b1608u: goto label_3b1608;
        case 0x3b160cu: goto label_3b160c;
        case 0x3b1610u: goto label_3b1610;
        case 0x3b1614u: goto label_3b1614;
        case 0x3b1618u: goto label_3b1618;
        case 0x3b161cu: goto label_3b161c;
        case 0x3b1620u: goto label_3b1620;
        case 0x3b1624u: goto label_3b1624;
        case 0x3b1628u: goto label_3b1628;
        case 0x3b162cu: goto label_3b162c;
        case 0x3b1630u: goto label_3b1630;
        case 0x3b1634u: goto label_3b1634;
        case 0x3b1638u: goto label_3b1638;
        case 0x3b163cu: goto label_3b163c;
        case 0x3b1640u: goto label_3b1640;
        case 0x3b1644u: goto label_3b1644;
        case 0x3b1648u: goto label_3b1648;
        case 0x3b164cu: goto label_3b164c;
        case 0x3b1650u: goto label_3b1650;
        case 0x3b1654u: goto label_3b1654;
        case 0x3b1658u: goto label_3b1658;
        case 0x3b165cu: goto label_3b165c;
        case 0x3b1660u: goto label_3b1660;
        case 0x3b1664u: goto label_3b1664;
        case 0x3b1668u: goto label_3b1668;
        case 0x3b166cu: goto label_3b166c;
        case 0x3b1670u: goto label_3b1670;
        case 0x3b1674u: goto label_3b1674;
        case 0x3b1678u: goto label_3b1678;
        case 0x3b167cu: goto label_3b167c;
        case 0x3b1680u: goto label_3b1680;
        case 0x3b1684u: goto label_3b1684;
        case 0x3b1688u: goto label_3b1688;
        case 0x3b168cu: goto label_3b168c;
        case 0x3b1690u: goto label_3b1690;
        case 0x3b1694u: goto label_3b1694;
        case 0x3b1698u: goto label_3b1698;
        case 0x3b169cu: goto label_3b169c;
        case 0x3b16a0u: goto label_3b16a0;
        case 0x3b16a4u: goto label_3b16a4;
        case 0x3b16a8u: goto label_3b16a8;
        case 0x3b16acu: goto label_3b16ac;
        case 0x3b16b0u: goto label_3b16b0;
        case 0x3b16b4u: goto label_3b16b4;
        case 0x3b16b8u: goto label_3b16b8;
        case 0x3b16bcu: goto label_3b16bc;
        case 0x3b16c0u: goto label_3b16c0;
        case 0x3b16c4u: goto label_3b16c4;
        case 0x3b16c8u: goto label_3b16c8;
        case 0x3b16ccu: goto label_3b16cc;
        case 0x3b16d0u: goto label_3b16d0;
        case 0x3b16d4u: goto label_3b16d4;
        case 0x3b16d8u: goto label_3b16d8;
        case 0x3b16dcu: goto label_3b16dc;
        case 0x3b16e0u: goto label_3b16e0;
        case 0x3b16e4u: goto label_3b16e4;
        case 0x3b16e8u: goto label_3b16e8;
        case 0x3b16ecu: goto label_3b16ec;
        case 0x3b16f0u: goto label_3b16f0;
        case 0x3b16f4u: goto label_3b16f4;
        case 0x3b16f8u: goto label_3b16f8;
        case 0x3b16fcu: goto label_3b16fc;
        case 0x3b1700u: goto label_3b1700;
        case 0x3b1704u: goto label_3b1704;
        case 0x3b1708u: goto label_3b1708;
        case 0x3b170cu: goto label_3b170c;
        case 0x3b1710u: goto label_3b1710;
        case 0x3b1714u: goto label_3b1714;
        case 0x3b1718u: goto label_3b1718;
        case 0x3b171cu: goto label_3b171c;
        case 0x3b1720u: goto label_3b1720;
        case 0x3b1724u: goto label_3b1724;
        case 0x3b1728u: goto label_3b1728;
        case 0x3b172cu: goto label_3b172c;
        case 0x3b1730u: goto label_3b1730;
        case 0x3b1734u: goto label_3b1734;
        case 0x3b1738u: goto label_3b1738;
        case 0x3b173cu: goto label_3b173c;
        case 0x3b1740u: goto label_3b1740;
        case 0x3b1744u: goto label_3b1744;
        case 0x3b1748u: goto label_3b1748;
        case 0x3b174cu: goto label_3b174c;
        case 0x3b1750u: goto label_3b1750;
        case 0x3b1754u: goto label_3b1754;
        case 0x3b1758u: goto label_3b1758;
        case 0x3b175cu: goto label_3b175c;
        case 0x3b1760u: goto label_3b1760;
        case 0x3b1764u: goto label_3b1764;
        case 0x3b1768u: goto label_3b1768;
        case 0x3b176cu: goto label_3b176c;
        case 0x3b1770u: goto label_3b1770;
        case 0x3b1774u: goto label_3b1774;
        case 0x3b1778u: goto label_3b1778;
        case 0x3b177cu: goto label_3b177c;
        case 0x3b1780u: goto label_3b1780;
        case 0x3b1784u: goto label_3b1784;
        case 0x3b1788u: goto label_3b1788;
        case 0x3b178cu: goto label_3b178c;
        case 0x3b1790u: goto label_3b1790;
        case 0x3b1794u: goto label_3b1794;
        case 0x3b1798u: goto label_3b1798;
        case 0x3b179cu: goto label_3b179c;
        case 0x3b17a0u: goto label_3b17a0;
        case 0x3b17a4u: goto label_3b17a4;
        case 0x3b17a8u: goto label_3b17a8;
        case 0x3b17acu: goto label_3b17ac;
        case 0x3b17b0u: goto label_3b17b0;
        case 0x3b17b4u: goto label_3b17b4;
        case 0x3b17b8u: goto label_3b17b8;
        case 0x3b17bcu: goto label_3b17bc;
        case 0x3b17c0u: goto label_3b17c0;
        case 0x3b17c4u: goto label_3b17c4;
        case 0x3b17c8u: goto label_3b17c8;
        case 0x3b17ccu: goto label_3b17cc;
        case 0x3b17d0u: goto label_3b17d0;
        case 0x3b17d4u: goto label_3b17d4;
        case 0x3b17d8u: goto label_3b17d8;
        case 0x3b17dcu: goto label_3b17dc;
        case 0x3b17e0u: goto label_3b17e0;
        case 0x3b17e4u: goto label_3b17e4;
        case 0x3b17e8u: goto label_3b17e8;
        case 0x3b17ecu: goto label_3b17ec;
        case 0x3b17f0u: goto label_3b17f0;
        case 0x3b17f4u: goto label_3b17f4;
        case 0x3b17f8u: goto label_3b17f8;
        case 0x3b17fcu: goto label_3b17fc;
        case 0x3b1800u: goto label_3b1800;
        case 0x3b1804u: goto label_3b1804;
        case 0x3b1808u: goto label_3b1808;
        case 0x3b180cu: goto label_3b180c;
        case 0x3b1810u: goto label_3b1810;
        case 0x3b1814u: goto label_3b1814;
        case 0x3b1818u: goto label_3b1818;
        case 0x3b181cu: goto label_3b181c;
        case 0x3b1820u: goto label_3b1820;
        case 0x3b1824u: goto label_3b1824;
        case 0x3b1828u: goto label_3b1828;
        case 0x3b182cu: goto label_3b182c;
        case 0x3b1830u: goto label_3b1830;
        case 0x3b1834u: goto label_3b1834;
        case 0x3b1838u: goto label_3b1838;
        case 0x3b183cu: goto label_3b183c;
        case 0x3b1840u: goto label_3b1840;
        case 0x3b1844u: goto label_3b1844;
        case 0x3b1848u: goto label_3b1848;
        case 0x3b184cu: goto label_3b184c;
        case 0x3b1850u: goto label_3b1850;
        case 0x3b1854u: goto label_3b1854;
        case 0x3b1858u: goto label_3b1858;
        case 0x3b185cu: goto label_3b185c;
        case 0x3b1860u: goto label_3b1860;
        case 0x3b1864u: goto label_3b1864;
        case 0x3b1868u: goto label_3b1868;
        case 0x3b186cu: goto label_3b186c;
        case 0x3b1870u: goto label_3b1870;
        case 0x3b1874u: goto label_3b1874;
        case 0x3b1878u: goto label_3b1878;
        case 0x3b187cu: goto label_3b187c;
        case 0x3b1880u: goto label_3b1880;
        case 0x3b1884u: goto label_3b1884;
        case 0x3b1888u: goto label_3b1888;
        case 0x3b188cu: goto label_3b188c;
        case 0x3b1890u: goto label_3b1890;
        case 0x3b1894u: goto label_3b1894;
        case 0x3b1898u: goto label_3b1898;
        case 0x3b189cu: goto label_3b189c;
        case 0x3b18a0u: goto label_3b18a0;
        case 0x3b18a4u: goto label_3b18a4;
        case 0x3b18a8u: goto label_3b18a8;
        case 0x3b18acu: goto label_3b18ac;
        case 0x3b18b0u: goto label_3b18b0;
        case 0x3b18b4u: goto label_3b18b4;
        case 0x3b18b8u: goto label_3b18b8;
        case 0x3b18bcu: goto label_3b18bc;
        case 0x3b18c0u: goto label_3b18c0;
        case 0x3b18c4u: goto label_3b18c4;
        case 0x3b18c8u: goto label_3b18c8;
        case 0x3b18ccu: goto label_3b18cc;
        case 0x3b18d0u: goto label_3b18d0;
        case 0x3b18d4u: goto label_3b18d4;
        case 0x3b18d8u: goto label_3b18d8;
        case 0x3b18dcu: goto label_3b18dc;
        case 0x3b18e0u: goto label_3b18e0;
        case 0x3b18e4u: goto label_3b18e4;
        case 0x3b18e8u: goto label_3b18e8;
        case 0x3b18ecu: goto label_3b18ec;
        case 0x3b18f0u: goto label_3b18f0;
        case 0x3b18f4u: goto label_3b18f4;
        case 0x3b18f8u: goto label_3b18f8;
        case 0x3b18fcu: goto label_3b18fc;
        case 0x3b1900u: goto label_3b1900;
        case 0x3b1904u: goto label_3b1904;
        case 0x3b1908u: goto label_3b1908;
        case 0x3b190cu: goto label_3b190c;
        case 0x3b1910u: goto label_3b1910;
        case 0x3b1914u: goto label_3b1914;
        case 0x3b1918u: goto label_3b1918;
        case 0x3b191cu: goto label_3b191c;
        case 0x3b1920u: goto label_3b1920;
        case 0x3b1924u: goto label_3b1924;
        case 0x3b1928u: goto label_3b1928;
        case 0x3b192cu: goto label_3b192c;
        case 0x3b1930u: goto label_3b1930;
        case 0x3b1934u: goto label_3b1934;
        case 0x3b1938u: goto label_3b1938;
        case 0x3b193cu: goto label_3b193c;
        case 0x3b1940u: goto label_3b1940;
        case 0x3b1944u: goto label_3b1944;
        case 0x3b1948u: goto label_3b1948;
        case 0x3b194cu: goto label_3b194c;
        case 0x3b1950u: goto label_3b1950;
        case 0x3b1954u: goto label_3b1954;
        case 0x3b1958u: goto label_3b1958;
        case 0x3b195cu: goto label_3b195c;
        case 0x3b1960u: goto label_3b1960;
        case 0x3b1964u: goto label_3b1964;
        case 0x3b1968u: goto label_3b1968;
        case 0x3b196cu: goto label_3b196c;
        case 0x3b1970u: goto label_3b1970;
        case 0x3b1974u: goto label_3b1974;
        case 0x3b1978u: goto label_3b1978;
        case 0x3b197cu: goto label_3b197c;
        case 0x3b1980u: goto label_3b1980;
        case 0x3b1984u: goto label_3b1984;
        case 0x3b1988u: goto label_3b1988;
        case 0x3b198cu: goto label_3b198c;
        case 0x3b1990u: goto label_3b1990;
        case 0x3b1994u: goto label_3b1994;
        case 0x3b1998u: goto label_3b1998;
        case 0x3b199cu: goto label_3b199c;
        case 0x3b19a0u: goto label_3b19a0;
        case 0x3b19a4u: goto label_3b19a4;
        case 0x3b19a8u: goto label_3b19a8;
        case 0x3b19acu: goto label_3b19ac;
        case 0x3b19b0u: goto label_3b19b0;
        case 0x3b19b4u: goto label_3b19b4;
        case 0x3b19b8u: goto label_3b19b8;
        case 0x3b19bcu: goto label_3b19bc;
        case 0x3b19c0u: goto label_3b19c0;
        case 0x3b19c4u: goto label_3b19c4;
        case 0x3b19c8u: goto label_3b19c8;
        case 0x3b19ccu: goto label_3b19cc;
        case 0x3b19d0u: goto label_3b19d0;
        case 0x3b19d4u: goto label_3b19d4;
        case 0x3b19d8u: goto label_3b19d8;
        case 0x3b19dcu: goto label_3b19dc;
        case 0x3b19e0u: goto label_3b19e0;
        case 0x3b19e4u: goto label_3b19e4;
        case 0x3b19e8u: goto label_3b19e8;
        case 0x3b19ecu: goto label_3b19ec;
        case 0x3b19f0u: goto label_3b19f0;
        case 0x3b19f4u: goto label_3b19f4;
        case 0x3b19f8u: goto label_3b19f8;
        case 0x3b19fcu: goto label_3b19fc;
        case 0x3b1a00u: goto label_3b1a00;
        case 0x3b1a04u: goto label_3b1a04;
        case 0x3b1a08u: goto label_3b1a08;
        case 0x3b1a0cu: goto label_3b1a0c;
        case 0x3b1a10u: goto label_3b1a10;
        case 0x3b1a14u: goto label_3b1a14;
        case 0x3b1a18u: goto label_3b1a18;
        case 0x3b1a1cu: goto label_3b1a1c;
        case 0x3b1a20u: goto label_3b1a20;
        case 0x3b1a24u: goto label_3b1a24;
        case 0x3b1a28u: goto label_3b1a28;
        case 0x3b1a2cu: goto label_3b1a2c;
        case 0x3b1a30u: goto label_3b1a30;
        case 0x3b1a34u: goto label_3b1a34;
        case 0x3b1a38u: goto label_3b1a38;
        case 0x3b1a3cu: goto label_3b1a3c;
        case 0x3b1a40u: goto label_3b1a40;
        case 0x3b1a44u: goto label_3b1a44;
        case 0x3b1a48u: goto label_3b1a48;
        case 0x3b1a4cu: goto label_3b1a4c;
        case 0x3b1a50u: goto label_3b1a50;
        case 0x3b1a54u: goto label_3b1a54;
        case 0x3b1a58u: goto label_3b1a58;
        case 0x3b1a5cu: goto label_3b1a5c;
        case 0x3b1a60u: goto label_3b1a60;
        case 0x3b1a64u: goto label_3b1a64;
        case 0x3b1a68u: goto label_3b1a68;
        case 0x3b1a6cu: goto label_3b1a6c;
        case 0x3b1a70u: goto label_3b1a70;
        case 0x3b1a74u: goto label_3b1a74;
        case 0x3b1a78u: goto label_3b1a78;
        case 0x3b1a7cu: goto label_3b1a7c;
        case 0x3b1a80u: goto label_3b1a80;
        case 0x3b1a84u: goto label_3b1a84;
        case 0x3b1a88u: goto label_3b1a88;
        case 0x3b1a8cu: goto label_3b1a8c;
        case 0x3b1a90u: goto label_3b1a90;
        case 0x3b1a94u: goto label_3b1a94;
        case 0x3b1a98u: goto label_3b1a98;
        case 0x3b1a9cu: goto label_3b1a9c;
        case 0x3b1aa0u: goto label_3b1aa0;
        case 0x3b1aa4u: goto label_3b1aa4;
        case 0x3b1aa8u: goto label_3b1aa8;
        case 0x3b1aacu: goto label_3b1aac;
        case 0x3b1ab0u: goto label_3b1ab0;
        case 0x3b1ab4u: goto label_3b1ab4;
        case 0x3b1ab8u: goto label_3b1ab8;
        case 0x3b1abcu: goto label_3b1abc;
        case 0x3b1ac0u: goto label_3b1ac0;
        case 0x3b1ac4u: goto label_3b1ac4;
        case 0x3b1ac8u: goto label_3b1ac8;
        case 0x3b1accu: goto label_3b1acc;
        case 0x3b1ad0u: goto label_3b1ad0;
        case 0x3b1ad4u: goto label_3b1ad4;
        case 0x3b1ad8u: goto label_3b1ad8;
        case 0x3b1adcu: goto label_3b1adc;
        case 0x3b1ae0u: goto label_3b1ae0;
        case 0x3b1ae4u: goto label_3b1ae4;
        default: break;
    }

    ctx->pc = 0x3b12d0u;

label_3b12d0:
    // 0x3b12d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b12d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3b12d4:
    // 0x3b12d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b12d8:
    // 0x3b12d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b12dc:
    // 0x3b12dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b12e0:
    // 0x3b12e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b12e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b12e4:
    // 0x3b12e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b12e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b12e8:
    // 0x3b12e8: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3b12e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
label_3b12ec:
    // 0x3b12ec: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x3b12ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3b12f0:
    // 0x3b12f0: 0x102001f7  beqz        $at, . + 4 + (0x1F7 << 2)
label_3b12f4:
    if (ctx->pc == 0x3B12F4u) {
        ctx->pc = 0x3B12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12F0u;
        // 0x3b12f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B12F8u;
        goto label_3b12f8;
    }
    ctx->pc = 0x3B12F0u;
    {
        const bool branch_taken_0x3b12f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12F0u;
        // 0x3b12f4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b12f0) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B12F8u;
label_3b12f8:
    // 0x3b12f8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
label_3b12fc:
    // 0x3b12fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3b1300:
    // 0x3b1300: 0x24a52af0  addiu       $a1, $a1, 0x2AF0
    ctx->pc = 0x3b1300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10992));
label_3b1304:
    // 0x3b1304: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b1304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3b1308:
    // 0x3b1308: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b1308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b130c:
    // 0x3b130c: 0x600008  jr          $v1
label_3b1310:
    if (ctx->pc == 0x3B1310u) {
        ctx->pc = 0x3B1314u;
        goto label_3b1314;
    }
    ctx->pc = 0x3B130Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B1318u: goto label_3b1318;
            case 0x3B1348u: goto label_3b1348;
            case 0x3B13D0u: goto label_3b13d0;
            case 0x3B1520u: goto label_3b1520;
            case 0x3B15A0u: goto label_3b15a0;
            case 0x3B16D8u: goto label_3b16d8;
            case 0x3B17E8u: goto label_3b17e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B130Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B1314u;
label_3b1314:
    // 0x3b1314: 0x0  nop
    ctx->pc = 0x3b1314u;
    // NOP
label_3b1318:
    // 0x3b1318: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3b1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b131c:
    // 0x3b131c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b131cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b1320:
    // 0x3b1320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1324:
    // 0x3b1324: 0xa2200508  sb          $zero, 0x508($s1)
    ctx->pc = 0x3b1324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1288), (uint8_t)GPR_U32(ctx, 0));
label_3b1328:
    // 0x3b1328: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b1328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3b132c:
    // 0x3b132c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3b132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3b1330:
    // 0x3b1330: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b1330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b1334:
    // 0x3b1334: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b1334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b1338:
    // 0x3b1338: 0x320f809  jalr        $t9
label_3b133c:
    if (ctx->pc == 0x3B133Cu) {
        ctx->pc = 0x3B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1338u;
        // 0x3b133c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1340u;
        goto label_3b1340;
    }
    ctx->pc = 0x3B1338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B1340u);
        ctx->pc = 0x3B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1338u;
        // 0x3b133c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1338u, 0x3B1340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1340u;
label_3b1340:
    // 0x3b1340: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_3b1344:
    if (ctx->pc == 0x3B1344u) {
        ctx->pc = 0x3B1348u;
        goto label_3b1348;
    }
    ctx->pc = 0x3B1340u;
    {
        const bool branch_taken_0x3b1340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1340) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B1348u;
label_3b1348:
    // 0x3b1348: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3b1348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b134c:
    // 0x3b134c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3b134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b1350:
    // 0x3b1350: 0x26250588  addiu       $a1, $s1, 0x588
    ctx->pc = 0x3b1350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1416));
label_3b1354:
    // 0x3b1354: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3b1354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b1358:
    // 0x3b1358: 0xc096cb8  jal         func_25B2E0
label_3b135c:
    if (ctx->pc == 0x3B135Cu) {
        ctx->pc = 0x3B135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1358u;
        // 0x3b135c: 0xe6200584  swc1        $f0, 0x584($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1360u;
        goto label_3b1360;
    }
    ctx->pc = 0x3B1358u;
    SET_GPR_U32(ctx, 31, 0x3B1360u);
    ctx->pc = 0x3B135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1358u;
    // 0x3b135c: 0xe6200584  swc1        $f0, 0x584($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3B1358u, 0x3B1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1360u;
label_3b1360:
    // 0x3b1360: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3b1364:
    if (ctx->pc == 0x3B1364u) {
        ctx->pc = 0x3B1368u;
        goto label_3b1368;
    }
    ctx->pc = 0x3B1360u;
    {
        const bool branch_taken_0x3b1360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1360) {
            ctx->pc = 0x3B1388u;
            goto label_3b1388;
        }
    }
    ctx->pc = 0x3B1368u;
label_3b1368:
    // 0x3b1368: 0xc6210588  lwc1        $f1, 0x588($s1)
    ctx->pc = 0x3b1368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b136c:
    // 0x3b136c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_3b1370:
    // 0x3b1370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b1374:
    // 0x3b1374: 0x0  nop
    ctx->pc = 0x3b1374u;
    // NOP
label_3b1378:
    // 0x3b1378: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b1378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b137c:
    // 0x3b137c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3b1380:
    if (ctx->pc == 0x3B1380u) {
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B137Cu;
        // 0x3b1380: 0xe6200588  swc1        $f0, 0x588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1384u;
        goto label_3b1384;
    }
    ctx->pc = 0x3B137Cu;
    {
        const bool branch_taken_0x3b137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B137Cu;
        // 0x3b1380: 0xe6200588  swc1        $f0, 0x588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b137c) {
            ctx->pc = 0x3B13B0u;
            goto label_3b13b0;
        }
    }
    ctx->pc = 0x3B1384u;
label_3b1384:
    // 0x3b1384: 0x0  nop
    ctx->pc = 0x3b1384u;
    // NOP
label_3b1388:
    // 0x3b1388: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x3b1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
label_3b138c:
    // 0x3b138c: 0x344354f6  ori         $v1, $v0, 0x54F6
    ctx->pc = 0x3b138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21750);
label_3b1390:
    // 0x3b1390: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3b1390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_3b1394:
    // 0x3b1394: 0xae230588  sw          $v1, 0x588($s1)
    ctx->pc = 0x3b1394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 3));
label_3b1398:
    // 0x3b1398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b139c:
    // 0x3b139c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b139cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b13a0:
    // 0x3b13a0: 0x0  nop
    ctx->pc = 0x3b13a0u;
    // NOP
label_3b13a4:
    // 0x3b13a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b13a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b13a8:
    // 0x3b13a8: 0xe6200588  swc1        $f0, 0x588($s1)
    ctx->pc = 0x3b13a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
label_3b13ac:
    // 0x3b13ac: 0x0  nop
    ctx->pc = 0x3b13acu;
    // NOP
label_3b13b0:
    // 0x3b13b0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3b13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3b13b4:
    // 0x3b13b4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b13b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3b13b8:
    // 0x3b13b8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b13b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3b13bc:
    // 0x3b13bc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b13bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3b13c0:
    // 0x3b13c0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b13c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3b13c4:
    // 0x3b13c4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b13c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3b13c8:
    // 0x3b13c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b13cc:
    // 0x3b13cc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b13ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b13d0:
    // 0x3b13d0: 0x86260512  lh          $a2, 0x512($s1)
    ctx->pc = 0x3b13d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3b13d4:
    // 0x3b13d4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_3b13d8:
    if (ctx->pc == 0x3B13D8u) {
        ctx->pc = 0x3B13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13D4u;
        // 0x3b13d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13DCu;
        goto label_3b13dc;
    }
    ctx->pc = 0x3B13D4u;
    {
        const bool branch_taken_0x3b13d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13D4u;
        // 0x3b13d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13d4) {
            ctx->pc = 0x3B13E8u;
            goto label_3b13e8;
        }
    }
    ctx->pc = 0x3B13DCu;
label_3b13dc:
    // 0x3b13dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b13dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b13e0:
    // 0x3b13e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b13e4:
    if (ctx->pc == 0x3B13E4u) {
        ctx->pc = 0x3B13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13E0u;
        // 0x3b13e4: 0xc62d0584  lwc1        $f13, 0x584($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13E8u;
        goto label_3b13e8;
    }
    ctx->pc = 0x3B13E0u;
    {
        const bool branch_taken_0x3b13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13E0u;
        // 0x3b13e4: 0xc62d0584  lwc1        $f13, 0x584($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b13e0) {
            ctx->pc = 0x3B13F8u;
            goto label_3b13f8;
        }
    }
    ctx->pc = 0x3B13E8u;
label_3b13e8:
    // 0x3b13e8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b13e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b13ec:
    // 0x3b13ec: 0xc0767d4  jal         func_1D9F50
label_3b13f0:
    if (ctx->pc == 0x3B13F0u) {
        ctx->pc = 0x3B13F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13ECu;
        // 0x3b13f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B13F4u;
        goto label_3b13f4;
    }
    ctx->pc = 0x3B13ECu;
    SET_GPR_U32(ctx, 31, 0x3B13F4u);
    ctx->pc = 0x3B13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13ECu;
    // 0x3b13f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3B13ECu, 0x3B13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B13F4u;
label_3b13f4:
    // 0x3b13f4: 0xc62d0584  lwc1        $f13, 0x584($s1)
    ctx->pc = 0x3b13f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b13f8:
    // 0x3b13f8: 0xc62e0588  lwc1        $f14, 0x588($s1)
    ctx->pc = 0x3b13f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3b13fc:
    // 0x3b13fc: 0xc0767dc  jal         func_1D9F70
label_3b1400:
    if (ctx->pc == 0x3B1400u) {
        ctx->pc = 0x3B1400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B13FCu;
        // 0x3b1400: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1404u;
        goto label_3b1404;
    }
    ctx->pc = 0x3B13FCu;
    SET_GPR_U32(ctx, 31, 0x3B1404u);
    ctx->pc = 0x3B1400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B13FCu;
    // 0x3b1400: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x3B13FCu, 0x3B1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1404u;
label_3b1404:
    // 0x3b1404: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3b1404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_3b1408:
    // 0x3b1408: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b1408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b140c:
    // 0x3b140c: 0x78285c20  lq          $t0, 0x5C20($at)
    ctx->pc = 0x3b140cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3b1410:
    // 0x3b1410: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x3b1410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b1414:
    // 0x3b1414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1418:
    // 0x3b1418: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3b1418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b141c:
    // 0x3b141c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b1420:
    // 0x3b1420: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x3b1420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
label_3b1424:
    // 0x3b1424: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b1424u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3b1428:
    // 0x3b1428: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b1428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b142c:
    // 0x3b142c: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3b142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3b1430:
    // 0x3b1430: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b1430u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3b1434:
    // 0x3b1434: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b1434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b1438:
    // 0x3b1438: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3b1438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3b143c:
    // 0x3b143c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b143cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3b1440:
    // 0x3b1440: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3b1440u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_3b1444:
    // 0x3b1444: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b1444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3b1448:
    // 0x3b1448: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3b1448u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_3b144c:
    // 0x3b144c: 0x92260580  lbu         $a2, 0x580($s1)
    ctx->pc = 0x3b144cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1408)));
label_3b1450:
    // 0x3b1450: 0xc62c057c  lwc1        $f12, 0x57C($s1)
    ctx->pc = 0x3b1450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b1454:
    // 0x3b1454: 0xc0c0960  jal         func_302580
label_3b1458:
    if (ctx->pc == 0x3B1458u) {
        ctx->pc = 0x3B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1454u;
        // 0x3b1458: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B145Cu;
        goto label_3b145c;
    }
    ctx->pc = 0x3B1454u;
    SET_GPR_U32(ctx, 31, 0x3B145Cu);
    ctx->pc = 0x3B1458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1454u;
    // 0x3b1458: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3B1454u, 0x3B145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B145Cu;
label_3b145c:
    // 0x3b145c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b1460:
    if (ctx->pc == 0x3B1460u) {
        ctx->pc = 0x3B1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B145Cu;
        // 0x3b1460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1464u;
        goto label_3b1464;
    }
    ctx->pc = 0x3B145Cu;
    {
        const bool branch_taken_0x3b145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B145Cu;
        // 0x3b1460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b145c) {
            ctx->pc = 0x3B1470u;
            goto label_3b1470;
        }
    }
    ctx->pc = 0x3B1464u;
label_3b1464:
    // 0x3b1464: 0xc0c0830  jal         func_3020C0
label_3b1468:
    if (ctx->pc == 0x3B1468u) {
        ctx->pc = 0x3B1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1464u;
        // 0x3b1468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B146Cu;
        goto label_3b146c;
    }
    ctx->pc = 0x3B1464u;
    SET_GPR_U32(ctx, 31, 0x3B146Cu);
    ctx->pc = 0x3B1468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1464u;
    // 0x3b1468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B1464u, 0x3B146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B146Cu;
label_3b146c:
    // 0x3b146c: 0x0  nop
    ctx->pc = 0x3b146cu;
    // NOP
label_3b1470:
    // 0x3b1470: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b1470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3b1474:
    // 0x3b1474: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b1478:
    if (ctx->pc == 0x3B1478u) {
        ctx->pc = 0x3B1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1474u;
        // 0x3b1478: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B147Cu;
        goto label_3b147c;
    }
    ctx->pc = 0x3B1474u;
    {
        const bool branch_taken_0x3b1474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1474u;
        // 0x3b1478: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1474) {
            ctx->pc = 0x3B1488u;
            goto label_3b1488;
        }
    }
    ctx->pc = 0x3B147Cu;
label_3b147c:
    // 0x3b147c: 0x10000022  b           . + 4 + (0x22 << 2)
label_3b1480:
    if (ctx->pc == 0x3B1480u) {
        ctx->pc = 0x3B1484u;
        goto label_3b1484;
    }
    ctx->pc = 0x3B147Cu;
    {
        const bool branch_taken_0x3b147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b147c) {
            ctx->pc = 0x3B1508u;
            goto label_3b1508;
        }
    }
    ctx->pc = 0x3B1484u;
label_3b1484:
    // 0x3b1484: 0x0  nop
    ctx->pc = 0x3b1484u;
    // NOP
label_3b1488:
    // 0x3b1488: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b1488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b148c:
    // 0x3b148c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3b1490:
    // 0x3b1490: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b1494:
    // 0x3b1494: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1494u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b1498:
    // 0x3b1498: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b1498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3b149c:
    // 0x3b149c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3b14a0:
    if (ctx->pc == 0x3B14A0u) {
        ctx->pc = 0x3B14A4u;
        goto label_3b14a4;
    }
    ctx->pc = 0x3B149Cu;
    {
        const bool branch_taken_0x3b149c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b149c) {
            ctx->pc = 0x3B14D8u;
            goto label_3b14d8;
        }
    }
    ctx->pc = 0x3B14A4u;
label_3b14a4:
    // 0x3b14a4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b14a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b14a8:
    // 0x3b14a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b14a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3b14ac:
    // 0x3b14ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3b14b0:
    if (ctx->pc == 0x3B14B0u) {
        ctx->pc = 0x3B14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14ACu;
        // 0x3b14b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14B4u;
        goto label_3b14b4;
    }
    ctx->pc = 0x3B14ACu;
    {
        const bool branch_taken_0x3b14ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14ACu;
        // 0x3b14b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14ac) {
            ctx->pc = 0x3B1500u;
            goto label_3b1500;
        }
    }
    ctx->pc = 0x3B14B4u;
label_3b14b4:
    // 0x3b14b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b14b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b14b8:
    // 0x3b14b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b14b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b14bc:
    // 0x3b14bc: 0x0  nop
    ctx->pc = 0x3b14bcu;
    // NOP
label_3b14c0:
    // 0x3b14c0: 0x0  nop
    ctx->pc = 0x3b14c0u;
    // NOP
label_3b14c4:
    // 0x3b14c4: 0x2010  mfhi        $a0
    ctx->pc = 0x3b14c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3b14c8:
    // 0x3b14c8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b14c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b14cc:
    // 0x3b14cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3b14d0:
    if (ctx->pc == 0x3B14D0u) {
        ctx->pc = 0x3B14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14CCu;
        // 0x3b14d0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14D4u;
        goto label_3b14d4;
    }
    ctx->pc = 0x3B14CCu;
    {
        const bool branch_taken_0x3b14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14CCu;
        // 0x3b14d0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14cc) {
            ctx->pc = 0x3B1500u;
            goto label_3b1500;
        }
    }
    ctx->pc = 0x3B14D4u;
label_3b14d4:
    // 0x3b14d4: 0x0  nop
    ctx->pc = 0x3b14d4u;
    // NOP
label_3b14d8:
    // 0x3b14d8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b14d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b14dc:
    // 0x3b14dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b14dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b14e0:
    // 0x3b14e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3b14e4:
    if (ctx->pc == 0x3B14E4u) {
        ctx->pc = 0x3B14E8u;
        goto label_3b14e8;
    }
    ctx->pc = 0x3B14E0u;
    {
        const bool branch_taken_0x3b14e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b14e0) {
            ctx->pc = 0x3B1500u;
            goto label_3b1500;
        }
    }
    ctx->pc = 0x3B14E8u;
label_3b14e8:
    // 0x3b14e8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b14e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b14ec:
    // 0x3b14ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b14f0:
    // 0x3b14f0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b14f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3b14f4:
    // 0x3b14f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b14f8:
    if (ctx->pc == 0x3B14F8u) {
        ctx->pc = 0x3B14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14F4u;
        // 0x3b14f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B14FCu;
        goto label_3b14fc;
    }
    ctx->pc = 0x3B14F4u;
    {
        const bool branch_taken_0x3b14f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B14F4u;
        // 0x3b14f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b14f4) {
            ctx->pc = 0x3B1508u;
            goto label_3b1508;
        }
    }
    ctx->pc = 0x3B14FCu;
label_3b14fc:
    // 0x3b14fc: 0x0  nop
    ctx->pc = 0x3b14fcu;
    // NOP
label_3b1500:
    // 0x3b1500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1504:
    // 0x3b1504: 0x0  nop
    ctx->pc = 0x3b1504u;
    // NOP
label_3b1508:
    // 0x3b1508: 0x14600171  bnez        $v1, . + 4 + (0x171 << 2)
label_3b150c:
    if (ctx->pc == 0x3B150Cu) {
        ctx->pc = 0x3B1510u;
        goto label_3b1510;
    }
    ctx->pc = 0x3B1508u;
    {
        const bool branch_taken_0x3b1508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1508) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B1510u;
label_3b1510:
    // 0x3b1510: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b1510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3b1514:
    // 0x3b1514: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b1514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b1518:
    // 0x3b1518: 0x1000016d  b           . + 4 + (0x16D << 2)
label_3b151c:
    if (ctx->pc == 0x3B151Cu) {
        ctx->pc = 0x3B151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1518u;
        // 0x3b151c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1520u;
        goto label_3b1520;
    }
    ctx->pc = 0x3B1518u;
    {
        const bool branch_taken_0x3b1518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1518u;
        // 0x3b151c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1518) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B1520u;
label_3b1520:
    // 0x3b1520: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_3b1524:
    if (ctx->pc == 0x3B1524u) {
        ctx->pc = 0x3B1528u;
        goto label_3b1528;
    }
    ctx->pc = 0x3B1520u;
    {
        const bool branch_taken_0x3b1520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1520) {
            ctx->pc = 0x3B1578u;
            goto label_3b1578;
        }
    }
    ctx->pc = 0x3B1528u;
label_3b1528:
    // 0x3b1528: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b1528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3b152c:
    // 0x3b152c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b152cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b1530:
    // 0x3b1530: 0xc0aa40c  jal         func_2A9030
label_3b1534:
    if (ctx->pc == 0x3B1534u) {
        ctx->pc = 0x3B1534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1530u;
        // 0x3b1534: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1538u;
        goto label_3b1538;
    }
    ctx->pc = 0x3B1530u;
    SET_GPR_U32(ctx, 31, 0x3B1538u);
    ctx->pc = 0x3B1534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1530u;
    // 0x3b1534: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9030u, 0x3B1530u, 0x3B1538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1538u;
label_3b1538:
    // 0x3b1538: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3b1538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
label_3b153c:
    // 0x3b153c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b153cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3b1540:
    // 0x3b1540: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b1540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b1544:
    // 0x3b1544: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x3b1544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
label_3b1548:
    // 0x3b1548: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b1548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3b154c:
    // 0x3b154c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b154cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
label_3b1550:
    // 0x3b1550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b1550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1554:
    // 0x3b1554: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b1554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b1558:
    // 0x3b1558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b1558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b155c:
    // 0x3b155c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b155cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1560:
    // 0x3b1560: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b1560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1564:
    // 0x3b1564: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b1564u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1568:
    // 0x3b1568: 0xc05e9e8  jal         func_17A7A0
label_3b156c:
    if (ctx->pc == 0x3B156Cu) {
        ctx->pc = 0x3B156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1568u;
        // 0x3b156c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1570u;
        goto label_3b1570;
    }
    ctx->pc = 0x3B1568u;
    SET_GPR_U32(ctx, 31, 0x3B1570u);
    ctx->pc = 0x3B156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1568u;
    // 0x3b156c: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B1568u, 0x3B1570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1570u;
label_3b1570:
    // 0x3b1570: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b1574:
    if (ctx->pc == 0x3B1574u) {
        ctx->pc = 0x3B1578u;
        goto label_3b1578;
    }
    ctx->pc = 0x3B1570u;
    {
        const bool branch_taken_0x3b1570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1570) {
            ctx->pc = 0x3B1580u;
            goto label_3b1580;
        }
    }
    ctx->pc = 0x3B1578u;
label_3b1578:
    // 0x3b1578: 0xc0c0830  jal         func_3020C0
label_3b157c:
    if (ctx->pc == 0x3B157Cu) {
        ctx->pc = 0x3B157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1578u;
        // 0x3b157c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1580u;
        goto label_3b1580;
    }
    ctx->pc = 0x3B1578u;
    SET_GPR_U32(ctx, 31, 0x3B1580u);
    ctx->pc = 0x3B157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1578u;
    // 0x3b157c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B1578u, 0x3B1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1580u;
label_3b1580:
    // 0x3b1580: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3b1580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_3b1584:
    // 0x3b1584: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b1584u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3b1588:
    // 0x3b1588: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b1588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3b158c:
    // 0x3b158c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b158cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3b1590:
    // 0x3b1590: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b1590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3b1594:
    // 0x3b1594: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b1594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3b1598:
    // 0x3b1598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b159c:
    // 0x3b159c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b159cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b15a0:
    // 0x3b15a0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3b15a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_3b15a4:
    // 0x3b15a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b15a8:
    // 0x3b15a8: 0xc0c08b4  jal         func_3022D0
label_3b15ac:
    if (ctx->pc == 0x3B15ACu) {
        ctx->pc = 0x3B15ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15A8u;
        // 0x3b15ac: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15B0u;
        goto label_3b15b0;
    }
    ctx->pc = 0x3B15A8u;
    SET_GPR_U32(ctx, 31, 0x3B15B0u);
    ctx->pc = 0x3B15ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B15A8u;
    // 0x3b15ac: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B15A8u, 0x3B15B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B15B0u;
label_3b15b0:
    // 0x3b15b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b15b4:
    if (ctx->pc == 0x3B15B4u) {
        ctx->pc = 0x3B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15B0u;
        // 0x3b15b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15B8u;
        goto label_3b15b8;
    }
    ctx->pc = 0x3B15B0u;
    {
        const bool branch_taken_0x3b15b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15B0u;
        // 0x3b15b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b15b0) {
            ctx->pc = 0x3B15C0u;
            goto label_3b15c0;
        }
    }
    ctx->pc = 0x3B15B8u;
label_3b15b8:
    // 0x3b15b8: 0xc0c0830  jal         func_3020C0
label_3b15bc:
    if (ctx->pc == 0x3B15BCu) {
        ctx->pc = 0x3B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B15B8u;
        // 0x3b15bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B15C0u;
        goto label_3b15c0;
    }
    ctx->pc = 0x3B15B8u;
    SET_GPR_U32(ctx, 31, 0x3B15C0u);
    ctx->pc = 0x3B15BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B15B8u;
    // 0x3b15bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B15B8u, 0x3B15C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B15C0u;
label_3b15c0:
    // 0x3b15c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b15c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b15c4:
    // 0x3b15c4: 0x78285c20  lq          $t0, 0x5C20($at)
    ctx->pc = 0x3b15c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3b15c8:
    // 0x3b15c8: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x3b15c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b15cc:
    // 0x3b15cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b15d0:
    // 0x3b15d0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3b15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b15d4:
    // 0x3b15d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b15d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b15d8:
    // 0x3b15d8: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x3b15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
label_3b15dc:
    // 0x3b15dc: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b15dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3b15e0:
    // 0x3b15e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b15e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b15e4:
    // 0x3b15e4: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3b15e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3b15e8:
    // 0x3b15e8: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b15e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3b15ec:
    // 0x3b15ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b15ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b15f0:
    // 0x3b15f0: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3b15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3b15f4:
    // 0x3b15f4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b15f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3b15f8:
    // 0x3b15f8: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3b15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_3b15fc:
    // 0x3b15fc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b15fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3b1600:
    // 0x3b1600: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3b1600u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_3b1604:
    // 0x3b1604: 0x92260580  lbu         $a2, 0x580($s1)
    ctx->pc = 0x3b1604u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1408)));
label_3b1608:
    // 0x3b1608: 0xc62c057c  lwc1        $f12, 0x57C($s1)
    ctx->pc = 0x3b1608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b160c:
    // 0x3b160c: 0xc0c0960  jal         func_302580
label_3b1610:
    if (ctx->pc == 0x3B1610u) {
        ctx->pc = 0x3B1610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B160Cu;
        // 0x3b1610: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1614u;
        goto label_3b1614;
    }
    ctx->pc = 0x3B160Cu;
    SET_GPR_U32(ctx, 31, 0x3B1614u);
    ctx->pc = 0x3B1610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B160Cu;
    // 0x3b1610: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3B160Cu, 0x3B1614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1614u;
label_3b1614:
    // 0x3b1614: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3b1618:
    if (ctx->pc == 0x3B1618u) {
        ctx->pc = 0x3B1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1614u;
        // 0x3b1618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B161Cu;
        goto label_3b161c;
    }
    ctx->pc = 0x3B1614u;
    {
        const bool branch_taken_0x3b1614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1614u;
        // 0x3b1618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1614) {
            ctx->pc = 0x3B1628u;
            goto label_3b1628;
        }
    }
    ctx->pc = 0x3B161Cu;
label_3b161c:
    // 0x3b161c: 0xc0c0830  jal         func_3020C0
label_3b1620:
    if (ctx->pc == 0x3B1620u) {
        ctx->pc = 0x3B1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B161Cu;
        // 0x3b1620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1624u;
        goto label_3b1624;
    }
    ctx->pc = 0x3B161Cu;
    SET_GPR_U32(ctx, 31, 0x3B1624u);
    ctx->pc = 0x3B1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B161Cu;
    // 0x3b1620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B161Cu, 0x3B1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1624u;
label_3b1624:
    // 0x3b1624: 0x0  nop
    ctx->pc = 0x3b1624u;
    // NOP
label_3b1628:
    // 0x3b1628: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b1628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3b162c:
    // 0x3b162c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b1630:
    if (ctx->pc == 0x3B1630u) {
        ctx->pc = 0x3B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B162Cu;
        // 0x3b1630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1634u;
        goto label_3b1634;
    }
    ctx->pc = 0x3B162Cu;
    {
        const bool branch_taken_0x3b162c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B162Cu;
        // 0x3b1630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b162c) {
            ctx->pc = 0x3B1640u;
            goto label_3b1640;
        }
    }
    ctx->pc = 0x3B1634u;
label_3b1634:
    // 0x3b1634: 0x10000022  b           . + 4 + (0x22 << 2)
label_3b1638:
    if (ctx->pc == 0x3B1638u) {
        ctx->pc = 0x3B163Cu;
        goto label_3b163c;
    }
    ctx->pc = 0x3B1634u;
    {
        const bool branch_taken_0x3b1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1634) {
            ctx->pc = 0x3B16C0u;
            goto label_3b16c0;
        }
    }
    ctx->pc = 0x3B163Cu;
label_3b163c:
    // 0x3b163c: 0x0  nop
    ctx->pc = 0x3b163cu;
    // NOP
label_3b1640:
    // 0x3b1640: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b1640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b1644:
    // 0x3b1644: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b1644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3b1648:
    // 0x3b1648: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b164c:
    // 0x3b164c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b164cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b1650:
    // 0x3b1650: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b1650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3b1654:
    // 0x3b1654: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3b1658:
    if (ctx->pc == 0x3B1658u) {
        ctx->pc = 0x3B165Cu;
        goto label_3b165c;
    }
    ctx->pc = 0x3B1654u;
    {
        const bool branch_taken_0x3b1654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b1654) {
            ctx->pc = 0x3B1690u;
            goto label_3b1690;
        }
    }
    ctx->pc = 0x3B165Cu;
label_3b165c:
    // 0x3b165c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b165cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b1660:
    // 0x3b1660: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b1660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3b1664:
    // 0x3b1664: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3b1668:
    if (ctx->pc == 0x3B1668u) {
        ctx->pc = 0x3B1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1664u;
        // 0x3b1668: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B166Cu;
        goto label_3b166c;
    }
    ctx->pc = 0x3B1664u;
    {
        const bool branch_taken_0x3b1664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1664u;
        // 0x3b1668: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1664) {
            ctx->pc = 0x3B16B8u;
            goto label_3b16b8;
        }
    }
    ctx->pc = 0x3B166Cu;
label_3b166c:
    // 0x3b166c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1670:
    // 0x3b1670: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b1670u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b1674:
    // 0x3b1674: 0x0  nop
    ctx->pc = 0x3b1674u;
    // NOP
label_3b1678:
    // 0x3b1678: 0x0  nop
    ctx->pc = 0x3b1678u;
    // NOP
label_3b167c:
    // 0x3b167c: 0x2010  mfhi        $a0
    ctx->pc = 0x3b167cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3b1680:
    // 0x3b1680: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b1684:
    // 0x3b1684: 0x1000000c  b           . + 4 + (0xC << 2)
label_3b1688:
    if (ctx->pc == 0x3B1688u) {
        ctx->pc = 0x3B1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1684u;
        // 0x3b1688: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B168Cu;
        goto label_3b168c;
    }
    ctx->pc = 0x3B1684u;
    {
        const bool branch_taken_0x3b1684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1684u;
        // 0x3b1688: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1684) {
            ctx->pc = 0x3B16B8u;
            goto label_3b16b8;
        }
    }
    ctx->pc = 0x3B168Cu;
label_3b168c:
    // 0x3b168c: 0x0  nop
    ctx->pc = 0x3b168cu;
    // NOP
label_3b1690:
    // 0x3b1690: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b1690u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b1694:
    // 0x3b1694: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b1694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b1698:
    // 0x3b1698: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3b169c:
    if (ctx->pc == 0x3B169Cu) {
        ctx->pc = 0x3B16A0u;
        goto label_3b16a0;
    }
    ctx->pc = 0x3B1698u;
    {
        const bool branch_taken_0x3b1698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1698) {
            ctx->pc = 0x3B16B8u;
            goto label_3b16b8;
        }
    }
    ctx->pc = 0x3B16A0u;
label_3b16a0:
    // 0x3b16a0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b16a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b16a4:
    // 0x3b16a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b16a8:
    // 0x3b16a8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b16a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3b16ac:
    // 0x3b16ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b16b0:
    if (ctx->pc == 0x3B16B0u) {
        ctx->pc = 0x3B16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16ACu;
        // 0x3b16b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B16B4u;
        goto label_3b16b4;
    }
    ctx->pc = 0x3B16ACu;
    {
        const bool branch_taken_0x3b16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16ACu;
        // 0x3b16b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b16ac) {
            ctx->pc = 0x3B16C0u;
            goto label_3b16c0;
        }
    }
    ctx->pc = 0x3B16B4u;
label_3b16b4:
    // 0x3b16b4: 0x0  nop
    ctx->pc = 0x3b16b4u;
    // NOP
label_3b16b8:
    // 0x3b16b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b16bc:
    // 0x3b16bc: 0x0  nop
    ctx->pc = 0x3b16bcu;
    // NOP
label_3b16c0:
    // 0x3b16c0: 0x14600103  bnez        $v1, . + 4 + (0x103 << 2)
label_3b16c4:
    if (ctx->pc == 0x3B16C4u) {
        ctx->pc = 0x3B16C8u;
        goto label_3b16c8;
    }
    ctx->pc = 0x3B16C0u;
    {
        const bool branch_taken_0x3b16c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b16c0) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B16C8u;
label_3b16c8:
    // 0x3b16c8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b16c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3b16cc:
    // 0x3b16cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b16ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b16d0:
    // 0x3b16d0: 0x100000ff  b           . + 4 + (0xFF << 2)
label_3b16d4:
    if (ctx->pc == 0x3B16D4u) {
        ctx->pc = 0x3B16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16D0u;
        // 0x3b16d4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B16D8u;
        goto label_3b16d8;
    }
    ctx->pc = 0x3B16D0u;
    {
        const bool branch_taken_0x3b16d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16D0u;
        // 0x3b16d4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b16d0) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B16D8u;
label_3b16d8:
    // 0x3b16d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3b16dc:
    // 0x3b16dc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3b16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_3b16e0:
    // 0x3b16e0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3b16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b16e4:
    // 0x3b16e4: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3b16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b16e8:
    // 0x3b16e8: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x3b16e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_3b16ec:
    // 0x3b16ec: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3b16ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3b16f0:
    // 0x3b16f0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x3b16f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3b16f4:
    // 0x3b16f4: 0x27a800bc  addiu       $t0, $sp, 0xBC
    ctx->pc = 0x3b16f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_3b16f8:
    // 0x3b16f8: 0xc096cc8  jal         func_25B320
label_3b16fc:
    if (ctx->pc == 0x3B16FCu) {
        ctx->pc = 0x3B16FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B16F8u;
        // 0x3b16fc: 0xe6200554  swc1        $f0, 0x554($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1700u;
        goto label_3b1700;
    }
    ctx->pc = 0x3B16F8u;
    SET_GPR_U32(ctx, 31, 0x3B1700u);
    ctx->pc = 0x3B16FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B16F8u;
    // 0x3b16fc: 0xe6200554  swc1        $f0, 0x554($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x3B16F8u, 0x3B1700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1700u;
label_3b1700:
    // 0x3b1700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b1704:
    if (ctx->pc == 0x3B1704u) {
        ctx->pc = 0x3B1708u;
        goto label_3b1708;
    }
    ctx->pc = 0x3B1700u;
    {
        const bool branch_taken_0x3b1700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1700) {
            ctx->pc = 0x3B1710u;
            goto label_3b1710;
        }
    }
    ctx->pc = 0x3B1708u;
label_3b1708:
    // 0x3b1708: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3b1708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b170c:
    // 0x3b170c: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x3b170cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
label_3b1710:
    // 0x3b1710: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_3b1714:
    if (ctx->pc == 0x3B1714u) {
        ctx->pc = 0x3B1718u;
        goto label_3b1718;
    }
    ctx->pc = 0x3B1710u;
    {
        const bool branch_taken_0x3b1710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1710) {
            ctx->pc = 0x3B17B8u;
            goto label_3b17b8;
        }
    }
    ctx->pc = 0x3B1718u;
label_3b1718:
    // 0x3b1718: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b1718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3b171c:
    // 0x3b171c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3b171cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b1720:
    // 0x3b1720: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b1720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b1724:
    // 0x3b1724: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b1724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1728:
    // 0x3b1728: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x3b1728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b172c:
    // 0x3b172c: 0xc0a9d0c  jal         func_2A7430
label_3b1730:
    if (ctx->pc == 0x3B1730u) {
        ctx->pc = 0x3B1730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B172Cu;
        // 0x3b1730: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1734u;
        goto label_3b1734;
    }
    ctx->pc = 0x3B172Cu;
    SET_GPR_U32(ctx, 31, 0x3B1734u);
    ctx->pc = 0x3B1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B172Cu;
    // 0x3b1730: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3B172Cu, 0x3B1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1734u;
label_3b1734:
    // 0x3b1734: 0xae220564  sw          $v0, 0x564($s1)
    ctx->pc = 0x3b1734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 2));
label_3b1738:
    // 0x3b1738: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3b1738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3b173c:
    // 0x3b173c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b173cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3b1740:
    // 0x3b1740: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b1740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1744:
    // 0x3b1744: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b1744u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b1748:
    // 0x3b1748: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x3b1748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b174c:
    // 0x3b174c: 0xc0a9d0c  jal         func_2A7430
label_3b1750:
    if (ctx->pc == 0x3B1750u) {
        ctx->pc = 0x3B1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B174Cu;
        // 0x3b1750: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1754u;
        goto label_3b1754;
    }
    ctx->pc = 0x3B174Cu;
    SET_GPR_U32(ctx, 31, 0x3B1754u);
    ctx->pc = 0x3B1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B174Cu;
    // 0x3b1750: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3B174Cu, 0x3B1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1754u;
label_3b1754:
    // 0x3b1754: 0xae220568  sw          $v0, 0x568($s1)
    ctx->pc = 0x3b1754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 2));
label_3b1758:
    // 0x3b1758: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b1758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b175c:
    // 0x3b175c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b175cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_3b1760:
    // 0x3b1760: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3b1760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b1764:
    // 0x3b1764: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b1764u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b1768:
    // 0x3b1768: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x3b1768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b176c:
    // 0x3b176c: 0xc0a9d0c  jal         func_2A7430
label_3b1770:
    if (ctx->pc == 0x3B1770u) {
        ctx->pc = 0x3B1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B176Cu;
        // 0x3b1770: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1774u;
        goto label_3b1774;
    }
    ctx->pc = 0x3B176Cu;
    SET_GPR_U32(ctx, 31, 0x3B1774u);
    ctx->pc = 0x3B1770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B176Cu;
    // 0x3b1770: 0x26290550  addiu       $t1, $s1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3B176Cu, 0x3B1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1774u;
label_3b1774:
    // 0x3b1774: 0xae22056c  sw          $v0, 0x56C($s1)
    ctx->pc = 0x3b1774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1388), GPR_U32(ctx, 2));
label_3b1778:
    // 0x3b1778: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b1778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3b177c:
    // 0x3b177c: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b177cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b1780:
    // 0x3b1780: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3b1780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
label_3b1784:
    // 0x3b1784: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b1784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3b1788:
    // 0x3b1788: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b1788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
label_3b178c:
    // 0x3b178c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b178cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1790:
    // 0x3b1790: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b1790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b1794:
    // 0x3b1794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b1794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1798:
    // 0x3b1798: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b1798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b179c:
    // 0x3b179c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b179cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b17a0:
    // 0x3b17a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b17a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b17a4:
    // 0x3b17a4: 0xc05e9e8  jal         func_17A7A0
label_3b17a8:
    if (ctx->pc == 0x3B17A8u) {
        ctx->pc = 0x3B17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17A4u;
        // 0x3b17a8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17ACu;
        goto label_3b17ac;
    }
    ctx->pc = 0x3B17A4u;
    SET_GPR_U32(ctx, 31, 0x3B17ACu);
    ctx->pc = 0x3B17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17A4u;
    // 0x3b17a8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B17A4u, 0x3B17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17ACu;
label_3b17ac:
    // 0x3b17ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b17b0:
    if (ctx->pc == 0x3B17B0u) {
        ctx->pc = 0x3B17B4u;
        goto label_3b17b4;
    }
    ctx->pc = 0x3B17ACu;
    {
        const bool branch_taken_0x3b17ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b17ac) {
            ctx->pc = 0x3B17C8u;
            goto label_3b17c8;
        }
    }
    ctx->pc = 0x3B17B4u;
label_3b17b4:
    // 0x3b17b4: 0x0  nop
    ctx->pc = 0x3b17b4u;
    // NOP
label_3b17b8:
    // 0x3b17b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b17b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b17bc:
    // 0x3b17bc: 0xc0c0830  jal         func_3020C0
label_3b17c0:
    if (ctx->pc == 0x3B17C0u) {
        ctx->pc = 0x3B17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17BCu;
        // 0x3b17c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17C4u;
        goto label_3b17c4;
    }
    ctx->pc = 0x3B17BCu;
    SET_GPR_U32(ctx, 31, 0x3B17C4u);
    ctx->pc = 0x3B17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17BCu;
    // 0x3b17c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B17BCu, 0x3B17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17C4u;
label_3b17c4:
    // 0x3b17c4: 0x0  nop
    ctx->pc = 0x3b17c4u;
    // NOP
label_3b17c8:
    // 0x3b17c8: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3b17c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_3b17cc:
    // 0x3b17cc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b17ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3b17d0:
    // 0x3b17d0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b17d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3b17d4:
    // 0x3b17d4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b17d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3b17d8:
    // 0x3b17d8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b17d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3b17dc:
    // 0x3b17dc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b17dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3b17e0:
    // 0x3b17e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b17e4:
    // 0x3b17e4: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b17e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b17e8:
    // 0x3b17e8: 0x8e250564  lw          $a1, 0x564($s1)
    ctx->pc = 0x3b17e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_3b17ec:
    // 0x3b17ec: 0xc0c08ac  jal         func_3022B0
label_3b17f0:
    if (ctx->pc == 0x3B17F0u) {
        ctx->pc = 0x3B17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17ECu;
        // 0x3b17f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17F4u;
        goto label_3b17f4;
    }
    ctx->pc = 0x3B17ECu;
    SET_GPR_U32(ctx, 31, 0x3B17F4u);
    ctx->pc = 0x3B17F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17ECu;
    // 0x3b17f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x3B17ECu, 0x3B17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B17F4u;
label_3b17f4:
    // 0x3b17f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3b17f8:
    if (ctx->pc == 0x3B17F8u) {
        ctx->pc = 0x3B17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17F4u;
        // 0x3b17f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B17FCu;
        goto label_3b17fc;
    }
    ctx->pc = 0x3B17F4u;
    {
        const bool branch_taken_0x3b17f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17F4u;
        // 0x3b17f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b17f4) {
            ctx->pc = 0x3B1810u;
            goto label_3b1810;
        }
    }
    ctx->pc = 0x3B17FCu;
label_3b17fc:
    // 0x3b17fc: 0xc0c0830  jal         func_3020C0
label_3b1800:
    if (ctx->pc == 0x3B1800u) {
        ctx->pc = 0x3B1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B17FCu;
        // 0x3b1800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1804u;
        goto label_3b1804;
    }
    ctx->pc = 0x3B17FCu;
    SET_GPR_U32(ctx, 31, 0x3B1804u);
    ctx->pc = 0x3B1800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B17FCu;
    // 0x3b1800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B17FCu, 0x3B1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1804u;
label_3b1804:
    // 0x3b1804: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_3b1808:
    if (ctx->pc == 0x3B1808u) {
        ctx->pc = 0x3B180Cu;
        goto label_3b180c;
    }
    ctx->pc = 0x3B1804u;
    {
        const bool branch_taken_0x3b1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1804) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B180Cu;
label_3b180c:
    // 0x3b180c: 0x0  nop
    ctx->pc = 0x3b180cu;
    // NOP
label_3b1810:
    // 0x3b1810: 0x8e250568  lw          $a1, 0x568($s1)
    ctx->pc = 0x3b1810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
label_3b1814:
    // 0x3b1814: 0xc0c08ac  jal         func_3022B0
label_3b1818:
    if (ctx->pc == 0x3B1818u) {
        ctx->pc = 0x3B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1814u;
        // 0x3b1818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B181Cu;
        goto label_3b181c;
    }
    ctx->pc = 0x3B1814u;
    SET_GPR_U32(ctx, 31, 0x3B181Cu);
    ctx->pc = 0x3B1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1814u;
    // 0x3b1818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x3B1814u, 0x3B181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B181Cu;
label_3b181c:
    // 0x3b181c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3b1820:
    if (ctx->pc == 0x3B1820u) {
        ctx->pc = 0x3B1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B181Cu;
        // 0x3b1820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1824u;
        goto label_3b1824;
    }
    ctx->pc = 0x3B181Cu;
    {
        const bool branch_taken_0x3b181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B181Cu;
        // 0x3b1820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b181c) {
            ctx->pc = 0x3B1838u;
            goto label_3b1838;
        }
    }
    ctx->pc = 0x3B1824u;
label_3b1824:
    // 0x3b1824: 0xc0c0830  jal         func_3020C0
label_3b1828:
    if (ctx->pc == 0x3B1828u) {
        ctx->pc = 0x3B1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1824u;
        // 0x3b1828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B182Cu;
        goto label_3b182c;
    }
    ctx->pc = 0x3B1824u;
    SET_GPR_U32(ctx, 31, 0x3B182Cu);
    ctx->pc = 0x3B1828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1824u;
    // 0x3b1828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B1824u, 0x3B182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B182Cu;
label_3b182c:
    // 0x3b182c: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_3b1830:
    if (ctx->pc == 0x3B1830u) {
        ctx->pc = 0x3B1834u;
        goto label_3b1834;
    }
    ctx->pc = 0x3B182Cu;
    {
        const bool branch_taken_0x3b182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b182c) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B1834u;
label_3b1834:
    // 0x3b1834: 0x0  nop
    ctx->pc = 0x3b1834u;
    // NOP
label_3b1838:
    // 0x3b1838: 0x8e25056c  lw          $a1, 0x56C($s1)
    ctx->pc = 0x3b1838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_3b183c:
    // 0x3b183c: 0xc0c08ac  jal         func_3022B0
label_3b1840:
    if (ctx->pc == 0x3B1840u) {
        ctx->pc = 0x3B1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B183Cu;
        // 0x3b1840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1844u;
        goto label_3b1844;
    }
    ctx->pc = 0x3B183Cu;
    SET_GPR_U32(ctx, 31, 0x3B1844u);
    ctx->pc = 0x3B1840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B183Cu;
    // 0x3b1840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x3B183Cu, 0x3B1844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1844u;
label_3b1844:
    // 0x3b1844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3b1848:
    if (ctx->pc == 0x3B1848u) {
        ctx->pc = 0x3B1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1844u;
        // 0x3b1848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B184Cu;
        goto label_3b184c;
    }
    ctx->pc = 0x3B1844u;
    {
        const bool branch_taken_0x3b1844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1844u;
        // 0x3b1848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1844) {
            ctx->pc = 0x3B1860u;
            goto label_3b1860;
        }
    }
    ctx->pc = 0x3B184Cu;
label_3b184c:
    // 0x3b184c: 0xc0c0830  jal         func_3020C0
label_3b1850:
    if (ctx->pc == 0x3B1850u) {
        ctx->pc = 0x3B1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B184Cu;
        // 0x3b1850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1854u;
        goto label_3b1854;
    }
    ctx->pc = 0x3B184Cu;
    SET_GPR_U32(ctx, 31, 0x3B1854u);
    ctx->pc = 0x3B1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B184Cu;
    // 0x3b1850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B184Cu, 0x3B1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1854u;
label_3b1854:
    // 0x3b1854: 0x1000009e  b           . + 4 + (0x9E << 2)
label_3b1858:
    if (ctx->pc == 0x3B1858u) {
        ctx->pc = 0x3B185Cu;
        goto label_3b185c;
    }
    ctx->pc = 0x3B1854u;
    {
        const bool branch_taken_0x3b1854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1854) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B185Cu;
label_3b185c:
    // 0x3b185c: 0x0  nop
    ctx->pc = 0x3b185cu;
    // NOP
label_3b1860:
    // 0x3b1860: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3b1860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_3b1864:
    // 0x3b1864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1868:
    // 0x3b1868: 0xc0c08b4  jal         func_3022D0
label_3b186c:
    if (ctx->pc == 0x3B186Cu) {
        ctx->pc = 0x3B186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1868u;
        // 0x3b186c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1870u;
        goto label_3b1870;
    }
    ctx->pc = 0x3B1868u;
    SET_GPR_U32(ctx, 31, 0x3B1870u);
    ctx->pc = 0x3B186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1868u;
    // 0x3b186c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B1868u, 0x3B1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1870u;
label_3b1870:
    // 0x3b1870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b1874:
    if (ctx->pc == 0x3B1874u) {
        ctx->pc = 0x3B1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1870u;
        // 0x3b1874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1878u;
        goto label_3b1878;
    }
    ctx->pc = 0x3B1870u;
    {
        const bool branch_taken_0x3b1870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1870u;
        // 0x3b1874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1870) {
            ctx->pc = 0x3B1880u;
            goto label_3b1880;
        }
    }
    ctx->pc = 0x3B1878u;
label_3b1878:
    // 0x3b1878: 0xc0c0830  jal         func_3020C0
label_3b187c:
    if (ctx->pc == 0x3B187Cu) {
        ctx->pc = 0x3B187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1878u;
        // 0x3b187c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1880u;
        goto label_3b1880;
    }
    ctx->pc = 0x3B1878u;
    SET_GPR_U32(ctx, 31, 0x3B1880u);
    ctx->pc = 0x3B187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1878u;
    // 0x3b187c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B1878u, 0x3B1880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1880u;
label_3b1880:
    // 0x3b1880: 0xc096c80  jal         func_25B200
label_3b1884:
    if (ctx->pc == 0x3B1884u) {
        ctx->pc = 0x3B1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1880u;
        // 0x3b1884: 0x8e240564  lw          $a0, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1888u;
        goto label_3b1888;
    }
    ctx->pc = 0x3B1880u;
    SET_GPR_U32(ctx, 31, 0x3B1888u);
    ctx->pc = 0x3B1884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1880u;
    // 0x3b1884: 0x8e240564  lw          $a0, 0x564($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3B1880u, 0x3B1888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1888u;
label_3b1888:
    // 0x3b1888: 0x8e240568  lw          $a0, 0x568($s1)
    ctx->pc = 0x3b1888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
label_3b188c:
    // 0x3b188c: 0xc096c80  jal         func_25B200
label_3b1890:
    if (ctx->pc == 0x3B1890u) {
        ctx->pc = 0x3B1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B188Cu;
        // 0x3b1890: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1894u;
        goto label_3b1894;
    }
    ctx->pc = 0x3B188Cu;
    SET_GPR_U32(ctx, 31, 0x3B1894u);
    ctx->pc = 0x3B1890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B188Cu;
    // 0x3b1890: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3B188Cu, 0x3B1894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1894u;
label_3b1894:
    // 0x3b1894: 0x8e24056c  lw          $a0, 0x56C($s1)
    ctx->pc = 0x3b1894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
label_3b1898:
    // 0x3b1898: 0xc096c80  jal         func_25B200
label_3b189c:
    if (ctx->pc == 0x3B189Cu) {
        ctx->pc = 0x3B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1898u;
        // 0x3b189c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B18A0u;
        goto label_3b18a0;
    }
    ctx->pc = 0x3B1898u;
    SET_GPR_U32(ctx, 31, 0x3B18A0u);
    ctx->pc = 0x3B189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1898u;
    // 0x3b189c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3B1898u, 0x3B18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B18A0u;
label_3b18a0:
    // 0x3b18a0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_3b18a4:
    if (ctx->pc == 0x3B18A4u) {
        ctx->pc = 0x3B18A8u;
        goto label_3b18a8;
    }
    ctx->pc = 0x3B18A0u;
    {
        const bool branch_taken_0x3b18a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b18a0) {
            ctx->pc = 0x3B18B8u;
            goto label_3b18b8;
        }
    }
    ctx->pc = 0x3B18A8u;
label_3b18a8:
    // 0x3b18a8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3b18a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3b18ac:
    // 0x3b18ac: 0x7e430040  sq          $v1, 0x40($s2)
    ctx->pc = 0x3b18acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 3));
label_3b18b0:
    // 0x3b18b0: 0x7a230550  lq          $v1, 0x550($s1)
    ctx->pc = 0x3b18b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
label_3b18b4:
    // 0x3b18b4: 0x7e430070  sq          $v1, 0x70($s2)
    ctx->pc = 0x3b18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), GPR_VEC(ctx, 3));
label_3b18b8:
    // 0x3b18b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_3b18bc:
    if (ctx->pc == 0x3B18BCu) {
        ctx->pc = 0x3B18C0u;
        goto label_3b18c0;
    }
    ctx->pc = 0x3B18B8u;
    {
        const bool branch_taken_0x3b18b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b18b8) {
            ctx->pc = 0x3B18D0u;
            goto label_3b18d0;
        }
    }
    ctx->pc = 0x3B18C0u;
label_3b18c0:
    // 0x3b18c0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3b18c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3b18c4:
    // 0x3b18c4: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x3b18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
label_3b18c8:
    // 0x3b18c8: 0x7a230550  lq          $v1, 0x550($s1)
    ctx->pc = 0x3b18c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
label_3b18cc:
    // 0x3b18cc: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x3b18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
label_3b18d0:
    // 0x3b18d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b18d4:
    if (ctx->pc == 0x3B18D4u) {
        ctx->pc = 0x3B18D8u;
        goto label_3b18d8;
    }
    ctx->pc = 0x3B18D0u;
    {
        const bool branch_taken_0x3b18d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b18d0) {
            ctx->pc = 0x3B18E8u;
            goto label_3b18e8;
        }
    }
    ctx->pc = 0x3B18D8u;
label_3b18d8:
    // 0x3b18d8: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3b18d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3b18dc:
    // 0x3b18dc: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x3b18dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_3b18e0:
    // 0x3b18e0: 0x7a230550  lq          $v1, 0x550($s1)
    ctx->pc = 0x3b18e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
label_3b18e4:
    // 0x3b18e4: 0x7c430070  sq          $v1, 0x70($v0)
    ctx->pc = 0x3b18e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 3));
label_3b18e8:
    // 0x3b18e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b18e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b18ec:
    // 0x3b18ec: 0x78285c20  lq          $t0, 0x5C20($at)
    ctx->pc = 0x3b18ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_3b18f0:
    // 0x3b18f0: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x3b18f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3b18f4:
    // 0x3b18f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b18f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b18f8:
    // 0x3b18f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3b18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3b18fc:
    // 0x3b18fc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b18fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b1900:
    // 0x3b1900: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x3b1900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
label_3b1904:
    // 0x3b1904: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b1904u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3b1908:
    // 0x3b1908: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b1908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b190c:
    // 0x3b190c: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3b190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3b1910:
    // 0x3b1910: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b1910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3b1914:
    // 0x3b1914: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b1914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3b1918:
    // 0x3b1918: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3b1918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3b191c:
    // 0x3b191c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b191cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3b1920:
    // 0x3b1920: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3b1920u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_3b1924:
    // 0x3b1924: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b1924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3b1928:
    // 0x3b1928: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x3b1928u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_3b192c:
    // 0x3b192c: 0x92260580  lbu         $a2, 0x580($s1)
    ctx->pc = 0x3b192cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1408)));
label_3b1930:
    // 0x3b1930: 0xc62c057c  lwc1        $f12, 0x57C($s1)
    ctx->pc = 0x3b1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b1934:
    // 0x3b1934: 0xc0c0960  jal         func_302580
label_3b1938:
    if (ctx->pc == 0x3B1938u) {
        ctx->pc = 0x3B1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1934u;
        // 0x3b1938: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B193Cu;
        goto label_3b193c;
    }
    ctx->pc = 0x3B1934u;
    SET_GPR_U32(ctx, 31, 0x3B193Cu);
    ctx->pc = 0x3B1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1934u;
    // 0x3b1938: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302580u, 0x3B1934u, 0x3B193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B193Cu;
label_3b193c:
    // 0x3b193c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3b1940:
    if (ctx->pc == 0x3B1940u) {
        ctx->pc = 0x3B1944u;
        goto label_3b1944;
    }
    ctx->pc = 0x3B193Cu;
    {
        const bool branch_taken_0x3b193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b193c) {
            ctx->pc = 0x3B19F8u;
            goto label_3b19f8;
        }
    }
    ctx->pc = 0x3B1944u;
label_3b1944:
    // 0x3b1944: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3b1944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3b1948:
    // 0x3b1948: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b1948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3b194c:
    // 0x3b194c: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3b194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_3b1950:
    // 0x3b1950: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x3b1950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b1954:
    // 0x3b1954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b1958:
    // 0x3b1958: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3b1958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3b195c:
    // 0x3b195c: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3b195cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3b1960:
    // 0x3b1960: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x3b1960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
label_3b1964:
    // 0x3b1964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b1964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b1968:
    // 0x3b1968: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b196c:
    if (ctx->pc == 0x3B196Cu) {
        ctx->pc = 0x3B196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1968u;
        // 0x3b196c: 0xa31018  mult        $v0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1970u;
        goto label_3b1970;
    }
    ctx->pc = 0x3B1968u;
    {
        const bool branch_taken_0x3b1968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1968u;
        // 0x3b196c: 0xa31018  mult        $v0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1968) {
            ctx->pc = 0x3B19B0u;
            goto label_3b19b0;
        }
    }
    ctx->pc = 0x3B1970u;
label_3b1970:
    // 0x3b1970: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b1970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b1974:
    // 0x3b1974: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3b1974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b1978:
    // 0x3b1978: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b1978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b197c:
    // 0x3b197c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b1980:
    // 0x3b1980: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3b1980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3b1984:
    // 0x3b1984: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3b1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3b1988:
    // 0x3b1988: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b1988u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b198c:
    // 0x3b198c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3b198cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3b1990:
    // 0x3b1990: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3b1990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_3b1994:
    // 0x3b1994: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3b1994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
label_3b1998:
    // 0x3b1998: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3b1998u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_3b199c:
    // 0x3b199c: 0xc0aa590  jal         func_2A9640
label_3b19a0:
    if (ctx->pc == 0x3B19A0u) {
        ctx->pc = 0x3B19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B199Cu;
        // 0x3b19a0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19A4u;
        goto label_3b19a4;
    }
    ctx->pc = 0x3B199Cu;
    SET_GPR_U32(ctx, 31, 0x3B19A4u);
    ctx->pc = 0x3B19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B199Cu;
    // 0x3b19a0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3B199Cu, 0x3B19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19A4u;
label_3b19a4:
    // 0x3b19a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3b19a8:
    if (ctx->pc == 0x3B19A8u) {
        ctx->pc = 0x3B19ACu;
        goto label_3b19ac;
    }
    ctx->pc = 0x3B19A4u;
    {
        const bool branch_taken_0x3b19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b19a4) {
            ctx->pc = 0x3B19E8u;
            goto label_3b19e8;
        }
    }
    ctx->pc = 0x3B19ACu;
label_3b19ac:
    // 0x3b19ac: 0x0  nop
    ctx->pc = 0x3b19acu;
    // NOP
label_3b19b0:
    // 0x3b19b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b19b4:
    // 0x3b19b4: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x3b19b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3b19b8:
    // 0x3b19b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b19b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b19bc:
    // 0x3b19bc: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b19bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b19c0:
    // 0x3b19c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3b19c4:
    // 0x3b19c4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3b19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_3b19c8:
    // 0x3b19c8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3b19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_3b19cc:
    // 0x3b19cc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b19ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_3b19d0:
    // 0x3b19d0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3b19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_3b19d4:
    // 0x3b19d4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3b19d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
label_3b19d8:
    // 0x3b19d8: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3b19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
label_3b19dc:
    // 0x3b19dc: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3b19dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_3b19e0:
    // 0x3b19e0: 0xc0aa590  jal         func_2A9640
label_3b19e4:
    if (ctx->pc == 0x3B19E4u) {
        ctx->pc = 0x3B19E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19E0u;
        // 0x3b19e4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19E8u;
        goto label_3b19e8;
    }
    ctx->pc = 0x3B19E0u;
    SET_GPR_U32(ctx, 31, 0x3B19E8u);
    ctx->pc = 0x3B19E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19E0u;
    // 0x3b19e4: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3B19E0u, 0x3B19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19E8u;
label_3b19e8:
    // 0x3b19e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b19e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b19ec:
    // 0x3b19ec: 0xc0c0830  jal         func_3020C0
label_3b19f0:
    if (ctx->pc == 0x3B19F0u) {
        ctx->pc = 0x3B19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B19ECu;
        // 0x3b19f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B19F4u;
        goto label_3b19f4;
    }
    ctx->pc = 0x3B19ECu;
    SET_GPR_U32(ctx, 31, 0x3B19F4u);
    ctx->pc = 0x3B19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B19ECu;
    // 0x3b19f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B19ECu, 0x3B19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B19F4u;
label_3b19f4:
    // 0x3b19f4: 0x0  nop
    ctx->pc = 0x3b19f4u;
    // NOP
label_3b19f8:
    // 0x3b19f8: 0x92270578  lbu         $a3, 0x578($s1)
    ctx->pc = 0x3b19f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1400)));
label_3b19fc:
    // 0x3b19fc: 0xc62e0574  lwc1        $f14, 0x574($s1)
    ctx->pc = 0x3b19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3b1a00:
    // 0x3b1a00: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3b1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3b1a04:
    // 0x3b1a04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b1a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b1a08:
    // 0x3b1a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a0c:
    // 0x3b1a0c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3b1a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3b1a10:
    // 0x3b1a10: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x3b1a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_3b1a14:
    // 0x3b1a14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3b1a14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3b1a18:
    // 0x3b1a18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b1a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a1c:
    // 0x3b1a1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b1a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1a20:
    // 0x3b1a20: 0xc0c0928  jal         func_3024A0
label_3b1a24:
    if (ctx->pc == 0x3B1A24u) {
        ctx->pc = 0x3B1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A20u;
        // 0x3b1a24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A28u;
        goto label_3b1a28;
    }
    ctx->pc = 0x3B1A20u;
    SET_GPR_U32(ctx, 31, 0x3B1A28u);
    ctx->pc = 0x3B1A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A20u;
    // 0x3b1a24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x3B1A20u, 0x3B1A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A28u;
label_3b1a28:
    // 0x3b1a28: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b1a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3b1a2c:
    // 0x3b1a2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3b1a30:
    if (ctx->pc == 0x3B1A30u) {
        ctx->pc = 0x3B1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A2Cu;
        // 0x3b1a30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A34u;
        goto label_3b1a34;
    }
    ctx->pc = 0x3B1A2Cu;
    {
        const bool branch_taken_0x3b1a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A2Cu;
        // 0x3b1a30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a2c) {
            ctx->pc = 0x3B1A40u;
            goto label_3b1a40;
        }
    }
    ctx->pc = 0x3B1A34u;
label_3b1a34:
    // 0x3b1a34: 0x10000022  b           . + 4 + (0x22 << 2)
label_3b1a38:
    if (ctx->pc == 0x3B1A38u) {
        ctx->pc = 0x3B1A3Cu;
        goto label_3b1a3c;
    }
    ctx->pc = 0x3B1A34u;
    {
        const bool branch_taken_0x3b1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1a34) {
            ctx->pc = 0x3B1AC0u;
            goto label_3b1ac0;
        }
    }
    ctx->pc = 0x3B1A3Cu;
label_3b1a3c:
    // 0x3b1a3c: 0x0  nop
    ctx->pc = 0x3b1a3cu;
    // NOP
label_3b1a40:
    // 0x3b1a40: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b1a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b1a44:
    // 0x3b1a44: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_3b1a48:
    // 0x3b1a48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b1a4c:
    // 0x3b1a4c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b1a50:
    // 0x3b1a50: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b1a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_3b1a54:
    // 0x3b1a54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_3b1a58:
    if (ctx->pc == 0x3B1A58u) {
        ctx->pc = 0x3B1A5Cu;
        goto label_3b1a5c;
    }
    ctx->pc = 0x3B1A54u;
    {
        const bool branch_taken_0x3b1a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b1a54) {
            ctx->pc = 0x3B1A90u;
            goto label_3b1a90;
        }
    }
    ctx->pc = 0x3B1A5Cu;
label_3b1a5c:
    // 0x3b1a5c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b1a5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b1a60:
    // 0x3b1a60: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b1a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_3b1a64:
    // 0x3b1a64: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_3b1a68:
    if (ctx->pc == 0x3B1A68u) {
        ctx->pc = 0x3B1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A64u;
        // 0x3b1a68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A6Cu;
        goto label_3b1a6c;
    }
    ctx->pc = 0x3B1A64u;
    {
        const bool branch_taken_0x3b1a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A64u;
        // 0x3b1a68: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a64) {
            ctx->pc = 0x3B1AB8u;
            goto label_3b1ab8;
        }
    }
    ctx->pc = 0x3B1A6Cu;
label_3b1a6c:
    // 0x3b1a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1a70:
    // 0x3b1a70: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b1a70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b1a74:
    // 0x3b1a74: 0x0  nop
    ctx->pc = 0x3b1a74u;
    // NOP
label_3b1a78:
    // 0x3b1a78: 0x0  nop
    ctx->pc = 0x3b1a78u;
    // NOP
label_3b1a7c:
    // 0x3b1a7c: 0x2010  mfhi        $a0
    ctx->pc = 0x3b1a7cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3b1a80:
    // 0x3b1a80: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1a80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b1a84:
    // 0x3b1a84: 0x1000000c  b           . + 4 + (0xC << 2)
label_3b1a88:
    if (ctx->pc == 0x3B1A88u) {
        ctx->pc = 0x3B1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A84u;
        // 0x3b1a88: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1A8Cu;
        goto label_3b1a8c;
    }
    ctx->pc = 0x3B1A84u;
    {
        const bool branch_taken_0x3b1a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A84u;
        // 0x3b1a88: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a84) {
            ctx->pc = 0x3B1AB8u;
            goto label_3b1ab8;
        }
    }
    ctx->pc = 0x3B1A8Cu;
label_3b1a8c:
    // 0x3b1a8c: 0x0  nop
    ctx->pc = 0x3b1a8cu;
    // NOP
label_3b1a90:
    // 0x3b1a90: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b1a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_3b1a94:
    // 0x3b1a94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b1a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b1a98:
    // 0x3b1a98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3b1a9c:
    if (ctx->pc == 0x3B1A9Cu) {
        ctx->pc = 0x3B1AA0u;
        goto label_3b1aa0;
    }
    ctx->pc = 0x3B1A98u;
    {
        const bool branch_taken_0x3b1a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1a98) {
            ctx->pc = 0x3B1AB8u;
            goto label_3b1ab8;
        }
    }
    ctx->pc = 0x3B1AA0u;
label_3b1aa0:
    // 0x3b1aa0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b1aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3b1aa4:
    // 0x3b1aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1aa8:
    // 0x3b1aa8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b1aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3b1aac:
    // 0x3b1aac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b1ab0:
    if (ctx->pc == 0x3B1AB0u) {
        ctx->pc = 0x3B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AACu;
        // 0x3b1ab0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AB4u;
        goto label_3b1ab4;
    }
    ctx->pc = 0x3B1AACu;
    {
        const bool branch_taken_0x3b1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AACu;
        // 0x3b1ab0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1aac) {
            ctx->pc = 0x3B1AC0u;
            goto label_3b1ac0;
        }
    }
    ctx->pc = 0x3B1AB4u;
label_3b1ab4:
    // 0x3b1ab4: 0x0  nop
    ctx->pc = 0x3b1ab4u;
    // NOP
label_3b1ab8:
    // 0x3b1ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1abc:
    // 0x3b1abc: 0x0  nop
    ctx->pc = 0x3b1abcu;
    // NOP
label_3b1ac0:
    // 0x3b1ac0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3b1ac4:
    if (ctx->pc == 0x3B1AC4u) {
        ctx->pc = 0x3B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AC0u;
        // 0x3b1ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AC8u;
        goto label_3b1ac8;
    }
    ctx->pc = 0x3B1AC0u;
    {
        const bool branch_taken_0x3b1ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AC0u;
        // 0x3b1ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ac0) {
            ctx->pc = 0x3B1AD0u;
            goto label_3b1ad0;
        }
    }
    ctx->pc = 0x3B1AC8u;
label_3b1ac8:
    // 0x3b1ac8: 0xc0c0830  jal         func_3020C0
label_3b1acc:
    if (ctx->pc == 0x3B1ACCu) {
        ctx->pc = 0x3B1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AC8u;
        // 0x3b1acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AD0u;
        goto label_3b1ad0;
    }
    ctx->pc = 0x3B1AC8u;
    SET_GPR_U32(ctx, 31, 0x3B1AD0u);
    ctx->pc = 0x3B1ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1AC8u;
    // 0x3b1acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B1AC8u, 0x3B1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1AD0u;
label_3b1ad0:
    // 0x3b1ad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b1ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1ad4:
    // 0x3b1ad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b1ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1ad8:
    // 0x3b1ad8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b1ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1adc:
    // 0x3b1adc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b1adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1ae0:
    // 0x3b1ae0: 0x3e00008  jr          $ra
label_3b1ae4:
    if (ctx->pc == 0x3B1AE4u) {
        ctx->pc = 0x3B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE0u;
        // 0x3b1ae4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1AE8u;
        goto label_fallthrough_0x3b1ae0;
    }
    ctx->pc = 0x3B1AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AE0u;
        // 0x3b1ae4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1ae0:
    ctx->pc = 0x3B1AE8u;
}
