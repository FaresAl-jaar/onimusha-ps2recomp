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

// Function: sub_001F1290
// Address: 0x1f1290 - 0x1f1cac
void sub_001F1290_0x1f1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1290_0x1f1290");
#endif

    switch (ctx->pc) {
        case 0x1f1290u: goto label_1f1290;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f1298u: goto label_1f1298;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a0u: goto label_1f12a0;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12a8u: goto label_1f12a8;
        case 0x1f12acu: goto label_1f12ac;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12b4u: goto label_1f12b4;
        case 0x1f12b8u: goto label_1f12b8;
        case 0x1f12bcu: goto label_1f12bc;
        case 0x1f12c0u: goto label_1f12c0;
        case 0x1f12c4u: goto label_1f12c4;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12d8u: goto label_1f12d8;
        case 0x1f12dcu: goto label_1f12dc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f12f0u: goto label_1f12f0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f12f8u: goto label_1f12f8;
        case 0x1f12fcu: goto label_1f12fc;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f1308u: goto label_1f1308;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1314u: goto label_1f1314;
        case 0x1f1318u: goto label_1f1318;
        case 0x1f131cu: goto label_1f131c;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1324u: goto label_1f1324;
        case 0x1f1328u: goto label_1f1328;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f1330u: goto label_1f1330;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1338u: goto label_1f1338;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1340u: goto label_1f1340;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f134cu: goto label_1f134c;
        case 0x1f1350u: goto label_1f1350;
        case 0x1f1354u: goto label_1f1354;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f135cu: goto label_1f135c;
        case 0x1f1360u: goto label_1f1360;
        case 0x1f1364u: goto label_1f1364;
        case 0x1f1368u: goto label_1f1368;
        case 0x1f136cu: goto label_1f136c;
        case 0x1f1370u: goto label_1f1370;
        case 0x1f1374u: goto label_1f1374;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f137cu: goto label_1f137c;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f1384u: goto label_1f1384;
        case 0x1f1388u: goto label_1f1388;
        case 0x1f138cu: goto label_1f138c;
        case 0x1f1390u: goto label_1f1390;
        case 0x1f1394u: goto label_1f1394;
        case 0x1f1398u: goto label_1f1398;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13a4u: goto label_1f13a4;
        case 0x1f13a8u: goto label_1f13a8;
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b0u: goto label_1f13b0;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13b8u: goto label_1f13b8;
        case 0x1f13bcu: goto label_1f13bc;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f13c4u: goto label_1f13c4;
        case 0x1f13c8u: goto label_1f13c8;
        case 0x1f13ccu: goto label_1f13cc;
        case 0x1f13d0u: goto label_1f13d0;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f13d8u: goto label_1f13d8;
        case 0x1f13dcu: goto label_1f13dc;
        case 0x1f13e0u: goto label_1f13e0;
        case 0x1f13e4u: goto label_1f13e4;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f13ecu: goto label_1f13ec;
        case 0x1f13f0u: goto label_1f13f0;
        case 0x1f13f4u: goto label_1f13f4;
        case 0x1f13f8u: goto label_1f13f8;
        case 0x1f13fcu: goto label_1f13fc;
        case 0x1f1400u: goto label_1f1400;
        case 0x1f1404u: goto label_1f1404;
        case 0x1f1408u: goto label_1f1408;
        case 0x1f140cu: goto label_1f140c;
        case 0x1f1410u: goto label_1f1410;
        case 0x1f1414u: goto label_1f1414;
        case 0x1f1418u: goto label_1f1418;
        case 0x1f141cu: goto label_1f141c;
        case 0x1f1420u: goto label_1f1420;
        case 0x1f1424u: goto label_1f1424;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f142cu: goto label_1f142c;
        case 0x1f1430u: goto label_1f1430;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1438u: goto label_1f1438;
        case 0x1f143cu: goto label_1f143c;
        case 0x1f1440u: goto label_1f1440;
        case 0x1f1444u: goto label_1f1444;
        case 0x1f1448u: goto label_1f1448;
        case 0x1f144cu: goto label_1f144c;
        case 0x1f1450u: goto label_1f1450;
        case 0x1f1454u: goto label_1f1454;
        case 0x1f1458u: goto label_1f1458;
        case 0x1f145cu: goto label_1f145c;
        case 0x1f1460u: goto label_1f1460;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1468u: goto label_1f1468;
        case 0x1f146cu: goto label_1f146c;
        case 0x1f1470u: goto label_1f1470;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f1478u: goto label_1f1478;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1480u: goto label_1f1480;
        case 0x1f1484u: goto label_1f1484;
        case 0x1f1488u: goto label_1f1488;
        case 0x1f148cu: goto label_1f148c;
        case 0x1f1490u: goto label_1f1490;
        case 0x1f1494u: goto label_1f1494;
        case 0x1f1498u: goto label_1f1498;
        case 0x1f149cu: goto label_1f149c;
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f14a8u: goto label_1f14a8;
        case 0x1f14acu: goto label_1f14ac;
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14b4u: goto label_1f14b4;
        case 0x1f14b8u: goto label_1f14b8;
        case 0x1f14bcu: goto label_1f14bc;
        case 0x1f14c0u: goto label_1f14c0;
        case 0x1f14c4u: goto label_1f14c4;
        case 0x1f14c8u: goto label_1f14c8;
        case 0x1f14ccu: goto label_1f14cc;
        case 0x1f14d0u: goto label_1f14d0;
        case 0x1f14d4u: goto label_1f14d4;
        case 0x1f14d8u: goto label_1f14d8;
        case 0x1f14dcu: goto label_1f14dc;
        case 0x1f14e0u: goto label_1f14e0;
        case 0x1f14e4u: goto label_1f14e4;
        case 0x1f14e8u: goto label_1f14e8;
        case 0x1f14ecu: goto label_1f14ec;
        case 0x1f14f0u: goto label_1f14f0;
        case 0x1f14f4u: goto label_1f14f4;
        case 0x1f14f8u: goto label_1f14f8;
        case 0x1f14fcu: goto label_1f14fc;
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1504u: goto label_1f1504;
        case 0x1f1508u: goto label_1f1508;
        case 0x1f150cu: goto label_1f150c;
        case 0x1f1510u: goto label_1f1510;
        case 0x1f1514u: goto label_1f1514;
        case 0x1f1518u: goto label_1f1518;
        case 0x1f151cu: goto label_1f151c;
        case 0x1f1520u: goto label_1f1520;
        case 0x1f1524u: goto label_1f1524;
        case 0x1f1528u: goto label_1f1528;
        case 0x1f152cu: goto label_1f152c;
        case 0x1f1530u: goto label_1f1530;
        case 0x1f1534u: goto label_1f1534;
        case 0x1f1538u: goto label_1f1538;
        case 0x1f153cu: goto label_1f153c;
        case 0x1f1540u: goto label_1f1540;
        case 0x1f1544u: goto label_1f1544;
        case 0x1f1548u: goto label_1f1548;
        case 0x1f154cu: goto label_1f154c;
        case 0x1f1550u: goto label_1f1550;
        case 0x1f1554u: goto label_1f1554;
        case 0x1f1558u: goto label_1f1558;
        case 0x1f155cu: goto label_1f155c;
        case 0x1f1560u: goto label_1f1560;
        case 0x1f1564u: goto label_1f1564;
        case 0x1f1568u: goto label_1f1568;
        case 0x1f156cu: goto label_1f156c;
        case 0x1f1570u: goto label_1f1570;
        case 0x1f1574u: goto label_1f1574;
        case 0x1f1578u: goto label_1f1578;
        case 0x1f157cu: goto label_1f157c;
        case 0x1f1580u: goto label_1f1580;
        case 0x1f1584u: goto label_1f1584;
        case 0x1f1588u: goto label_1f1588;
        case 0x1f158cu: goto label_1f158c;
        case 0x1f1590u: goto label_1f1590;
        case 0x1f1594u: goto label_1f1594;
        case 0x1f1598u: goto label_1f1598;
        case 0x1f159cu: goto label_1f159c;
        case 0x1f15a0u: goto label_1f15a0;
        case 0x1f15a4u: goto label_1f15a4;
        case 0x1f15a8u: goto label_1f15a8;
        case 0x1f15acu: goto label_1f15ac;
        case 0x1f15b0u: goto label_1f15b0;
        case 0x1f15b4u: goto label_1f15b4;
        case 0x1f15b8u: goto label_1f15b8;
        case 0x1f15bcu: goto label_1f15bc;
        case 0x1f15c0u: goto label_1f15c0;
        case 0x1f15c4u: goto label_1f15c4;
        case 0x1f15c8u: goto label_1f15c8;
        case 0x1f15ccu: goto label_1f15cc;
        case 0x1f15d0u: goto label_1f15d0;
        case 0x1f15d4u: goto label_1f15d4;
        case 0x1f15d8u: goto label_1f15d8;
        case 0x1f15dcu: goto label_1f15dc;
        case 0x1f15e0u: goto label_1f15e0;
        case 0x1f15e4u: goto label_1f15e4;
        case 0x1f15e8u: goto label_1f15e8;
        case 0x1f15ecu: goto label_1f15ec;
        case 0x1f15f0u: goto label_1f15f0;
        case 0x1f15f4u: goto label_1f15f4;
        case 0x1f15f8u: goto label_1f15f8;
        case 0x1f15fcu: goto label_1f15fc;
        case 0x1f1600u: goto label_1f1600;
        case 0x1f1604u: goto label_1f1604;
        case 0x1f1608u: goto label_1f1608;
        case 0x1f160cu: goto label_1f160c;
        case 0x1f1610u: goto label_1f1610;
        case 0x1f1614u: goto label_1f1614;
        case 0x1f1618u: goto label_1f1618;
        case 0x1f161cu: goto label_1f161c;
        case 0x1f1620u: goto label_1f1620;
        case 0x1f1624u: goto label_1f1624;
        case 0x1f1628u: goto label_1f1628;
        case 0x1f162cu: goto label_1f162c;
        case 0x1f1630u: goto label_1f1630;
        case 0x1f1634u: goto label_1f1634;
        case 0x1f1638u: goto label_1f1638;
        case 0x1f163cu: goto label_1f163c;
        case 0x1f1640u: goto label_1f1640;
        case 0x1f1644u: goto label_1f1644;
        case 0x1f1648u: goto label_1f1648;
        case 0x1f164cu: goto label_1f164c;
        case 0x1f1650u: goto label_1f1650;
        case 0x1f1654u: goto label_1f1654;
        case 0x1f1658u: goto label_1f1658;
        case 0x1f165cu: goto label_1f165c;
        case 0x1f1660u: goto label_1f1660;
        case 0x1f1664u: goto label_1f1664;
        case 0x1f1668u: goto label_1f1668;
        case 0x1f166cu: goto label_1f166c;
        case 0x1f1670u: goto label_1f1670;
        case 0x1f1674u: goto label_1f1674;
        case 0x1f1678u: goto label_1f1678;
        case 0x1f167cu: goto label_1f167c;
        case 0x1f1680u: goto label_1f1680;
        case 0x1f1684u: goto label_1f1684;
        case 0x1f1688u: goto label_1f1688;
        case 0x1f168cu: goto label_1f168c;
        case 0x1f1690u: goto label_1f1690;
        case 0x1f1694u: goto label_1f1694;
        case 0x1f1698u: goto label_1f1698;
        case 0x1f169cu: goto label_1f169c;
        case 0x1f16a0u: goto label_1f16a0;
        case 0x1f16a4u: goto label_1f16a4;
        case 0x1f16a8u: goto label_1f16a8;
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16b0u: goto label_1f16b0;
        case 0x1f16b4u: goto label_1f16b4;
        case 0x1f16b8u: goto label_1f16b8;
        case 0x1f16bcu: goto label_1f16bc;
        case 0x1f16c0u: goto label_1f16c0;
        case 0x1f16c4u: goto label_1f16c4;
        case 0x1f16c8u: goto label_1f16c8;
        case 0x1f16ccu: goto label_1f16cc;
        case 0x1f16d0u: goto label_1f16d0;
        case 0x1f16d4u: goto label_1f16d4;
        case 0x1f16d8u: goto label_1f16d8;
        case 0x1f16dcu: goto label_1f16dc;
        case 0x1f16e0u: goto label_1f16e0;
        case 0x1f16e4u: goto label_1f16e4;
        case 0x1f16e8u: goto label_1f16e8;
        case 0x1f16ecu: goto label_1f16ec;
        case 0x1f16f0u: goto label_1f16f0;
        case 0x1f16f4u: goto label_1f16f4;
        case 0x1f16f8u: goto label_1f16f8;
        case 0x1f16fcu: goto label_1f16fc;
        case 0x1f1700u: goto label_1f1700;
        case 0x1f1704u: goto label_1f1704;
        case 0x1f1708u: goto label_1f1708;
        case 0x1f170cu: goto label_1f170c;
        case 0x1f1710u: goto label_1f1710;
        case 0x1f1714u: goto label_1f1714;
        case 0x1f1718u: goto label_1f1718;
        case 0x1f171cu: goto label_1f171c;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1724u: goto label_1f1724;
        case 0x1f1728u: goto label_1f1728;
        case 0x1f172cu: goto label_1f172c;
        case 0x1f1730u: goto label_1f1730;
        case 0x1f1734u: goto label_1f1734;
        case 0x1f1738u: goto label_1f1738;
        case 0x1f173cu: goto label_1f173c;
        case 0x1f1740u: goto label_1f1740;
        case 0x1f1744u: goto label_1f1744;
        case 0x1f1748u: goto label_1f1748;
        case 0x1f174cu: goto label_1f174c;
        case 0x1f1750u: goto label_1f1750;
        case 0x1f1754u: goto label_1f1754;
        case 0x1f1758u: goto label_1f1758;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f1760u: goto label_1f1760;
        case 0x1f1764u: goto label_1f1764;
        case 0x1f1768u: goto label_1f1768;
        case 0x1f176cu: goto label_1f176c;
        case 0x1f1770u: goto label_1f1770;
        case 0x1f1774u: goto label_1f1774;
        case 0x1f1778u: goto label_1f1778;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f1780u: goto label_1f1780;
        case 0x1f1784u: goto label_1f1784;
        case 0x1f1788u: goto label_1f1788;
        case 0x1f178cu: goto label_1f178c;
        case 0x1f1790u: goto label_1f1790;
        case 0x1f1794u: goto label_1f1794;
        case 0x1f1798u: goto label_1f1798;
        case 0x1f179cu: goto label_1f179c;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f17a4u: goto label_1f17a4;
        case 0x1f17a8u: goto label_1f17a8;
        case 0x1f17acu: goto label_1f17ac;
        case 0x1f17b0u: goto label_1f17b0;
        case 0x1f17b4u: goto label_1f17b4;
        case 0x1f17b8u: goto label_1f17b8;
        case 0x1f17bcu: goto label_1f17bc;
        case 0x1f17c0u: goto label_1f17c0;
        case 0x1f17c4u: goto label_1f17c4;
        case 0x1f17c8u: goto label_1f17c8;
        case 0x1f17ccu: goto label_1f17cc;
        case 0x1f17d0u: goto label_1f17d0;
        case 0x1f17d4u: goto label_1f17d4;
        case 0x1f17d8u: goto label_1f17d8;
        case 0x1f17dcu: goto label_1f17dc;
        case 0x1f17e0u: goto label_1f17e0;
        case 0x1f17e4u: goto label_1f17e4;
        case 0x1f17e8u: goto label_1f17e8;
        case 0x1f17ecu: goto label_1f17ec;
        case 0x1f17f0u: goto label_1f17f0;
        case 0x1f17f4u: goto label_1f17f4;
        case 0x1f17f8u: goto label_1f17f8;
        case 0x1f17fcu: goto label_1f17fc;
        case 0x1f1800u: goto label_1f1800;
        case 0x1f1804u: goto label_1f1804;
        case 0x1f1808u: goto label_1f1808;
        case 0x1f180cu: goto label_1f180c;
        case 0x1f1810u: goto label_1f1810;
        case 0x1f1814u: goto label_1f1814;
        case 0x1f1818u: goto label_1f1818;
        case 0x1f181cu: goto label_1f181c;
        case 0x1f1820u: goto label_1f1820;
        case 0x1f1824u: goto label_1f1824;
        case 0x1f1828u: goto label_1f1828;
        case 0x1f182cu: goto label_1f182c;
        case 0x1f1830u: goto label_1f1830;
        case 0x1f1834u: goto label_1f1834;
        case 0x1f1838u: goto label_1f1838;
        case 0x1f183cu: goto label_1f183c;
        case 0x1f1840u: goto label_1f1840;
        case 0x1f1844u: goto label_1f1844;
        case 0x1f1848u: goto label_1f1848;
        case 0x1f184cu: goto label_1f184c;
        case 0x1f1850u: goto label_1f1850;
        case 0x1f1854u: goto label_1f1854;
        case 0x1f1858u: goto label_1f1858;
        case 0x1f185cu: goto label_1f185c;
        case 0x1f1860u: goto label_1f1860;
        case 0x1f1864u: goto label_1f1864;
        case 0x1f1868u: goto label_1f1868;
        case 0x1f186cu: goto label_1f186c;
        case 0x1f1870u: goto label_1f1870;
        case 0x1f1874u: goto label_1f1874;
        case 0x1f1878u: goto label_1f1878;
        case 0x1f187cu: goto label_1f187c;
        case 0x1f1880u: goto label_1f1880;
        case 0x1f1884u: goto label_1f1884;
        case 0x1f1888u: goto label_1f1888;
        case 0x1f188cu: goto label_1f188c;
        case 0x1f1890u: goto label_1f1890;
        case 0x1f1894u: goto label_1f1894;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f189cu: goto label_1f189c;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18a4u: goto label_1f18a4;
        case 0x1f18a8u: goto label_1f18a8;
        case 0x1f18acu: goto label_1f18ac;
        case 0x1f18b0u: goto label_1f18b0;
        case 0x1f18b4u: goto label_1f18b4;
        case 0x1f18b8u: goto label_1f18b8;
        case 0x1f18bcu: goto label_1f18bc;
        case 0x1f18c0u: goto label_1f18c0;
        case 0x1f18c4u: goto label_1f18c4;
        case 0x1f18c8u: goto label_1f18c8;
        case 0x1f18ccu: goto label_1f18cc;
        case 0x1f18d0u: goto label_1f18d0;
        case 0x1f18d4u: goto label_1f18d4;
        case 0x1f18d8u: goto label_1f18d8;
        case 0x1f18dcu: goto label_1f18dc;
        case 0x1f18e0u: goto label_1f18e0;
        case 0x1f18e4u: goto label_1f18e4;
        case 0x1f18e8u: goto label_1f18e8;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f18f0u: goto label_1f18f0;
        case 0x1f18f4u: goto label_1f18f4;
        case 0x1f18f8u: goto label_1f18f8;
        case 0x1f18fcu: goto label_1f18fc;
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1904u: goto label_1f1904;
        case 0x1f1908u: goto label_1f1908;
        case 0x1f190cu: goto label_1f190c;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f1914u: goto label_1f1914;
        case 0x1f1918u: goto label_1f1918;
        case 0x1f191cu: goto label_1f191c;
        case 0x1f1920u: goto label_1f1920;
        case 0x1f1924u: goto label_1f1924;
        case 0x1f1928u: goto label_1f1928;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f1930u: goto label_1f1930;
        case 0x1f1934u: goto label_1f1934;
        case 0x1f1938u: goto label_1f1938;
        case 0x1f193cu: goto label_1f193c;
        case 0x1f1940u: goto label_1f1940;
        case 0x1f1944u: goto label_1f1944;
        case 0x1f1948u: goto label_1f1948;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1950u: goto label_1f1950;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f195cu: goto label_1f195c;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1964u: goto label_1f1964;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f196cu: goto label_1f196c;
        case 0x1f1970u: goto label_1f1970;
        case 0x1f1974u: goto label_1f1974;
        case 0x1f1978u: goto label_1f1978;
        case 0x1f197cu: goto label_1f197c;
        case 0x1f1980u: goto label_1f1980;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f1988u: goto label_1f1988;
        case 0x1f198cu: goto label_1f198c;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f1994u: goto label_1f1994;
        case 0x1f1998u: goto label_1f1998;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a0u: goto label_1f19a0;
        case 0x1f19a4u: goto label_1f19a4;
        case 0x1f19a8u: goto label_1f19a8;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19b0u: goto label_1f19b0;
        case 0x1f19b4u: goto label_1f19b4;
        case 0x1f19b8u: goto label_1f19b8;
        case 0x1f19bcu: goto label_1f19bc;
        case 0x1f19c0u: goto label_1f19c0;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19c8u: goto label_1f19c8;
        case 0x1f19ccu: goto label_1f19cc;
        case 0x1f19d0u: goto label_1f19d0;
        case 0x1f19d4u: goto label_1f19d4;
        case 0x1f19d8u: goto label_1f19d8;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19e0u: goto label_1f19e0;
        case 0x1f19e4u: goto label_1f19e4;
        case 0x1f19e8u: goto label_1f19e8;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f19f0u: goto label_1f19f0;
        case 0x1f19f4u: goto label_1f19f4;
        case 0x1f19f8u: goto label_1f19f8;
        case 0x1f19fcu: goto label_1f19fc;
        case 0x1f1a00u: goto label_1f1a00;
        case 0x1f1a04u: goto label_1f1a04;
        case 0x1f1a08u: goto label_1f1a08;
        case 0x1f1a0cu: goto label_1f1a0c;
        case 0x1f1a10u: goto label_1f1a10;
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a18u: goto label_1f1a18;
        case 0x1f1a1cu: goto label_1f1a1c;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a24u: goto label_1f1a24;
        case 0x1f1a28u: goto label_1f1a28;
        case 0x1f1a2cu: goto label_1f1a2c;
        case 0x1f1a30u: goto label_1f1a30;
        case 0x1f1a34u: goto label_1f1a34;
        case 0x1f1a38u: goto label_1f1a38;
        case 0x1f1a3cu: goto label_1f1a3c;
        case 0x1f1a40u: goto label_1f1a40;
        case 0x1f1a44u: goto label_1f1a44;
        case 0x1f1a48u: goto label_1f1a48;
        case 0x1f1a4cu: goto label_1f1a4c;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a54u: goto label_1f1a54;
        case 0x1f1a58u: goto label_1f1a58;
        case 0x1f1a5cu: goto label_1f1a5c;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a64u: goto label_1f1a64;
        case 0x1f1a68u: goto label_1f1a68;
        case 0x1f1a6cu: goto label_1f1a6c;
        case 0x1f1a70u: goto label_1f1a70;
        case 0x1f1a74u: goto label_1f1a74;
        case 0x1f1a78u: goto label_1f1a78;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a80u: goto label_1f1a80;
        case 0x1f1a84u: goto label_1f1a84;
        case 0x1f1a88u: goto label_1f1a88;
        case 0x1f1a8cu: goto label_1f1a8c;
        case 0x1f1a90u: goto label_1f1a90;
        case 0x1f1a94u: goto label_1f1a94;
        case 0x1f1a98u: goto label_1f1a98;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa0u: goto label_1f1aa0;
        case 0x1f1aa4u: goto label_1f1aa4;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1aacu: goto label_1f1aac;
        case 0x1f1ab0u: goto label_1f1ab0;
        case 0x1f1ab4u: goto label_1f1ab4;
        case 0x1f1ab8u: goto label_1f1ab8;
        case 0x1f1abcu: goto label_1f1abc;
        case 0x1f1ac0u: goto label_1f1ac0;
        case 0x1f1ac4u: goto label_1f1ac4;
        case 0x1f1ac8u: goto label_1f1ac8;
        case 0x1f1accu: goto label_1f1acc;
        case 0x1f1ad0u: goto label_1f1ad0;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1ad8u: goto label_1f1ad8;
        case 0x1f1adcu: goto label_1f1adc;
        case 0x1f1ae0u: goto label_1f1ae0;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1ae8u: goto label_1f1ae8;
        case 0x1f1aecu: goto label_1f1aec;
        case 0x1f1af0u: goto label_1f1af0;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1af8u: goto label_1f1af8;
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b00u: goto label_1f1b00;
        case 0x1f1b04u: goto label_1f1b04;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b0cu: goto label_1f1b0c;
        case 0x1f1b10u: goto label_1f1b10;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b18u: goto label_1f1b18;
        case 0x1f1b1cu: goto label_1f1b1c;
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b24u: goto label_1f1b24;
        case 0x1f1b28u: goto label_1f1b28;
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1b30u: goto label_1f1b30;
        case 0x1f1b34u: goto label_1f1b34;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b3cu: goto label_1f1b3c;
        case 0x1f1b40u: goto label_1f1b40;
        case 0x1f1b44u: goto label_1f1b44;
        case 0x1f1b48u: goto label_1f1b48;
        case 0x1f1b4cu: goto label_1f1b4c;
        case 0x1f1b50u: goto label_1f1b50;
        case 0x1f1b54u: goto label_1f1b54;
        case 0x1f1b58u: goto label_1f1b58;
        case 0x1f1b5cu: goto label_1f1b5c;
        case 0x1f1b60u: goto label_1f1b60;
        case 0x1f1b64u: goto label_1f1b64;
        case 0x1f1b68u: goto label_1f1b68;
        case 0x1f1b6cu: goto label_1f1b6c;
        case 0x1f1b70u: goto label_1f1b70;
        case 0x1f1b74u: goto label_1f1b74;
        case 0x1f1b78u: goto label_1f1b78;
        case 0x1f1b7cu: goto label_1f1b7c;
        case 0x1f1b80u: goto label_1f1b80;
        case 0x1f1b84u: goto label_1f1b84;
        case 0x1f1b88u: goto label_1f1b88;
        case 0x1f1b8cu: goto label_1f1b8c;
        case 0x1f1b90u: goto label_1f1b90;
        case 0x1f1b94u: goto label_1f1b94;
        case 0x1f1b98u: goto label_1f1b98;
        case 0x1f1b9cu: goto label_1f1b9c;
        case 0x1f1ba0u: goto label_1f1ba0;
        case 0x1f1ba4u: goto label_1f1ba4;
        case 0x1f1ba8u: goto label_1f1ba8;
        case 0x1f1bacu: goto label_1f1bac;
        case 0x1f1bb0u: goto label_1f1bb0;
        case 0x1f1bb4u: goto label_1f1bb4;
        case 0x1f1bb8u: goto label_1f1bb8;
        case 0x1f1bbcu: goto label_1f1bbc;
        case 0x1f1bc0u: goto label_1f1bc0;
        case 0x1f1bc4u: goto label_1f1bc4;
        case 0x1f1bc8u: goto label_1f1bc8;
        case 0x1f1bccu: goto label_1f1bcc;
        case 0x1f1bd0u: goto label_1f1bd0;
        case 0x1f1bd4u: goto label_1f1bd4;
        case 0x1f1bd8u: goto label_1f1bd8;
        case 0x1f1bdcu: goto label_1f1bdc;
        case 0x1f1be0u: goto label_1f1be0;
        case 0x1f1be4u: goto label_1f1be4;
        case 0x1f1be8u: goto label_1f1be8;
        case 0x1f1becu: goto label_1f1bec;
        case 0x1f1bf0u: goto label_1f1bf0;
        case 0x1f1bf4u: goto label_1f1bf4;
        case 0x1f1bf8u: goto label_1f1bf8;
        case 0x1f1bfcu: goto label_1f1bfc;
        case 0x1f1c00u: goto label_1f1c00;
        case 0x1f1c04u: goto label_1f1c04;
        case 0x1f1c08u: goto label_1f1c08;
        case 0x1f1c0cu: goto label_1f1c0c;
        case 0x1f1c10u: goto label_1f1c10;
        case 0x1f1c14u: goto label_1f1c14;
        case 0x1f1c18u: goto label_1f1c18;
        case 0x1f1c1cu: goto label_1f1c1c;
        case 0x1f1c20u: goto label_1f1c20;
        case 0x1f1c24u: goto label_1f1c24;
        case 0x1f1c28u: goto label_1f1c28;
        case 0x1f1c2cu: goto label_1f1c2c;
        case 0x1f1c30u: goto label_1f1c30;
        case 0x1f1c34u: goto label_1f1c34;
        case 0x1f1c38u: goto label_1f1c38;
        case 0x1f1c3cu: goto label_1f1c3c;
        case 0x1f1c40u: goto label_1f1c40;
        case 0x1f1c44u: goto label_1f1c44;
        case 0x1f1c48u: goto label_1f1c48;
        case 0x1f1c4cu: goto label_1f1c4c;
        case 0x1f1c50u: goto label_1f1c50;
        case 0x1f1c54u: goto label_1f1c54;
        case 0x1f1c58u: goto label_1f1c58;
        case 0x1f1c5cu: goto label_1f1c5c;
        case 0x1f1c60u: goto label_1f1c60;
        case 0x1f1c64u: goto label_1f1c64;
        case 0x1f1c68u: goto label_1f1c68;
        case 0x1f1c6cu: goto label_1f1c6c;
        case 0x1f1c70u: goto label_1f1c70;
        case 0x1f1c74u: goto label_1f1c74;
        case 0x1f1c78u: goto label_1f1c78;
        case 0x1f1c7cu: goto label_1f1c7c;
        case 0x1f1c80u: goto label_1f1c80;
        case 0x1f1c84u: goto label_1f1c84;
        case 0x1f1c88u: goto label_1f1c88;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1c90u: goto label_1f1c90;
        case 0x1f1c94u: goto label_1f1c94;
        case 0x1f1c98u: goto label_1f1c98;
        case 0x1f1c9cu: goto label_1f1c9c;
        case 0x1f1ca0u: goto label_1f1ca0;
        case 0x1f1ca4u: goto label_1f1ca4;
        case 0x1f1ca8u: goto label_1f1ca8;
        default: break;
    }

    ctx->pc = 0x1f1290u;

label_1f1290:
    // 0x1f1290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f1294:
    // 0x1f1294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f1298:
    // 0x1f1298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f129c:
    // 0x1f129c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f12a0:
    // 0x1f12a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f12a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f12a4:
    // 0x1f12a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f12a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f12a8:
    // 0x1f12a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f12a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f12ac:
    // 0x1f12ac: 0xa3808838  sb          $zero, -0x77C8($gp)
    ctx->pc = 0x1f12acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936632), (uint8_t)GPR_U32(ctx, 0));
label_1f12b0:
    // 0x1f12b0: 0x93828838  lbu         $v0, -0x77C8($gp)
    ctx->pc = 0x1f12b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936632)));
label_1f12b4:
    // 0x1f12b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f12b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f12b8:
    // 0x1f12b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f12b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f12bc:
    // 0x1f12bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f12c0:
    if (ctx->pc == 0x1F12C0u) {
        ctx->pc = 0x1F12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12BCu;
        // 0x1f12c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12C4u;
        goto label_1f12c4;
    }
    ctx->pc = 0x1F12BCu;
    {
        const bool branch_taken_0x1f12bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12BCu;
        // 0x1f12c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12bc) {
            ctx->pc = 0x1F12D8u;
            goto label_1f12d8;
        }
    }
    ctx->pc = 0x1F12C4u;
label_1f12c4:
    // 0x1f12c4: 0xc07c814  jal         func_1F2050
label_1f12c8:
    if (ctx->pc == 0x1F12C8u) {
        ctx->pc = 0x1F12CCu;
        goto label_1f12cc;
    }
    ctx->pc = 0x1F12C4u;
    SET_GPR_U32(ctx, 31, 0x1F12CCu);
    ctx->pc = 0x1F2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2050u, 0x1F12C4u, 0x1F12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12CCu;
label_1f12cc:
    // 0x1f12cc: 0x10000270  b           . + 4 + (0x270 << 2)
label_1f12d0:
    if (ctx->pc == 0x1F12D0u) {
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12CCu;
        // 0x1f12d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12D4u;
        goto label_1f12d4;
    }
    ctx->pc = 0x1F12CCu;
    {
        const bool branch_taken_0x1f12cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12CCu;
        // 0x1f12d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12cc) {
            ctx->pc = 0x1F1C90u;
            goto label_1f1c90;
        }
    }
    ctx->pc = 0x1F12D4u;
label_1f12d4:
    // 0x1f12d4: 0x0  nop
    ctx->pc = 0x1f12d4u;
    // NOP
label_1f12d8:
    // 0x1f12d8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f12dc:
    // 0x1f12dc: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x1f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1f12e0:
    // 0x1f12e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f12e4:
    // 0x1f12e4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f12e8:
    // 0x1f12e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1f12e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f12ec:
    // 0x1f12ec: 0x10430232  beq         $v0, $v1, . + 4 + (0x232 << 2)
label_1f12f0:
    if (ctx->pc == 0x1F12F0u) {
        ctx->pc = 0x1F12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12ECu;
        // 0x1f12f0: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12F4u;
        goto label_1f12f4;
    }
    ctx->pc = 0x1F12ECu;
    {
        const bool branch_taken_0x1f12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12ECu;
        // 0x1f12f0: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12ec) {
            ctx->pc = 0x1F1BB8u;
            goto label_1f1bb8;
        }
    }
    ctx->pc = 0x1F12F4u;
label_1f12f4:
    // 0x1f12f4: 0x10430220  beq         $v0, $v1, . + 4 + (0x220 << 2)
label_1f12f8:
    if (ctx->pc == 0x1F12F8u) {
        ctx->pc = 0x1F12FCu;
        goto label_1f12fc;
    }
    ctx->pc = 0x1F12F4u;
    {
        const bool branch_taken_0x1f12f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f12f4) {
            ctx->pc = 0x1F1B78u;
            goto label_1f1b78;
        }
    }
    ctx->pc = 0x1F12FCu;
label_1f12fc:
    // 0x1f12fc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1f12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1f1300:
    // 0x1f1300: 0x1043020b  beq         $v0, $v1, . + 4 + (0x20B << 2)
label_1f1304:
    if (ctx->pc == 0x1F1304u) {
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1308u;
        goto label_1f1308;
    }
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1B30u;
            goto label_1f1b30;
        }
    }
    ctx->pc = 0x1F1308u;
label_1f1308:
    // 0x1f1308: 0x104301fd  beq         $v0, $v1, . + 4 + (0x1FD << 2)
label_1f130c:
    if (ctx->pc == 0x1F130Cu) {
        ctx->pc = 0x1F1310u;
        goto label_1f1310;
    }
    ctx->pc = 0x1F1308u;
    {
        const bool branch_taken_0x1f1308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1308) {
            ctx->pc = 0x1F1B00u;
            goto label_1f1b00;
        }
    }
    ctx->pc = 0x1F1310u;
label_1f1310:
    // 0x1f1310: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1f1314:
    // 0x1f1314: 0x104301f6  beq         $v0, $v1, . + 4 + (0x1F6 << 2)
label_1f1318:
    if (ctx->pc == 0x1F1318u) {
        ctx->pc = 0x1F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1314u;
        // 0x1f1318: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F131Cu;
        goto label_1f131c;
    }
    ctx->pc = 0x1F1314u;
    {
        const bool branch_taken_0x1f1314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1314u;
        // 0x1f1318: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1314) {
            ctx->pc = 0x1F1AF0u;
            goto label_1f1af0;
        }
    }
    ctx->pc = 0x1F131Cu;
label_1f131c:
    // 0x1f131c: 0x104301da  beq         $v0, $v1, . + 4 + (0x1DA << 2)
label_1f1320:
    if (ctx->pc == 0x1F1320u) {
        ctx->pc = 0x1F1324u;
        goto label_1f1324;
    }
    ctx->pc = 0x1F131Cu;
    {
        const bool branch_taken_0x1f131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f131c) {
            ctx->pc = 0x1F1A88u;
            goto label_1f1a88;
        }
    }
    ctx->pc = 0x1F1324u;
label_1f1324:
    // 0x1f1324: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1f1328:
    // 0x1f1328: 0x104301c5  beq         $v0, $v1, . + 4 + (0x1C5 << 2)
label_1f132c:
    if (ctx->pc == 0x1F132Cu) {
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1328u;
        // 0x1f132c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1330u;
        goto label_1f1330;
    }
    ctx->pc = 0x1F1328u;
    {
        const bool branch_taken_0x1f1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1328u;
        // 0x1f132c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1328) {
            ctx->pc = 0x1F1A40u;
            goto label_1f1a40;
        }
    }
    ctx->pc = 0x1F1330u;
label_1f1330:
    // 0x1f1330: 0x1043019b  beq         $v0, $v1, . + 4 + (0x19B << 2)
label_1f1334:
    if (ctx->pc == 0x1F1334u) {
        ctx->pc = 0x1F1338u;
        goto label_1f1338;
    }
    ctx->pc = 0x1F1330u;
    {
        const bool branch_taken_0x1f1330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1330) {
            ctx->pc = 0x1F19A0u;
            goto label_1f19a0;
        }
    }
    ctx->pc = 0x1F1338u;
label_1f1338:
    // 0x1f1338: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1f1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1f133c:
    // 0x1f133c: 0x10430180  beq         $v0, $v1, . + 4 + (0x180 << 2)
label_1f1340:
    if (ctx->pc == 0x1F1340u) {
        ctx->pc = 0x1F1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F133Cu;
        // 0x1f1340: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1344u;
        goto label_1f1344;
    }
    ctx->pc = 0x1F133Cu;
    {
        const bool branch_taken_0x1f133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F133Cu;
        // 0x1f1340: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f133c) {
            ctx->pc = 0x1F1940u;
            goto label_1f1940;
        }
    }
    ctx->pc = 0x1F1344u;
label_1f1344:
    // 0x1f1344: 0x10430156  beq         $v0, $v1, . + 4 + (0x156 << 2)
label_1f1348:
    if (ctx->pc == 0x1F1348u) {
        ctx->pc = 0x1F134Cu;
        goto label_1f134c;
    }
    ctx->pc = 0x1F1344u;
    {
        const bool branch_taken_0x1f1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1344) {
            ctx->pc = 0x1F18A0u;
            goto label_1f18a0;
        }
    }
    ctx->pc = 0x1F134Cu;
label_1f134c:
    // 0x1f134c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f1350:
    // 0x1f1350: 0x10430139  beq         $v0, $v1, . + 4 + (0x139 << 2)
label_1f1354:
    if (ctx->pc == 0x1F1354u) {
        ctx->pc = 0x1F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1350u;
        // 0x1f1354: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1358u;
        goto label_1f1358;
    }
    ctx->pc = 0x1F1350u;
    {
        const bool branch_taken_0x1f1350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1350u;
        // 0x1f1354: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1350) {
            ctx->pc = 0x1F1838u;
            goto label_1f1838;
        }
    }
    ctx->pc = 0x1F1358u;
label_1f1358:
    // 0x1f1358: 0x10430133  beq         $v0, $v1, . + 4 + (0x133 << 2)
label_1f135c:
    if (ctx->pc == 0x1F135Cu) {
        ctx->pc = 0x1F1360u;
        goto label_1f1360;
    }
    ctx->pc = 0x1F1358u;
    {
        const bool branch_taken_0x1f1358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1358) {
            ctx->pc = 0x1F1828u;
            goto label_1f1828;
        }
    }
    ctx->pc = 0x1F1360u;
label_1f1360:
    // 0x1f1360: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f1364:
    // 0x1f1364: 0x10430118  beq         $v0, $v1, . + 4 + (0x118 << 2)
label_1f1368:
    if (ctx->pc == 0x1F1368u) {
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F136Cu;
        goto label_1f136c;
    }
    ctx->pc = 0x1F1364u;
    {
        const bool branch_taken_0x1f1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1364) {
            ctx->pc = 0x1F17C8u;
            goto label_1f17c8;
        }
    }
    ctx->pc = 0x1F136Cu;
label_1f136c:
    // 0x1f136c: 0x104300fc  beq         $v0, $v1, . + 4 + (0xFC << 2)
label_1f1370:
    if (ctx->pc == 0x1F1370u) {
        ctx->pc = 0x1F1374u;
        goto label_1f1374;
    }
    ctx->pc = 0x1F136Cu;
    {
        const bool branch_taken_0x1f136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f136c) {
            ctx->pc = 0x1F1760u;
            goto label_1f1760;
        }
    }
    ctx->pc = 0x1F1374u;
label_1f1374:
    // 0x1f1374: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1f1378:
    // 0x1f1378: 0x104300ef  beq         $v0, $v1, . + 4 + (0xEF << 2)
label_1f137c:
    if (ctx->pc == 0x1F137Cu) {
        ctx->pc = 0x1F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1378u;
        // 0x1f137c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1380u;
        goto label_1f1380;
    }
    ctx->pc = 0x1F1378u;
    {
        const bool branch_taken_0x1f1378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1378u;
        // 0x1f137c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1378) {
            ctx->pc = 0x1F1738u;
            goto label_1f1738;
        }
    }
    ctx->pc = 0x1F1380u;
label_1f1380:
    // 0x1f1380: 0x104300db  beq         $v0, $v1, . + 4 + (0xDB << 2)
label_1f1384:
    if (ctx->pc == 0x1F1384u) {
        ctx->pc = 0x1F1388u;
        goto label_1f1388;
    }
    ctx->pc = 0x1F1380u;
    {
        const bool branch_taken_0x1f1380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1380) {
            ctx->pc = 0x1F16F0u;
            goto label_1f16f0;
        }
    }
    ctx->pc = 0x1F1388u;
label_1f1388:
    // 0x1f1388: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f1388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f138c:
    // 0x1f138c: 0x10430098  beq         $v0, $v1, . + 4 + (0x98 << 2)
label_1f1390:
    if (ctx->pc == 0x1F1390u) {
        ctx->pc = 0x1F1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F138Cu;
        // 0x1f1390: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1394u;
        goto label_1f1394;
    }
    ctx->pc = 0x1F138Cu;
    {
        const bool branch_taken_0x1f138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F138Cu;
        // 0x1f1390: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f138c) {
            ctx->pc = 0x1F15F0u;
            goto label_1f15f0;
        }
    }
    ctx->pc = 0x1F1394u;
label_1f1394:
    // 0x1f1394: 0x1043008a  beq         $v0, $v1, . + 4 + (0x8A << 2)
label_1f1398:
    if (ctx->pc == 0x1F1398u) {
        ctx->pc = 0x1F139Cu;
        goto label_1f139c;
    }
    ctx->pc = 0x1F1394u;
    {
        const bool branch_taken_0x1f1394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1394) {
            ctx->pc = 0x1F15C0u;
            goto label_1f15c0;
        }
    }
    ctx->pc = 0x1F139Cu;
label_1f139c:
    // 0x1f139c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f13a0:
    // 0x1f13a0: 0x10430077  beq         $v0, $v1, . + 4 + (0x77 << 2)
label_1f13a4:
    if (ctx->pc == 0x1F13A4u) {
        ctx->pc = 0x1F13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13A0u;
        // 0x1f13a4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13A8u;
        goto label_1f13a8;
    }
    ctx->pc = 0x1F13A0u;
    {
        const bool branch_taken_0x1f13a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13A0u;
        // 0x1f13a4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13a0) {
            ctx->pc = 0x1F1580u;
            goto label_1f1580;
        }
    }
    ctx->pc = 0x1F13A8u;
label_1f13a8:
    // 0x1f13a8: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
label_1f13ac:
    if (ctx->pc == 0x1F13ACu) {
        ctx->pc = 0x1F13B0u;
        goto label_1f13b0;
    }
    ctx->pc = 0x1F13A8u;
    {
        const bool branch_taken_0x1f13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f13a8) {
            ctx->pc = 0x1F1558u;
            goto label_1f1558;
        }
    }
    ctx->pc = 0x1F13B0u;
label_1f13b0:
    // 0x1f13b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f13b4:
    // 0x1f13b4: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
label_1f13b8:
    if (ctx->pc == 0x1F13B8u) {
        ctx->pc = 0x1F13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13B4u;
        // 0x1f13b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13BCu;
        goto label_1f13bc;
    }
    ctx->pc = 0x1F13B4u;
    {
        const bool branch_taken_0x1f13b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13B4u;
        // 0x1f13b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13b4) {
            ctx->pc = 0x1F1508u;
            goto label_1f1508;
        }
    }
    ctx->pc = 0x1F13BCu;
label_1f13bc:
    // 0x1f13bc: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
label_1f13c0:
    if (ctx->pc == 0x1F13C0u) {
        ctx->pc = 0x1F13C4u;
        goto label_1f13c4;
    }
    ctx->pc = 0x1F13BCu;
    {
        const bool branch_taken_0x1f13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f13bc) {
            ctx->pc = 0x1F1498u;
            goto label_1f1498;
        }
    }
    ctx->pc = 0x1F13C4u;
label_1f13c4:
    // 0x1f13c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f13c8:
    // 0x1f13c8: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_1f13cc:
    if (ctx->pc == 0x1F13CCu) {
        ctx->pc = 0x1F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C8u;
        // 0x1f13cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13D0u;
        goto label_1f13d0;
    }
    ctx->pc = 0x1F13C8u;
    {
        const bool branch_taken_0x1f13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C8u;
        // 0x1f13cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13c8) {
            ctx->pc = 0x1F1430u;
            goto label_1f1430;
        }
    }
    ctx->pc = 0x1F13D0u;
label_1f13d0:
    // 0x1f13d0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1f13d4:
    if (ctx->pc == 0x1F13D4u) {
        ctx->pc = 0x1F13D8u;
        goto label_1f13d8;
    }
    ctx->pc = 0x1F13D0u;
    {
        const bool branch_taken_0x1f13d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f13d0) {
            ctx->pc = 0x1F13E8u;
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F13D8u;
label_1f13d8:
    // 0x1f13d8: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
label_1f13dc:
    if (ctx->pc == 0x1F13DCu) {
        ctx->pc = 0x1F13E0u;
        goto label_1f13e0;
    }
    ctx->pc = 0x1F13D8u;
    {
        const bool branch_taken_0x1f13d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13d8) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F13E0u;
label_1f13e0:
    // 0x1f13e0: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
label_1f13e4:
    if (ctx->pc == 0x1F13E4u) {
        ctx->pc = 0x1F13E8u;
        goto label_1f13e8;
    }
    ctx->pc = 0x1F13E0u;
    {
        const bool branch_taken_0x1f13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13e0) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F13E8u;
label_1f13e8:
    // 0x1f13e8: 0xc07bd80  jal         func_1EF600
label_1f13ec:
    if (ctx->pc == 0x1F13ECu) {
        ctx->pc = 0x1F13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13E8u;
        // 0x1f13ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13F0u;
        goto label_1f13f0;
    }
    ctx->pc = 0x1F13E8u;
    SET_GPR_U32(ctx, 31, 0x1F13F0u);
    ctx->pc = 0x1F13ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13E8u;
    // 0x1f13ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F13E8u, 0x1F13F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13F0u;
label_1f13f0:
    // 0x1f13f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f13f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f13f4:
    // 0x1f13f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f13f8:
    // 0x1f13f8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1f13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1f13fc:
    // 0x1f13fc: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x1f13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
label_1f1400:
    // 0x1f1400: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1404:
    // 0x1f1404: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f1404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1408:
    // 0x1f1408: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1f140c:
    if (ctx->pc == 0x1F140Cu) {
        ctx->pc = 0x1F1410u;
        goto label_1f1410;
    }
    ctx->pc = 0x1F1408u;
    {
        const bool branch_taken_0x1f1408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1408) {
            ctx->pc = 0x1F1428u;
            goto label_1f1428;
        }
    }
    ctx->pc = 0x1F1410u;
label_1f1410:
    // 0x1f1410: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1f1414:
    // 0x1f1414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1418:
    // 0x1f1418: 0xc096974  jal         func_25A5D0
label_1f141c:
    if (ctx->pc == 0x1F141Cu) {
        ctx->pc = 0x1F141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1418u;
        // 0x1f141c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1420u;
        goto label_1f1420;
    }
    ctx->pc = 0x1F1418u;
    SET_GPR_U32(ctx, 31, 0x1F1420u);
    ctx->pc = 0x1F141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1418u;
    // 0x1f141c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x1F1418u, 0x1F1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1420u;
label_1f1420:
    // 0x1f1420: 0xa2020037  sb          $v0, 0x37($s0)
    ctx->pc = 0x1f1420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
label_1f1424:
    // 0x1f1424: 0x0  nop
    ctx->pc = 0x1f1424u;
    // NOP
label_1f1428:
    // 0x1f1428: 0x10000219  b           . + 4 + (0x219 << 2)
label_1f142c:
    if (ctx->pc == 0x1F142Cu) {
        ctx->pc = 0x1F142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1428u;
        // 0x1f142c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1430u;
        goto label_1f1430;
    }
    ctx->pc = 0x1F1428u;
    {
        const bool branch_taken_0x1f1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1428u;
        // 0x1f142c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1428) {
            ctx->pc = 0x1F1C90u;
            goto label_1f1c90;
        }
    }
    ctx->pc = 0x1F1430u;
label_1f1430:
    // 0x1f1430: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1434:
    // 0x1f1434: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1438:
    // 0x1f1438: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f1438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f143c:
    // 0x1f143c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1f1440:
    // 0x1f1440: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f1444:
    if (ctx->pc == 0x1F1444u) {
        ctx->pc = 0x1F1448u;
        goto label_1f1448;
    }
    ctx->pc = 0x1F1440u;
    {
        const bool branch_taken_0x1f1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1440) {
            ctx->pc = 0x1F1488u;
            goto label_1f1488;
        }
    }
    ctx->pc = 0x1F1448u;
label_1f1448:
    // 0x1f1448: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1f1448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
label_1f144c:
    // 0x1f144c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1450:
    // 0x1f1450: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1450u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1454:
    // 0x1f1454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1458:
    // 0x1f1458: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1f1458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1f145c:
    // 0x1f145c: 0xa203004f  sb          $v1, 0x4F($s0)
    ctx->pc = 0x1f145cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 3));
label_1f1460:
    // 0x1f1460: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f1460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f1464:
    // 0x1f1464: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1468:
    // 0x1f1468: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x1f1468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
label_1f146c:
    // 0x1f146c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f146cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1470:
    // 0x1f1470: 0xa423a3d6  sh          $v1, -0x5C2A($at)
    ctx->pc = 0x1f1470u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 3));
label_1f1474:
    // 0x1f1474: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1478:
    // 0x1f1478: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f147c:
    // 0x1f147c: 0x10000204  b           . + 4 + (0x204 << 2)
label_1f1480:
    if (ctx->pc == 0x1F1480u) {
        ctx->pc = 0x1F1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F147Cu;
        // 0x1f1480: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1484u;
        goto label_1f1484;
    }
    ctx->pc = 0x1F147Cu;
    {
        const bool branch_taken_0x1f147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F147Cu;
        // 0x1f1480: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f147c) {
            ctx->pc = 0x1F1C90u;
            goto label_1f1c90;
        }
    }
    ctx->pc = 0x1F1484u;
label_1f1484:
    // 0x1f1484: 0x0  nop
    ctx->pc = 0x1f1484u;
    // NOP
label_1f1488:
    // 0x1f1488: 0xc07c7d0  jal         func_1F1F40
label_1f148c:
    if (ctx->pc == 0x1F148Cu) {
        ctx->pc = 0x1F148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1488u;
        // 0x1f148c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1490u;
        goto label_1f1490;
    }
    ctx->pc = 0x1F1488u;
    SET_GPR_U32(ctx, 31, 0x1F1490u);
    ctx->pc = 0x1F148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1488u;
    // 0x1f148c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F40u, 0x1F1488u, 0x1F1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1490u;
label_1f1490:
    // 0x1f1490: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_1f1494:
    if (ctx->pc == 0x1F1494u) {
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1490u;
        // 0x1f1494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1498u;
        goto label_1f1498;
    }
    ctx->pc = 0x1F1490u;
    {
        const bool branch_taken_0x1f1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1490u;
        // 0x1f1494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1490) {
            ctx->pc = 0x1F1C90u;
            goto label_1f1c90;
        }
    }
    ctx->pc = 0x1F1498u;
label_1f1498:
    // 0x1f1498: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f149c:
    // 0x1f149c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f14a0:
    // 0x1f14a0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f14a4:
    // 0x1f14a4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1f14a4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f14a8:
    // 0x1f14a8: 0xc07bd80  jal         func_1EF600
label_1f14ac:
    if (ctx->pc == 0x1F14ACu) {
        ctx->pc = 0x1F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14A8u;
        // 0x1f14ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14B0u;
        goto label_1f14b0;
    }
    ctx->pc = 0x1F14A8u;
    SET_GPR_U32(ctx, 31, 0x1F14B0u);
    ctx->pc = 0x1F14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14A8u;
    // 0x1f14ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F14A8u, 0x1F14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14B0u;
label_1f14b0:
    // 0x1f14b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f14b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f14b4:
    // 0x1f14b4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_1f14b8:
    // 0x1f14b8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1f14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1f14bc:
    // 0x1f14bc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1f14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_1f14c0:
    // 0x1f14c0: 0xa782882c  sh          $v0, -0x77D4($gp)
    ctx->pc = 0x1f14c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936620), (uint16_t)GPR_U32(ctx, 2));
label_1f14c4:
    // 0x1f14c4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1f14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1f14c8:
    // 0x1f14c8: 0xaf908834  sw          $s0, -0x77CC($gp)
    ctx->pc = 0x1f14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 16));
label_1f14cc:
    // 0x1f14cc: 0xc0957a0  jal         func_255E80
label_1f14d0:
    if (ctx->pc == 0x1F14D0u) {
        ctx->pc = 0x1F14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14CCu;
        // 0x1f14d0: 0xa7828830  sh          $v0, -0x77D0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14D4u;
        goto label_1f14d4;
    }
    ctx->pc = 0x1F14CCu;
    SET_GPR_U32(ctx, 31, 0x1F14D4u);
    ctx->pc = 0x1F14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14CCu;
    // 0x1f14d0: 0xa7828830  sh          $v0, -0x77D0($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x1F14CCu, 0x1F14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14D4u;
label_1f14d4:
    // 0x1f14d4: 0x9783882c  lhu         $v1, -0x77D4($gp)
    ctx->pc = 0x1f14d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936620)));
label_1f14d8:
    // 0x1f14d8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1f14dc:
    // 0x1f14dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1f14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_1f14e0:
    // 0x1f14e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f14e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f14e4:
    // 0x1f14e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_1f14e8:
    // 0x1f14e8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x1f14e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f14ec:
    // 0x1f14ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f14ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f14f0:
    // 0x1f14f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f14f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f14f4:
    // 0x1f14f4: 0xc09565c  jal         func_255970
label_1f14f8:
    if (ctx->pc == 0x1F14F8u) {
        ctx->pc = 0x1F14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14F4u;
        // 0x1f14f8: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14FCu;
        goto label_1f14fc;
    }
    ctx->pc = 0x1F14F4u;
    SET_GPR_U32(ctx, 31, 0x1F14FCu);
    ctx->pc = 0x1F14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14F4u;
    // 0x1f14f8: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x1F14F4u, 0x1F14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14FCu;
label_1f14fc:
    // 0x1f14fc: 0x1000ff6c  b           . + 4 + (-0x94 << 2)
label_1f1500:
    if (ctx->pc == 0x1F1500u) {
        ctx->pc = 0x1F1504u;
        goto label_1f1504;
    }
    ctx->pc = 0x1F14FCu;
    {
        const bool branch_taken_0x1f14fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14fc) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1504u;
label_1f1504:
    // 0x1f1504: 0x0  nop
    ctx->pc = 0x1f1504u;
    // NOP
label_1f1508:
    // 0x1f1508: 0xc07bd80  jal         func_1EF600
label_1f150c:
    if (ctx->pc == 0x1F150Cu) {
        ctx->pc = 0x1F150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1508u;
        // 0x1f150c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1510u;
        goto label_1f1510;
    }
    ctx->pc = 0x1F1508u;
    SET_GPR_U32(ctx, 31, 0x1F1510u);
    ctx->pc = 0x1F150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1508u;
    // 0x1f150c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F1508u, 0x1F1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1510u;
label_1f1510:
    // 0x1f1510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1514:
    // 0x1f1514: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1f1514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f1518:
    // 0x1f1518: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1518u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f151c:
    // 0x1f151c: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f151cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f1520:
    // 0x1f1520: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1f1520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1f1524:
    // 0x1f1524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f1528:
    if (ctx->pc == 0x1F1528u) {
        ctx->pc = 0x1F1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1524u;
        // 0x1f1528: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F152Cu;
        goto label_1f152c;
    }
    ctx->pc = 0x1F1524u;
    {
        const bool branch_taken_0x1f1524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1524u;
        // 0x1f1528: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1524) {
            ctx->pc = 0x1F1538u;
            goto label_1f1538;
        }
    }
    ctx->pc = 0x1F152Cu;
label_1f152c:
    // 0x1f152c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1530:
    // 0x1f1530: 0x1062ff5f  beq         $v1, $v0, . + 4 + (-0xA1 << 2)
label_1f1534:
    if (ctx->pc == 0x1F1534u) {
        ctx->pc = 0x1F1538u;
        goto label_1f1538;
    }
    ctx->pc = 0x1F1530u;
    {
        const bool branch_taken_0x1f1530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1530) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1538u;
label_1f1538:
    // 0x1f1538: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f153c:
    // 0x1f153c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f153cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1540:
    // 0x1f1540: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f1540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f1544:
    // 0x1f1544: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f1544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f1548:
    // 0x1f1548: 0x320f809  jalr        $t9
label_1f154c:
    if (ctx->pc == 0x1F154Cu) {
        ctx->pc = 0x1F154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1548u;
        // 0x1f154c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1550u;
        goto label_1f1550;
    }
    ctx->pc = 0x1F1548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1550u);
        ctx->pc = 0x1F154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1548u;
        // 0x1f154c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1548u, 0x1F1550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1550u;
label_1f1550:
    // 0x1f1550: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
label_1f1554:
    if (ctx->pc == 0x1F1554u) {
        ctx->pc = 0x1F1558u;
        goto label_1f1558;
    }
    ctx->pc = 0x1F1550u;
    {
        const bool branch_taken_0x1f1550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1550) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1558u;
label_1f1558:
    // 0x1f1558: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f155c:
    // 0x1f155c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1560:
    // 0x1f1560: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1564:
    // 0x1f1564: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1568:
    // 0x1f1568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f156c:
    // 0x1f156c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f156cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1570:
    // 0x1f1570: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1574:
    // 0x1f1574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1578:
    // 0x1f1578: 0x1000ff4d  b           . + 4 + (-0xB3 << 2)
label_1f157c:
    if (ctx->pc == 0x1F157Cu) {
        ctx->pc = 0x1F157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1578u;
        // 0x1f157c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1580u;
        goto label_1f1580;
    }
    ctx->pc = 0x1F1578u;
    {
        const bool branch_taken_0x1f1578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1578u;
        // 0x1f157c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1578) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1580u;
label_1f1580:
    // 0x1f1580: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1584:
    // 0x1f1584: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1588:
    // 0x1f1588: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1588u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f158c:
    // 0x1f158c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1590:
    // 0x1f1590: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1594:
    // 0x1f1594: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f1594u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1598:
    // 0x1f1598: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f159c:
    // 0x1f159c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f15a0:
    // 0x1f15a0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f15a4:
    // 0x1f15a4: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f15a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f15a8:
    // 0x1f15a8: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f15a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f15ac:
    // 0x1f15ac: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f15b0:
    // 0x1f15b0: 0x320f809  jalr        $t9
label_1f15b4:
    if (ctx->pc == 0x1F15B4u) {
        ctx->pc = 0x1F15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15B0u;
        // 0x1f15b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15B8u;
        goto label_1f15b8;
    }
    ctx->pc = 0x1F15B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F15B8u);
        ctx->pc = 0x1F15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15B0u;
        // 0x1f15b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F15B0u, 0x1F15B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F15B8u;
label_1f15b8:
    // 0x1f15b8: 0x1000ff3d  b           . + 4 + (-0xC3 << 2)
label_1f15bc:
    if (ctx->pc == 0x1F15BCu) {
        ctx->pc = 0x1F15C0u;
        goto label_1f15c0;
    }
    ctx->pc = 0x1F15B8u;
    {
        const bool branch_taken_0x1f15b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15b8) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F15C0u;
label_1f15c0:
    // 0x1f15c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f15c4:
    // 0x1f15c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f15c8:
    // 0x1f15c8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f15cc:
    // 0x1f15cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f15ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f15d0:
    // 0x1f15d0: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x1f15d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
label_1f15d4:
    // 0x1f15d4: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1f15d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1f15d8:
    // 0x1f15d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f15dc:
    // 0x1f15dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f15e0:
    // 0x1f15e0: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x1f15e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1f15e4:
    // 0x1f15e4: 0x1000ff32  b           . + 4 + (-0xCE << 2)
label_1f15e8:
    if (ctx->pc == 0x1F15E8u) {
        ctx->pc = 0x1F15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15E4u;
        // 0x1f15e8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15ECu;
        goto label_1f15ec;
    }
    ctx->pc = 0x1F15E4u;
    {
        const bool branch_taken_0x1f15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15E4u;
        // 0x1f15e8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15e4) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F15ECu;
label_1f15ec:
    // 0x1f15ec: 0x0  nop
    ctx->pc = 0x1f15ecu;
    // NOP
label_1f15f0:
    // 0x1f15f0: 0xc07bd80  jal         func_1EF600
label_1f15f4:
    if (ctx->pc == 0x1F15F4u) {
        ctx->pc = 0x1F15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15F0u;
        // 0x1f15f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F15F8u;
        goto label_1f15f8;
    }
    ctx->pc = 0x1F15F0u;
    SET_GPR_U32(ctx, 31, 0x1F15F8u);
    ctx->pc = 0x1F15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F15F0u;
    // 0x1f15f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F15F0u, 0x1F15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15F8u;
label_1f15f8:
    // 0x1f15f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f15f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f15fc:
    // 0x1f15fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1f1600:
    if (ctx->pc == 0x1F1600u) {
        ctx->pc = 0x1F1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15FCu;
        // 0x1f1600: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1604u;
        goto label_1f1604;
    }
    ctx->pc = 0x1F15FCu;
    {
        const bool branch_taken_0x1f15fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1F1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F15FCu;
        // 0x1f1600: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15fc) {
            ctx->pc = 0x1F1610u;
            goto label_1f1610;
        }
    }
    ctx->pc = 0x1F1604u;
label_1f1604:
    // 0x1f1604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1608:
    // 0x1f1608: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f160c:
    if (ctx->pc == 0x1F160Cu) {
        ctx->pc = 0x1F160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1608u;
        // 0x1f160c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1610u;
        goto label_1f1610;
    }
    ctx->pc = 0x1F1608u;
    {
        const bool branch_taken_0x1f1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1608u;
        // 0x1f160c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1608) {
            ctx->pc = 0x1F1628u;
            goto label_1f1628;
        }
    }
    ctx->pc = 0x1F1610u;
label_1f1610:
    // 0x1f1610: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f1610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f1614:
    // 0x1f1614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f1614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1f1618:
    // 0x1f1618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f161c:
    // 0x1f161c: 0x0  nop
    ctx->pc = 0x1f161cu;
    // NOP
label_1f1620:
    // 0x1f1620: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1f1620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1f1624:
    // 0x1f1624: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1f1624u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1f1628:
    // 0x1f1628: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x1f1628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f162c:
    // 0x1f162c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_1f1630:
    // 0x1f1630: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x1f1630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1f1634:
    // 0x1f1634: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f1634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f1638:
    // 0x1f1638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f1638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f163c:
    // 0x1f163c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f163cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1640:
    // 0x1f1640: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1f1640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1f1644:
    // 0x1f1644: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f1644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f1648:
    // 0x1f1648: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f1648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f164c:
    // 0x1f164c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1f1650:
    if (ctx->pc == 0x1F1650u) {
        ctx->pc = 0x1F1654u;
        goto label_1f1654;
    }
    ctx->pc = 0x1F164Cu;
    {
        const bool branch_taken_0x1f164c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f164c) {
            ctx->pc = 0x1F1664u;
            goto label_1f1664;
        }
    }
    ctx->pc = 0x1F1654u;
label_1f1654:
    // 0x1f1654: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f1654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f1658:
    // 0x1f1658: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f1658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1f165c:
    // 0x1f165c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f1660:
    if (ctx->pc == 0x1F1660u) {
        ctx->pc = 0x1F1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F165Cu;
        // 0x1f1660: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1664u;
        goto label_1f1664;
    }
    ctx->pc = 0x1F165Cu;
    {
        const bool branch_taken_0x1f165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F165Cu;
        // 0x1f1660: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f165c) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F1664u;
label_1f1664:
    // 0x1f1664: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f1664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f1668:
    // 0x1f1668: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f1668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1f166c:
    // 0x1f166c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f166cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f1670:
    // 0x1f1670: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f1670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1f1674:
    // 0x1f1674: 0x0  nop
    ctx->pc = 0x1f1674u;
    // NOP
label_1f1678:
    // 0x1f1678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f1678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1f167c:
    // 0x1f167c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1680:
    // 0x1f1680: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1684:
    // 0x1f1684: 0x8c22a3d0  lw          $v0, -0x5C30($at)
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943696)));
label_1f1688:
    // 0x1f1688: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1f168c:
    if (ctx->pc == 0x1F168Cu) {
        ctx->pc = 0x1F168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1688u;
        // 0x1f168c: 0x3071ffff  andi        $s1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1690u;
        goto label_1f1690;
    }
    ctx->pc = 0x1F1688u;
    {
        const bool branch_taken_0x1f1688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1688u;
        // 0x1f168c: 0x3071ffff  andi        $s1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1688) {
            ctx->pc = 0x1F16B0u;
            goto label_1f16b0;
        }
    }
    ctx->pc = 0x1F1690u;
label_1f1690:
    // 0x1f1690: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1f1690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
label_1f1694:
    // 0x1f1694: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f1694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f1698:
    // 0x1f1698: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
label_1f169c:
    // 0x1f169c: 0xc0692d8  jal         func_1A4B60
label_1f16a0:
    if (ctx->pc == 0x1F16A0u) {
        ctx->pc = 0x1F16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F169Cu;
        // 0x1f16a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16A4u;
        goto label_1f16a4;
    }
    ctx->pc = 0x1F169Cu;
    SET_GPR_U32(ctx, 31, 0x1F16A4u);
    ctx->pc = 0x1F16A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F169Cu;
    // 0x1f16a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1F169Cu, 0x1F16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16A4u;
label_1f16a4:
    // 0x1f16a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f16a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f16a8:
    // 0x1f16a8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f16a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f16ac:
    // 0x1f16ac: 0xac22a3d0  sw          $v0, -0x5C30($at)
    ctx->pc = 0x1f16acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943696), GPR_U32(ctx, 2));
label_1f16b0:
    // 0x1f16b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f16b4:
    // 0x1f16b4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f16b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f16b8:
    // 0x1f16b8: 0x8c24a3d0  lw          $a0, -0x5C30($at)
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943696)));
label_1f16bc:
    // 0x1f16bc: 0x1080fefc  beqz        $a0, . + 4 + (-0x104 << 2)
label_1f16c0:
    if (ctx->pc == 0x1F16C0u) {
        ctx->pc = 0x1F16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16BCu;
        // 0x1f16c0: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16C4u;
        goto label_1f16c4;
    }
    ctx->pc = 0x1F16BCu;
    {
        const bool branch_taken_0x1f16bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16BCu;
        // 0x1f16c0: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16bc) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F16C4u;
label_1f16c4:
    // 0x1f16c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f16c8:
    // 0x1f16c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1f16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1f16cc:
    // 0x1f16cc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f16d0:
    // 0x1f16d0: 0x8c22a3d0  lw          $v0, -0x5C30($at)
    ctx->pc = 0x1f16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943696)));
label_1f16d4:
    // 0x1f16d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f16d8:
    // 0x1f16d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f16d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f16dc:
    // 0x1f16dc: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1f16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1f16e0:
    // 0x1f16e0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f16e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f16e4:
    // 0x1f16e4: 0x8c22a3d0  lw          $v0, -0x5C30($at)
    ctx->pc = 0x1f16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943696)));
label_1f16e8:
    // 0x1f16e8: 0x1000fef1  b           . + 4 + (-0x10F << 2)
label_1f16ec:
    if (ctx->pc == 0x1F16ECu) {
        ctx->pc = 0x1F16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16E8u;
        // 0x1f16ec: 0xa0430003  sb          $v1, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F16F0u;
        goto label_1f16f0;
    }
    ctx->pc = 0x1F16E8u;
    {
        const bool branch_taken_0x1f16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F16E8u;
        // 0x1f16ec: 0xa0430003  sb          $v1, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f16e8) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F16F0u;
label_1f16f0:
    // 0x1f16f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f16f4:
    // 0x1f16f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f16f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f16f8:
    // 0x1f16f8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f16f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f16fc:
    // 0x1f16fc: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1f16fcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1700:
    // 0x1f1700: 0xc07bd8c  jal         func_1EF630
label_1f1704:
    if (ctx->pc == 0x1F1704u) {
        ctx->pc = 0x1F1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1700u;
        // 0x1f1704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1708u;
        goto label_1f1708;
    }
    ctx->pc = 0x1F1700u;
    SET_GPR_U32(ctx, 31, 0x1F1708u);
    ctx->pc = 0x1F1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1700u;
    // 0x1f1704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF630u, 0x1F1700u, 0x1F1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1708u;
label_1f1708:
    // 0x1f1708: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f170c:
    // 0x1f170c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1f170cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_1f1710:
    // 0x1f1710: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1710u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1714:
    // 0x1f1714: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1f1714u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1f1718:
    // 0x1f1718: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f1718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f171c:
    // 0x1f171c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f171cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1720:
    // 0x1f1720: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f1724:
    // 0x1f1724: 0x320f809  jalr        $t9
label_1f1728:
    if (ctx->pc == 0x1F1728u) {
        ctx->pc = 0x1F1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1724u;
        // 0x1f1728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F172Cu;
        goto label_1f172c;
    }
    ctx->pc = 0x1F1724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F172Cu);
        ctx->pc = 0x1F1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1724u;
        // 0x1f1728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1724u, 0x1F172Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F172Cu;
label_1f172c:
    // 0x1f172c: 0x1000fee0  b           . + 4 + (-0x120 << 2)
label_1f1730:
    if (ctx->pc == 0x1F1730u) {
        ctx->pc = 0x1F1734u;
        goto label_1f1734;
    }
    ctx->pc = 0x1F172Cu;
    {
        const bool branch_taken_0x1f172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f172c) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1734u;
label_1f1734:
    // 0x1f1734: 0x0  nop
    ctx->pc = 0x1f1734u;
    // NOP
label_1f1738:
    // 0x1f1738: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f173c:
    // 0x1f173c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1740:
    // 0x1f1740: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1744:
    // 0x1f1744: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1748:
    // 0x1f1748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f174c:
    // 0x1f174c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f174cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1750:
    // 0x1f1750: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1754:
    // 0x1f1754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1758:
    // 0x1f1758: 0x1000fed5  b           . + 4 + (-0x12B << 2)
label_1f175c:
    if (ctx->pc == 0x1F175Cu) {
        ctx->pc = 0x1F175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1758u;
        // 0x1f175c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1760u;
        goto label_1f1760;
    }
    ctx->pc = 0x1F1758u;
    {
        const bool branch_taken_0x1f1758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1758u;
        // 0x1f175c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1758) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1760u;
label_1f1760:
    // 0x1f1760: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1764:
    // 0x1f1764: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1768:
    // 0x1f1768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f176c:
    // 0x1f176c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f176cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1770:
    // 0x1f1770: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1774:
    // 0x1f1774: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1778:
    // 0x1f1778: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f1778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f177c:
    // 0x1f177c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1780:
    // 0x1f1780: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1784:
    // 0x1f1784: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1788:
    // 0x1f1788: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f1788u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f178c:
    // 0x1f178c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1790:
    // 0x1f1790: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1794:
    // 0x1f1794: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1798:
    // 0x1f1798: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1f1798u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f179c:
    // 0x1f179c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f17a0:
    // 0x1f17a0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f17a4:
    // 0x1f17a4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f17a8:
    // 0x1f17a8: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f17ac:
    // 0x1f17ac: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f17acu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f17b0:
    // 0x1f17b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f17b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f17b4:
    // 0x1f17b4: 0x320f809  jalr        $t9
label_1f17b8:
    if (ctx->pc == 0x1F17B8u) {
        ctx->pc = 0x1F17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B4u;
        // 0x1f17b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F17BCu;
        goto label_1f17bc;
    }
    ctx->pc = 0x1F17B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F17BCu);
        ctx->pc = 0x1F17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B4u;
        // 0x1f17b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F17B4u, 0x1F17BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F17BCu;
label_1f17bc:
    // 0x1f17bc: 0x1000febc  b           . + 4 + (-0x144 << 2)
label_1f17c0:
    if (ctx->pc == 0x1F17C0u) {
        ctx->pc = 0x1F17C4u;
        goto label_1f17c4;
    }
    ctx->pc = 0x1F17BCu;
    {
        const bool branch_taken_0x1f17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f17bc) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0x0  nop
    ctx->pc = 0x1f17c4u;
    // NOP
label_1f17c8:
    // 0x1f17c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f17cc:
    // 0x1f17cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f17ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f17d0:
    // 0x1f17d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f17d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f17d4:
    // 0x1f17d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f17d8:
    // 0x1f17d8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f17d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f17dc:
    // 0x1f17dc: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f17dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f17e0:
    // 0x1f17e0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f17e4:
    // 0x1f17e4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f17e8:
    // 0x1f17e8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f17ec:
    // 0x1f17ec: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f17ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f17f0:
    // 0x1f17f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f17f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f17f4:
    // 0x1f17f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f17f8:
    // 0x1f17f8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f17fc:
    // 0x1f17fc: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1f17fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1800:
    // 0x1f1800: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1804:
    // 0x1f1804: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1808:
    // 0x1f1808: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f180c:
    // 0x1f180c: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f1810:
    // 0x1f1810: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f1810u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1814:
    // 0x1f1814: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f1814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f1818:
    // 0x1f1818: 0x320f809  jalr        $t9
label_1f181c:
    if (ctx->pc == 0x1F181Cu) {
        ctx->pc = 0x1F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1818u;
        // 0x1f181c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1820u;
        goto label_1f1820;
    }
    ctx->pc = 0x1F1818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1820u);
        ctx->pc = 0x1F181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1818u;
        // 0x1f181c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1818u, 0x1F1820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1820u;
label_1f1820:
    // 0x1f1820: 0x1000fea3  b           . + 4 + (-0x15D << 2)
label_1f1824:
    if (ctx->pc == 0x1F1824u) {
        ctx->pc = 0x1F1828u;
        goto label_1f1828;
    }
    ctx->pc = 0x1F1820u;
    {
        const bool branch_taken_0x1f1820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1820) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1828u;
label_1f1828:
    // 0x1f1828: 0xc07bd80  jal         func_1EF600
label_1f182c:
    if (ctx->pc == 0x1F182Cu) {
        ctx->pc = 0x1F182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1828u;
        // 0x1f182c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1830u;
        goto label_1f1830;
    }
    ctx->pc = 0x1F1828u;
    SET_GPR_U32(ctx, 31, 0x1F1830u);
    ctx->pc = 0x1F182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1828u;
    // 0x1f182c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F1828u, 0x1F1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1830u;
label_1f1830:
    // 0x1f1830: 0x1000fe9f  b           . + 4 + (-0x161 << 2)
label_1f1834:
    if (ctx->pc == 0x1F1834u) {
        ctx->pc = 0x1F1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1830u;
        // 0x1f1834: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1838u;
        goto label_1f1838;
    }
    ctx->pc = 0x1F1830u;
    {
        const bool branch_taken_0x1f1830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1830u;
        // 0x1f1834: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1830) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1838u;
label_1f1838:
    // 0x1f1838: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f183c:
    // 0x1f183c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1840:
    // 0x1f1840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1844:
    // 0x1f1844: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1848:
    // 0x1f1848: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f184c:
    // 0x1f184c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1850:
    // 0x1f1850: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f1850u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1854:
    // 0x1f1854: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1858:
    // 0x1f1858: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f185c:
    // 0x1f185c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1860:
    // 0x1f1860: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f1860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1864:
    // 0x1f1864: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1868:
    // 0x1f1868: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f186c:
    // 0x1f186c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1870:
    // 0x1f1870: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1f1870u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1874:
    // 0x1f1874: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1878:
    // 0x1f1878: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f187c:
    // 0x1f187c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f187cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1880:
    // 0x1f1880: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f1880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f1884:
    // 0x1f1884: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f1884u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1888:
    // 0x1f1888: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f188c:
    // 0x1f188c: 0x320f809  jalr        $t9
label_1f1890:
    if (ctx->pc == 0x1F1890u) {
        ctx->pc = 0x1F1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F188Cu;
        // 0x1f1890: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1894u;
        goto label_1f1894;
    }
    ctx->pc = 0x1F188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1894u);
        ctx->pc = 0x1F1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F188Cu;
        // 0x1f1890: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F188Cu, 0x1F1894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1894u;
label_1f1894:
    // 0x1f1894: 0x1000fe86  b           . + 4 + (-0x17A << 2)
label_1f1898:
    if (ctx->pc == 0x1F1898u) {
        ctx->pc = 0x1F189Cu;
        goto label_1f189c;
    }
    ctx->pc = 0x1F1894u;
    {
        const bool branch_taken_0x1f1894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1894) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F189Cu;
label_1f189c:
    // 0x1f189c: 0x0  nop
    ctx->pc = 0x1f189cu;
    // NOP
label_1f18a0:
    // 0x1f18a0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f18a4:
    // 0x1f18a4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f18a8:
    // 0x1f18a8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f18ac:
    // 0x1f18ac: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1f18acu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f18b0:
    // 0x1f18b0: 0xc07bd80  jal         func_1EF600
label_1f18b4:
    if (ctx->pc == 0x1F18B4u) {
        ctx->pc = 0x1F18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18B0u;
        // 0x1f18b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18B8u;
        goto label_1f18b8;
    }
    ctx->pc = 0x1F18B0u;
    SET_GPR_U32(ctx, 31, 0x1F18B8u);
    ctx->pc = 0x1F18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18B0u;
    // 0x1f18b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F18B0u, 0x1F18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18B8u;
label_1f18b8:
    // 0x1f18b8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f18bc:
    // 0x1f18bc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1f18bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f18c0:
    // 0x1f18c0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1f18c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1f18c4:
    // 0x1f18c4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f18c8:
    // 0x1f18c8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1f18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1f18cc:
    // 0x1f18cc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1f18ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f18d0:
    // 0x1f18d0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f18d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f18d4:
    // 0x1f18d4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f18d8:
    // 0x1f18d8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1f18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1f18dc:
    // 0x1f18dc: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1f18dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f18e0:
    // 0x1f18e0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f18e4:
    // 0x1f18e4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f18e8:
    // 0x1f18e8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1f18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1f18ec:
    // 0x1f18ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f18f0:
    if (ctx->pc == 0x1F18F0u) {
        ctx->pc = 0x1F18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18ECu;
        // 0x1f18f0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F18F4u;
        goto label_1f18f4;
    }
    ctx->pc = 0x1F18ECu;
    {
        const bool branch_taken_0x1f18ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18ECu;
        // 0x1f18f0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18ec) {
            ctx->pc = 0x1F1918u;
            goto label_1f1918;
        }
    }
    ctx->pc = 0x1F18F4u;
label_1f18f4:
    // 0x1f18f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1f18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_1f18f8:
    // 0x1f18f8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f18f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f18fc:
    // 0x1f18fc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1f18fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1f1900:
    // 0x1f1900: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1f1900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1f1904:
    // 0x1f1904: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1f1904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_1f1908:
    // 0x1f1908: 0xc063c70  jal         func_18F1C0
label_1f190c:
    if (ctx->pc == 0x1F190Cu) {
        ctx->pc = 0x1F190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1908u;
        // 0x1f190c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1910u;
        goto label_1f1910;
    }
    ctx->pc = 0x1F1908u;
    SET_GPR_U32(ctx, 31, 0x1F1910u);
    ctx->pc = 0x1F190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1908u;
    // 0x1f190c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x1F1908u, 0x1F1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1910u;
label_1f1910:
    // 0x1f1910: 0x1000fe67  b           . + 4 + (-0x199 << 2)
label_1f1914:
    if (ctx->pc == 0x1F1914u) {
        ctx->pc = 0x1F1918u;
        goto label_1f1918;
    }
    ctx->pc = 0x1F1910u;
    {
        const bool branch_taken_0x1f1910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1910) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1918u;
label_1f1918:
    // 0x1f1918: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1f1918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_1f191c:
    // 0x1f191c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f191cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1f1920:
    // 0x1f1920: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1f1920u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1f1924:
    // 0x1f1924: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x1f1924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1f1928:
    // 0x1f1928: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1f1928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_1f192c:
    // 0x1f192c: 0xc063cd0  jal         func_18F340
label_1f1930:
    if (ctx->pc == 0x1F1930u) {
        ctx->pc = 0x1F1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F192Cu;
        // 0x1f1930: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1934u;
        goto label_1f1934;
    }
    ctx->pc = 0x1F192Cu;
    SET_GPR_U32(ctx, 31, 0x1F1934u);
    ctx->pc = 0x1F1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F192Cu;
    // 0x1f1930: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x1F192Cu, 0x1F1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1934u;
label_1f1934:
    // 0x1f1934: 0x1000fe5e  b           . + 4 + (-0x1A2 << 2)
label_1f1938:
    if (ctx->pc == 0x1F1938u) {
        ctx->pc = 0x1F193Cu;
        goto label_1f193c;
    }
    ctx->pc = 0x1F1934u;
    {
        const bool branch_taken_0x1f1934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1934) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F193Cu;
label_1f193c:
    // 0x1f193c: 0x0  nop
    ctx->pc = 0x1f193cu;
    // NOP
label_1f1940:
    // 0x1f1940: 0xc07bd80  jal         func_1EF600
label_1f1944:
    if (ctx->pc == 0x1F1944u) {
        ctx->pc = 0x1F1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1940u;
        // 0x1f1944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1948u;
        goto label_1f1948;
    }
    ctx->pc = 0x1F1940u;
    SET_GPR_U32(ctx, 31, 0x1F1948u);
    ctx->pc = 0x1F1944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1940u;
    // 0x1f1944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F1940u, 0x1F1948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1948u;
label_1f1948:
    // 0x1f1948: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f1948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f194c:
    // 0x1f194c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1f1950:
    // 0x1f1950: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1954:
    // 0x1f1954: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f1958:
    // 0x1f1958: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1f1958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1f195c:
    // 0x1f195c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1f1960:
    // 0x1f1960: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1f1964:
    if (ctx->pc == 0x1F1964u) {
        ctx->pc = 0x1F1968u;
        goto label_1f1968;
    }
    ctx->pc = 0x1F1960u;
    {
        const bool branch_taken_0x1f1960 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1f1960) {
            ctx->pc = 0x1F1970u;
            goto label_1f1970;
        }
    }
    ctx->pc = 0x1F1968u;
label_1f1968:
    // 0x1f1968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f196c:
    // 0x1f196c: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x1f196cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
label_1f1970:
    // 0x1f1970: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1974:
    // 0x1f1974: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1978:
    // 0x1f1978: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f1978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f197c:
    // 0x1f197c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1f1980:
    if (ctx->pc == 0x1F1980u) {
        ctx->pc = 0x1F1984u;
        goto label_1f1984;
    }
    ctx->pc = 0x1F197Cu;
    {
        const bool branch_taken_0x1f197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f197c) {
            ctx->pc = 0x1F1998u;
            goto label_1f1998;
        }
    }
    ctx->pc = 0x1F1984u;
label_1f1984:
    // 0x1f1984: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f1984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1f1988:
    // 0x1f1988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f198c:
    // 0x1f198c: 0xc096974  jal         func_25A5D0
label_1f1990:
    if (ctx->pc == 0x1F1990u) {
        ctx->pc = 0x1F1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F198Cu;
        // 0x1f1990: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1994u;
        goto label_1f1994;
    }
    ctx->pc = 0x1F198Cu;
    SET_GPR_U32(ctx, 31, 0x1F1994u);
    ctx->pc = 0x1F1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F198Cu;
    // 0x1f1990: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x1F198Cu, 0x1F1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1994u;
label_1f1994:
    // 0x1f1994: 0xa2020037  sb          $v0, 0x37($s0)
    ctx->pc = 0x1f1994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
label_1f1998:
    // 0x1f1998: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1f199c:
    if (ctx->pc == 0x1F199Cu) {
        ctx->pc = 0x1F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1998u;
        // 0x1f199c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19A0u;
        goto label_1f19a0;
    }
    ctx->pc = 0x1F1998u;
    {
        const bool branch_taken_0x1f1998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1998u;
        // 0x1f199c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1998) {
            ctx->pc = 0x1F1C90u;
            goto label_1f1c90;
        }
    }
    ctx->pc = 0x1F19A0u;
label_1f19a0:
    // 0x1f19a0: 0xc07bd98  jal         func_1EF660
label_1f19a4:
    if (ctx->pc == 0x1F19A4u) {
        ctx->pc = 0x1F19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19A0u;
        // 0x1f19a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19A8u;
        goto label_1f19a8;
    }
    ctx->pc = 0x1F19A0u;
    SET_GPR_U32(ctx, 31, 0x1F19A8u);
    ctx->pc = 0x1F19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19A0u;
    // 0x1f19a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F19A0u, 0x1F19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19A8u;
label_1f19a8:
    // 0x1f19a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f19a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f19ac:
    // 0x1f19ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f19acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f19b0:
    // 0x1f19b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f19b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f19b4:
    // 0x1f19b4: 0xc07bd98  jal         func_1EF660
label_1f19b8:
    if (ctx->pc == 0x1F19B8u) {
        ctx->pc = 0x1F19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B4u;
        // 0x1f19b8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19BCu;
        goto label_1f19bc;
    }
    ctx->pc = 0x1F19B4u;
    SET_GPR_U32(ctx, 31, 0x1F19BCu);
    ctx->pc = 0x1F19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19B4u;
    // 0x1f19b8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F19B4u, 0x1F19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19BCu;
label_1f19bc:
    // 0x1f19bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f19bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f19c0:
    // 0x1f19c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f19c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f19c4:
    // 0x1f19c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f19c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f19c8:
    // 0x1f19c8: 0xc07bd98  jal         func_1EF660
label_1f19cc:
    if (ctx->pc == 0x1F19CCu) {
        ctx->pc = 0x1F19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19C8u;
        // 0x1f19cc: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19D0u;
        goto label_1f19d0;
    }
    ctx->pc = 0x1F19C8u;
    SET_GPR_U32(ctx, 31, 0x1F19D0u);
    ctx->pc = 0x1F19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19C8u;
    // 0x1f19cc: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F19C8u, 0x1F19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19D0u;
label_1f19d0:
    // 0x1f19d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f19d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f19d4:
    // 0x1f19d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f19d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f19d8:
    // 0x1f19d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f19d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f19dc:
    // 0x1f19dc: 0xc07bd98  jal         func_1EF660
label_1f19e0:
    if (ctx->pc == 0x1F19E0u) {
        ctx->pc = 0x1F19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19DCu;
        // 0x1f19e0: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19E4u;
        goto label_1f19e4;
    }
    ctx->pc = 0x1F19DCu;
    SET_GPR_U32(ctx, 31, 0x1F19E4u);
    ctx->pc = 0x1F19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19DCu;
    // 0x1f19e0: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F19DCu, 0x1F19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19E4u;
label_1f19e4:
    // 0x1f19e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f19e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f19e8:
    // 0x1f19e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f19e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f19ec:
    // 0x1f19ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f19ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f19f0:
    // 0x1f19f0: 0xc07bd98  jal         func_1EF660
label_1f19f4:
    if (ctx->pc == 0x1F19F4u) {
        ctx->pc = 0x1F19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19F0u;
        // 0x1f19f4: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F19F8u;
        goto label_1f19f8;
    }
    ctx->pc = 0x1F19F0u;
    SET_GPR_U32(ctx, 31, 0x1F19F8u);
    ctx->pc = 0x1F19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F19F0u;
    // 0x1f19f4: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F19F0u, 0x1F19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19F8u;
label_1f19f8:
    // 0x1f19f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f19f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f19fc:
    // 0x1f19fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f19fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a00:
    // 0x1f1a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f1a04:
    // 0x1f1a04: 0xc07bd98  jal         func_1EF660
label_1f1a08:
    if (ctx->pc == 0x1F1A08u) {
        ctx->pc = 0x1F1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A04u;
        // 0x1f1a08: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A0Cu;
        goto label_1f1a0c;
    }
    ctx->pc = 0x1F1A04u;
    SET_GPR_U32(ctx, 31, 0x1F1A0Cu);
    ctx->pc = 0x1F1A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A04u;
    // 0x1f1a08: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F1A04u, 0x1F1A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A0Cu;
label_1f1a0c:
    // 0x1f1a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1a10:
    // 0x1f1a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a14:
    // 0x1f1a14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f1a18:
    // 0x1f1a18: 0xc07bd8c  jal         func_1EF630
label_1f1a1c:
    if (ctx->pc == 0x1F1A1Cu) {
        ctx->pc = 0x1F1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A18u;
        // 0x1f1a1c: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A20u;
        goto label_1f1a20;
    }
    ctx->pc = 0x1F1A18u;
    SET_GPR_U32(ctx, 31, 0x1F1A20u);
    ctx->pc = 0x1F1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A18u;
    // 0x1f1a1c: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF630u, 0x1F1A18u, 0x1F1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A20u;
label_1f1a20:
    // 0x1f1a20: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1a24:
    // 0x1f1a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a28:
    // 0x1f1a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1a2c:
    // 0x1f1a2c: 0xc07bd80  jal         func_1EF600
label_1f1a30:
    if (ctx->pc == 0x1F1A30u) {
        ctx->pc = 0x1F1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A2Cu;
        // 0x1f1a30: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A34u;
        goto label_1f1a34;
    }
    ctx->pc = 0x1F1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A34u);
    ctx->pc = 0x1F1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A2Cu;
    // 0x1f1a30: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F1A2Cu, 0x1F1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A34u;
label_1f1a34:
    // 0x1f1a34: 0x1000fe1e  b           . + 4 + (-0x1E2 << 2)
label_1f1a38:
    if (ctx->pc == 0x1F1A38u) {
        ctx->pc = 0x1F1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A34u;
        // 0x1f1a38: 0xa602004c  sh          $v0, 0x4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A3Cu;
        goto label_1f1a3c;
    }
    ctx->pc = 0x1F1A34u;
    {
        const bool branch_taken_0x1f1a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A34u;
        // 0x1f1a38: 0xa602004c  sh          $v0, 0x4C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a34) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1A3Cu;
label_1f1a3c:
    // 0x1f1a3c: 0x0  nop
    ctx->pc = 0x1f1a3cu;
    // NOP
label_1f1a40:
    // 0x1f1a40: 0xc07bd8c  jal         func_1EF630
label_1f1a44:
    if (ctx->pc == 0x1F1A44u) {
        ctx->pc = 0x1F1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A40u;
        // 0x1f1a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A48u;
        goto label_1f1a48;
    }
    ctx->pc = 0x1F1A40u;
    SET_GPR_U32(ctx, 31, 0x1F1A48u);
    ctx->pc = 0x1F1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A40u;
    // 0x1f1a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF630u, 0x1F1A40u, 0x1F1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A48u;
label_1f1a48:
    // 0x1f1a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1a4c:
    // 0x1f1a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a50:
    // 0x1f1a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f1a54:
    // 0x1f1a54: 0xc07bd8c  jal         func_1EF630
label_1f1a58:
    if (ctx->pc == 0x1F1A58u) {
        ctx->pc = 0x1F1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A54u;
        // 0x1f1a58: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A5Cu;
        goto label_1f1a5c;
    }
    ctx->pc = 0x1F1A54u;
    SET_GPR_U32(ctx, 31, 0x1F1A5Cu);
    ctx->pc = 0x1F1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A54u;
    // 0x1f1a58: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF630u, 0x1F1A54u, 0x1F1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A5Cu;
label_1f1a5c:
    // 0x1f1a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1a60:
    // 0x1f1a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a64:
    // 0x1f1a64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f1a68:
    // 0x1f1a68: 0xc07bd8c  jal         func_1EF630
label_1f1a6c:
    if (ctx->pc == 0x1F1A6Cu) {
        ctx->pc = 0x1F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A68u;
        // 0x1f1a6c: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A70u;
        goto label_1f1a70;
    }
    ctx->pc = 0x1F1A68u;
    SET_GPR_U32(ctx, 31, 0x1F1A70u);
    ctx->pc = 0x1F1A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A68u;
    // 0x1f1a6c: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF630u, 0x1F1A68u, 0x1F1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A70u;
label_1f1a70:
    // 0x1f1a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1a74:
    // 0x1f1a74: 0x0  nop
    ctx->pc = 0x1f1a74u;
    // NOP
label_1f1a78:
    // 0x1f1a78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f1a7c:
    // 0x1f1a7c: 0x1000fe0c  b           . + 4 + (-0x1F4 << 2)
label_1f1a80:
    if (ctx->pc == 0x1F1A80u) {
        ctx->pc = 0x1F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A7Cu;
        // 0x1f1a80: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1A84u;
        goto label_1f1a84;
    }
    ctx->pc = 0x1F1A7Cu;
    {
        const bool branch_taken_0x1f1a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A7Cu;
        // 0x1f1a80: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a7c) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1A84u;
label_1f1a84:
    // 0x1f1a84: 0x0  nop
    ctx->pc = 0x1f1a84u;
    // NOP
label_1f1a88:
    // 0x1f1a88: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1a8c:
    // 0x1f1a8c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1a90:
    // 0x1f1a90: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1a94:
    // 0x1f1a94: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x1f1a94u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1a98:
    // 0x1f1a98: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1a9c:
    // 0x1f1a9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1aa0:
    // 0x1f1aa0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1aa4:
    // 0x1f1aa4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1f1aa4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1aa8:
    // 0x1f1aa8: 0xc07bd80  jal         func_1EF600
label_1f1aac:
    if (ctx->pc == 0x1F1AACu) {
        ctx->pc = 0x1F1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AA8u;
        // 0x1f1aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AB0u;
        goto label_1f1ab0;
    }
    ctx->pc = 0x1F1AA8u;
    SET_GPR_U32(ctx, 31, 0x1F1AB0u);
    ctx->pc = 0x1F1AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1AA8u;
    // 0x1f1aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F1AA8u, 0x1F1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AB0u;
label_1f1ab0:
    // 0x1f1ab0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1ab4:
    // 0x1f1ab4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1f1ab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f1ab8:
    // 0x1f1ab8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1abc:
    // 0x1f1abc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f1abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ac0:
    // 0x1f1ac0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1ac4:
    // 0x1f1ac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f1ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ac8:
    // 0x1f1ac8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1acc:
    // 0x1f1acc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1ad0:
    // 0x1f1ad0: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f1ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f1ad4:
    // 0x1f1ad4: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f1ad4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1ad8:
    // 0x1f1ad8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f1ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f1adc:
    // 0x1f1adc: 0x320f809  jalr        $t9
label_1f1ae0:
    if (ctx->pc == 0x1F1AE0u) {
        ctx->pc = 0x1F1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ADCu;
        // 0x1f1ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AE4u;
        goto label_1f1ae4;
    }
    ctx->pc = 0x1F1ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1AE4u);
        ctx->pc = 0x1F1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ADCu;
        // 0x1f1ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1ADCu, 0x1F1AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1AE4u;
label_1f1ae4:
    // 0x1f1ae4: 0x1000fdf2  b           . + 4 + (-0x20E << 2)
label_1f1ae8:
    if (ctx->pc == 0x1F1AE8u) {
        ctx->pc = 0x1F1AECu;
        goto label_1f1aec;
    }
    ctx->pc = 0x1F1AE4u;
    {
        const bool branch_taken_0x1f1ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ae4) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1AECu;
label_1f1aec:
    // 0x1f1aec: 0x0  nop
    ctx->pc = 0x1f1aecu;
    // NOP
label_1f1af0:
    // 0x1f1af0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1af4:
    // 0x1f1af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1af8:
    // 0x1f1af8: 0x1000fded  b           . + 4 + (-0x213 << 2)
label_1f1afc:
    if (ctx->pc == 0x1F1AFCu) {
        ctx->pc = 0x1F1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF8u;
        // 0x1f1afc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B00u;
        goto label_1f1b00;
    }
    ctx->pc = 0x1F1AF8u;
    {
        const bool branch_taken_0x1f1af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF8u;
        // 0x1f1afc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1af8) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1B00u;
label_1f1b00:
    // 0x1f1b00: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1b04:
    // 0x1f1b04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1b08:
    // 0x1f1b08: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1b0c:
    // 0x1f1b0c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f1b0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1b10:
    // 0x1f1b10: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1b14:
    // 0x1f1b14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1b18:
    // 0x1f1b18: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1b1c:
    // 0x1f1b1c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x1f1b1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1b20:
    // 0x1f1b20: 0xc07c0b0  jal         func_1F02C0
label_1f1b24:
    if (ctx->pc == 0x1F1B24u) {
        ctx->pc = 0x1F1B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B20u;
        // 0x1f1b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B28u;
        goto label_1f1b28;
    }
    ctx->pc = 0x1F1B20u;
    SET_GPR_U32(ctx, 31, 0x1F1B28u);
    ctx->pc = 0x1F1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B20u;
    // 0x1f1b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F02C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F02C0u, 0x1F1B20u, 0x1F1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B28u;
label_1f1b28:
    // 0x1f1b28: 0x1000fde1  b           . + 4 + (-0x21F << 2)
label_1f1b2c:
    if (ctx->pc == 0x1F1B2Cu) {
        ctx->pc = 0x1F1B30u;
        goto label_1f1b30;
    }
    ctx->pc = 0x1F1B28u;
    {
        const bool branch_taken_0x1f1b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b28) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1B30u;
label_1f1b30:
    // 0x1f1b30: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1b34:
    // 0x1f1b34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1b38:
    // 0x1f1b38: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1b38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1b3c:
    // 0x1f1b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1b40:
    // 0x1f1b40: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1b44:
    // 0x1f1b44: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1b48:
    // 0x1f1b48: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1b4c:
    // 0x1f1b4c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1b50:
    // 0x1f1b50: 0x9422a3c6  lhu         $v0, -0x5C3A($at)
    ctx->pc = 0x1f1b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943686)));
label_1f1b54:
    // 0x1f1b54: 0x1440fdd6  bnez        $v0, . + 4 + (-0x22A << 2)
label_1f1b58:
    if (ctx->pc == 0x1F1B58u) {
        ctx->pc = 0x1F1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B54u;
        // 0x1f1b58: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B5Cu;
        goto label_1f1b5c;
    }
    ctx->pc = 0x1F1B54u;
    {
        const bool branch_taken_0x1f1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B54u;
        // 0x1f1b58: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b54) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1B5Cu;
label_1f1b5c:
    // 0x1f1b5c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f1b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1f1b60:
    // 0x1f1b60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1b64:
    // 0x1f1b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f1b68:
    // 0x1f1b68: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1b68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1b6c:
    // 0x1f1b6c: 0x1000fdd0  b           . + 4 + (-0x230 << 2)
label_1f1b70:
    if (ctx->pc == 0x1F1B70u) {
        ctx->pc = 0x1F1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B6Cu;
        // 0x1f1b70: 0xa422a3c6  sh          $v0, -0x5C3A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943686), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B74u;
        goto label_1f1b74;
    }
    ctx->pc = 0x1F1B6Cu;
    {
        const bool branch_taken_0x1f1b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B6Cu;
        // 0x1f1b70: 0xa422a3c6  sh          $v0, -0x5C3A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943686), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b6c) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1B74u;
label_1f1b74:
    // 0x1f1b74: 0x0  nop
    ctx->pc = 0x1f1b74u;
    // NOP
label_1f1b78:
    // 0x1f1b78: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1b7c:
    // 0x1f1b7c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1f1b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_1f1b80:
    // 0x1f1b80: 0x2484e080  addiu       $a0, $a0, -0x1F80
    ctx->pc = 0x1f1b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
label_1f1b84:
    // 0x1f1b84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1b88:
    // 0x1f1b88: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1b8c:
    // 0x1f1b8c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1f1b8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1b90:
    // 0x1f1b90: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1b94:
    // 0x1f1b94: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1b98:
    // 0x1f1b98: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1b9c:
    // 0x1f1b9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f1b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1ba0:
    // 0x1f1ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f1ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f1ba4:
    // 0x1f1ba4: 0xc0c0e54  jal         func_303950
label_1f1ba8:
    if (ctx->pc == 0x1F1BA8u) {
        ctx->pc = 0x1F1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BA4u;
        // 0x1f1ba8: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BACu;
        goto label_1f1bac;
    }
    ctx->pc = 0x1F1BA4u;
    SET_GPR_U32(ctx, 31, 0x1F1BACu);
    ctx->pc = 0x1F1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BA4u;
    // 0x1f1ba8: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x303950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303950u, 0x1F1BA4u, 0x1F1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BACu;
label_1f1bac:
    // 0x1f1bac: 0x1000fdc0  b           . + 4 + (-0x240 << 2)
label_1f1bb0:
    if (ctx->pc == 0x1F1BB0u) {
        ctx->pc = 0x1F1BB4u;
        goto label_1f1bb4;
    }
    ctx->pc = 0x1F1BACu;
    {
        const bool branch_taken_0x1f1bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1bac) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1BB4u;
label_1f1bb4:
    // 0x1f1bb4: 0x0  nop
    ctx->pc = 0x1f1bb4u;
    // NOP
label_1f1bb8:
    // 0x1f1bb8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1bbc:
    // 0x1f1bbc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f1bc0:
    // 0x1f1bc0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f1bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f1bc4:
    // 0x1f1bc4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1f1bc4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f1bc8:
    // 0x1f1bc8: 0xc07bd98  jal         func_1EF660
label_1f1bcc:
    if (ctx->pc == 0x1F1BCCu) {
        ctx->pc = 0x1F1BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BC8u;
        // 0x1f1bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BD0u;
        goto label_1f1bd0;
    }
    ctx->pc = 0x1F1BC8u;
    SET_GPR_U32(ctx, 31, 0x1F1BD0u);
    ctx->pc = 0x1F1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BC8u;
    // 0x1f1bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F1BC8u, 0x1F1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BD0u;
label_1f1bd0:
    // 0x1f1bd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f1bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1bd4:
    // 0x1f1bd4: 0xc07bd98  jal         func_1EF660
label_1f1bd8:
    if (ctx->pc == 0x1F1BD8u) {
        ctx->pc = 0x1F1BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BD4u;
        // 0x1f1bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BDCu;
        goto label_1f1bdc;
    }
    ctx->pc = 0x1F1BD4u;
    SET_GPR_U32(ctx, 31, 0x1F1BDCu);
    ctx->pc = 0x1F1BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BD4u;
    // 0x1f1bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1F1BD4u, 0x1F1BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BDCu;
label_1f1bdc:
    // 0x1f1bdc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1be0:
    // 0x1f1be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1be4:
    // 0x1f1be4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1be4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1be8:
    // 0x1f1be8: 0x8c22a3cc  lw          $v0, -0x5C34($at)
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f1bec:
    // 0x1f1bec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1f1bf0:
    if (ctx->pc == 0x1F1BF0u) {
        ctx->pc = 0x1F1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BECu;
        // 0x1f1bf0: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1BF4u;
        goto label_1f1bf4;
    }
    ctx->pc = 0x1F1BECu;
    {
        const bool branch_taken_0x1f1bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BECu;
        // 0x1f1bf0: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bec) {
            ctx->pc = 0x1F1C10u;
            goto label_1f1c10;
        }
    }
    ctx->pc = 0x1F1BF4u;
label_1f1bf4:
    // 0x1f1bf4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f1bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f1bf8:
    // 0x1f1bf8: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
label_1f1bfc:
    // 0x1f1bfc: 0xc0692d8  jal         func_1A4B60
label_1f1c00:
    if (ctx->pc == 0x1F1C00u) {
        ctx->pc = 0x1F1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BFCu;
        // 0x1f1c00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C04u;
        goto label_1f1c04;
    }
    ctx->pc = 0x1F1BFCu;
    SET_GPR_U32(ctx, 31, 0x1F1C04u);
    ctx->pc = 0x1F1C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1BFCu;
    // 0x1f1c00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1F1BFCu, 0x1F1C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C04u;
label_1f1c04:
    // 0x1f1c04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1c08:
    // 0x1f1c08: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1c08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1c0c:
    // 0x1f1c0c: 0xac22a3cc  sw          $v0, -0x5C34($at)
    ctx->pc = 0x1f1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 2));
label_1f1c10:
    // 0x1f1c10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1c14:
    // 0x1f1c14: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1c14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1c18:
    // 0x1f1c18: 0x8c26a3cc  lw          $a2, -0x5C34($at)
    ctx->pc = 0x1f1c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f1c1c:
    // 0x1f1c1c: 0x10c0fda4  beqz        $a2, . + 4 + (-0x25C << 2)
label_1f1c20:
    if (ctx->pc == 0x1F1C20u) {
        ctx->pc = 0x1F1C24u;
        goto label_1f1c24;
    }
    ctx->pc = 0x1F1C1Cu;
    {
        const bool branch_taken_0x1f1c1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1c1c) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1C24u;
label_1f1c24:
    // 0x1f1c24: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1f1c24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f1c28:
    // 0x1f1c28: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1f1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_1f1c2c:
    // 0x1f1c2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1c30:
    // 0x1f1c30: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x1f1c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1f1c34:
    // 0x1f1c34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f1c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f1c38:
    // 0x1f1c38: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1c38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1c3c:
    // 0x1f1c3c: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f1c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1f1c40:
    // 0x1f1c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1c44:
    // 0x1f1c44: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1f1c44u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1c48:
    // 0x1f1c48: 0x0  nop
    ctx->pc = 0x1f1c48u;
    // NOP
label_1f1c4c:
    // 0x1f1c4c: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x1f1c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_1f1c50:
    // 0x1f1c50: 0x8c22a3cc  lw          $v0, -0x5C34($at)
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f1c54:
    // 0x1f1c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f1c58:
    // 0x1f1c58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1c5c:
    // 0x1f1c5c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f1c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1f1c60:
    // 0x1f1c60: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1c64:
    // 0x1f1c64: 0x8c22a3cc  lw          $v0, -0x5C34($at)
    ctx->pc = 0x1f1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f1c68:
    // 0x1f1c68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1c6c:
    // 0x1f1c6c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1f1c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_1f1c70:
    // 0x1f1c70: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1c70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1c74:
    // 0x1f1c74: 0x8c22a3cc  lw          $v0, -0x5C34($at)
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f1c78:
    // 0x1f1c78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1c7c:
    // 0x1f1c7c: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1f1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1f1c80:
    // 0x1f1c80: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1c80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1c84:
    // 0x1f1c84: 0x8c22a3cc  lw          $v0, -0x5C34($at)
    ctx->pc = 0x1f1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f1c88:
    // 0x1f1c88: 0x1000fd89  b           . + 4 + (-0x277 << 2)
label_1f1c8c:
    if (ctx->pc == 0x1F1C8Cu) {
        ctx->pc = 0x1F1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C88u;
        // 0x1f1c8c: 0xa0430003  sb          $v1, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C90u;
        goto label_1f1c90;
    }
    ctx->pc = 0x1F1C88u;
    {
        const bool branch_taken_0x1f1c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C88u;
        // 0x1f1c8c: 0xa0430003  sb          $v1, 0x3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c88) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1C90u;
label_1f1c90:
    // 0x1f1c90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f1c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1c94:
    // 0x1f1c94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1c94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1c98:
    // 0x1f1c98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1c9c:
    // 0x1f1c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1ca0:
    // 0x1f1ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1ca4:
    // 0x1f1ca4: 0x3e00008  jr          $ra
label_1f1ca8:
    if (ctx->pc == 0x1F1CA8u) {
        ctx->pc = 0x1F1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CA4u;
        // 0x1f1ca8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1CACu;
        goto label_fallthrough_0x1f1ca4;
    }
    ctx->pc = 0x1F1CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CA4u;
        // 0x1f1ca8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f1ca4:
    ctx->pc = 0x1F1CACu;
}
