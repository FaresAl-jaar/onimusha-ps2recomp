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

// Function: sub_001F2050
// Address: 0x1f2050 - 0x1f2328
void sub_001F2050_0x1f2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2050_0x1f2050");
#endif

    switch (ctx->pc) {
        case 0x1f2050u: goto label_1f2050;
        case 0x1f2054u: goto label_1f2054;
        case 0x1f2058u: goto label_1f2058;
        case 0x1f205cu: goto label_1f205c;
        case 0x1f2060u: goto label_1f2060;
        case 0x1f2064u: goto label_1f2064;
        case 0x1f2068u: goto label_1f2068;
        case 0x1f206cu: goto label_1f206c;
        case 0x1f2070u: goto label_1f2070;
        case 0x1f2074u: goto label_1f2074;
        case 0x1f2078u: goto label_1f2078;
        case 0x1f207cu: goto label_1f207c;
        case 0x1f2080u: goto label_1f2080;
        case 0x1f2084u: goto label_1f2084;
        case 0x1f2088u: goto label_1f2088;
        case 0x1f208cu: goto label_1f208c;
        case 0x1f2090u: goto label_1f2090;
        case 0x1f2094u: goto label_1f2094;
        case 0x1f2098u: goto label_1f2098;
        case 0x1f209cu: goto label_1f209c;
        case 0x1f20a0u: goto label_1f20a0;
        case 0x1f20a4u: goto label_1f20a4;
        case 0x1f20a8u: goto label_1f20a8;
        case 0x1f20acu: goto label_1f20ac;
        case 0x1f20b0u: goto label_1f20b0;
        case 0x1f20b4u: goto label_1f20b4;
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f20bcu: goto label_1f20bc;
        case 0x1f20c0u: goto label_1f20c0;
        case 0x1f20c4u: goto label_1f20c4;
        case 0x1f20c8u: goto label_1f20c8;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f20d0u: goto label_1f20d0;
        case 0x1f20d4u: goto label_1f20d4;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20dcu: goto label_1f20dc;
        case 0x1f20e0u: goto label_1f20e0;
        case 0x1f20e4u: goto label_1f20e4;
        case 0x1f20e8u: goto label_1f20e8;
        case 0x1f20ecu: goto label_1f20ec;
        case 0x1f20f0u: goto label_1f20f0;
        case 0x1f20f4u: goto label_1f20f4;
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f20fcu: goto label_1f20fc;
        case 0x1f2100u: goto label_1f2100;
        case 0x1f2104u: goto label_1f2104;
        case 0x1f2108u: goto label_1f2108;
        case 0x1f210cu: goto label_1f210c;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2114u: goto label_1f2114;
        case 0x1f2118u: goto label_1f2118;
        case 0x1f211cu: goto label_1f211c;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2124u: goto label_1f2124;
        case 0x1f2128u: goto label_1f2128;
        case 0x1f212cu: goto label_1f212c;
        case 0x1f2130u: goto label_1f2130;
        case 0x1f2134u: goto label_1f2134;
        case 0x1f2138u: goto label_1f2138;
        case 0x1f213cu: goto label_1f213c;
        case 0x1f2140u: goto label_1f2140;
        case 0x1f2144u: goto label_1f2144;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f214cu: goto label_1f214c;
        case 0x1f2150u: goto label_1f2150;
        case 0x1f2154u: goto label_1f2154;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f215cu: goto label_1f215c;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2164u: goto label_1f2164;
        case 0x1f2168u: goto label_1f2168;
        case 0x1f216cu: goto label_1f216c;
        case 0x1f2170u: goto label_1f2170;
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2178u: goto label_1f2178;
        case 0x1f217cu: goto label_1f217c;
        case 0x1f2180u: goto label_1f2180;
        case 0x1f2184u: goto label_1f2184;
        case 0x1f2188u: goto label_1f2188;
        case 0x1f218cu: goto label_1f218c;
        case 0x1f2190u: goto label_1f2190;
        case 0x1f2194u: goto label_1f2194;
        case 0x1f2198u: goto label_1f2198;
        case 0x1f219cu: goto label_1f219c;
        case 0x1f21a0u: goto label_1f21a0;
        case 0x1f21a4u: goto label_1f21a4;
        case 0x1f21a8u: goto label_1f21a8;
        case 0x1f21acu: goto label_1f21ac;
        case 0x1f21b0u: goto label_1f21b0;
        case 0x1f21b4u: goto label_1f21b4;
        case 0x1f21b8u: goto label_1f21b8;
        case 0x1f21bcu: goto label_1f21bc;
        case 0x1f21c0u: goto label_1f21c0;
        case 0x1f21c4u: goto label_1f21c4;
        case 0x1f21c8u: goto label_1f21c8;
        case 0x1f21ccu: goto label_1f21cc;
        case 0x1f21d0u: goto label_1f21d0;
        case 0x1f21d4u: goto label_1f21d4;
        case 0x1f21d8u: goto label_1f21d8;
        case 0x1f21dcu: goto label_1f21dc;
        case 0x1f21e0u: goto label_1f21e0;
        case 0x1f21e4u: goto label_1f21e4;
        case 0x1f21e8u: goto label_1f21e8;
        case 0x1f21ecu: goto label_1f21ec;
        case 0x1f21f0u: goto label_1f21f0;
        case 0x1f21f4u: goto label_1f21f4;
        case 0x1f21f8u: goto label_1f21f8;
        case 0x1f21fcu: goto label_1f21fc;
        case 0x1f2200u: goto label_1f2200;
        case 0x1f2204u: goto label_1f2204;
        case 0x1f2208u: goto label_1f2208;
        case 0x1f220cu: goto label_1f220c;
        case 0x1f2210u: goto label_1f2210;
        case 0x1f2214u: goto label_1f2214;
        case 0x1f2218u: goto label_1f2218;
        case 0x1f221cu: goto label_1f221c;
        case 0x1f2220u: goto label_1f2220;
        case 0x1f2224u: goto label_1f2224;
        case 0x1f2228u: goto label_1f2228;
        case 0x1f222cu: goto label_1f222c;
        case 0x1f2230u: goto label_1f2230;
        case 0x1f2234u: goto label_1f2234;
        case 0x1f2238u: goto label_1f2238;
        case 0x1f223cu: goto label_1f223c;
        case 0x1f2240u: goto label_1f2240;
        case 0x1f2244u: goto label_1f2244;
        case 0x1f2248u: goto label_1f2248;
        case 0x1f224cu: goto label_1f224c;
        case 0x1f2250u: goto label_1f2250;
        case 0x1f2254u: goto label_1f2254;
        case 0x1f2258u: goto label_1f2258;
        case 0x1f225cu: goto label_1f225c;
        case 0x1f2260u: goto label_1f2260;
        case 0x1f2264u: goto label_1f2264;
        case 0x1f2268u: goto label_1f2268;
        case 0x1f226cu: goto label_1f226c;
        case 0x1f2270u: goto label_1f2270;
        case 0x1f2274u: goto label_1f2274;
        case 0x1f2278u: goto label_1f2278;
        case 0x1f227cu: goto label_1f227c;
        case 0x1f2280u: goto label_1f2280;
        case 0x1f2284u: goto label_1f2284;
        case 0x1f2288u: goto label_1f2288;
        case 0x1f228cu: goto label_1f228c;
        case 0x1f2290u: goto label_1f2290;
        case 0x1f2294u: goto label_1f2294;
        case 0x1f2298u: goto label_1f2298;
        case 0x1f229cu: goto label_1f229c;
        case 0x1f22a0u: goto label_1f22a0;
        case 0x1f22a4u: goto label_1f22a4;
        case 0x1f22a8u: goto label_1f22a8;
        case 0x1f22acu: goto label_1f22ac;
        case 0x1f22b0u: goto label_1f22b0;
        case 0x1f22b4u: goto label_1f22b4;
        case 0x1f22b8u: goto label_1f22b8;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c0u: goto label_1f22c0;
        case 0x1f22c4u: goto label_1f22c4;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22ccu: goto label_1f22cc;
        case 0x1f22d0u: goto label_1f22d0;
        case 0x1f22d4u: goto label_1f22d4;
        case 0x1f22d8u: goto label_1f22d8;
        case 0x1f22dcu: goto label_1f22dc;
        case 0x1f22e0u: goto label_1f22e0;
        case 0x1f22e4u: goto label_1f22e4;
        case 0x1f22e8u: goto label_1f22e8;
        case 0x1f22ecu: goto label_1f22ec;
        case 0x1f22f0u: goto label_1f22f0;
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f22f8u: goto label_1f22f8;
        case 0x1f22fcu: goto label_1f22fc;
        case 0x1f2300u: goto label_1f2300;
        case 0x1f2304u: goto label_1f2304;
        case 0x1f2308u: goto label_1f2308;
        case 0x1f230cu: goto label_1f230c;
        case 0x1f2310u: goto label_1f2310;
        case 0x1f2314u: goto label_1f2314;
        case 0x1f2318u: goto label_1f2318;
        case 0x1f231cu: goto label_1f231c;
        case 0x1f2320u: goto label_1f2320;
        case 0x1f2324u: goto label_1f2324;
        default: break;
    }

    ctx->pc = 0x1f2050u;

label_1f2050:
    // 0x1f2050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f2054:
    // 0x1f2054: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2058:
    // 0x1f2058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f2058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f205c:
    // 0x1f205c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f205cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1f2060:
    // 0x1f2060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f2064:
    // 0x1f2064: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1f2064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f2068:
    // 0x1f2068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f206c:
    // 0x1f206c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f206cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2070:
    // 0x1f2070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2074:
    // 0x1f2074: 0x9424a3d6  lhu         $a0, -0x5C2A($at)
    ctx->pc = 0x1f2074u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f2078:
    // 0x1f2078: 0x108300a5  beq         $a0, $v1, . + 4 + (0xA5 << 2)
label_1f207c:
    if (ctx->pc == 0x1F207Cu) {
        ctx->pc = 0x1F2080u;
        goto label_1f2080;
    }
    ctx->pc = 0x1F2078u;
    {
        const bool branch_taken_0x1f2078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f2078) {
            ctx->pc = 0x1F2310u;
            goto label_1f2310;
        }
    }
    ctx->pc = 0x1F2080u;
label_1f2080:
    // 0x1f2080: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2084:
    // 0x1f2084: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x1f2084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_1f2088:
    // 0x1f2088: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f2088u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f208c:
    // 0x1f208c: 0xa422a3d6  sh          $v0, -0x5C2A($at)
    ctx->pc = 0x1f208cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 2));
label_1f2090:
    // 0x1f2090: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2094:
    // 0x1f2094: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f2098:
    // 0x1f2098: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f2098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f209c:
    // 0x1f209c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f209cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f20a0:
    // 0x1f20a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f20a4:
    if (ctx->pc == 0x1F20A4u) {
        ctx->pc = 0x1F20A8u;
        goto label_1f20a8;
    }
    ctx->pc = 0x1F20A0u;
    {
        const bool branch_taken_0x1f20a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f20a0) {
            ctx->pc = 0x1F20C8u;
            goto label_1f20c8;
        }
    }
    ctx->pc = 0x1F20A8u;
label_1f20a8:
    // 0x1f20a8: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x1f20a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_1f20ac:
    // 0x1f20ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f20b0:
    // 0x1f20b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1f20b4:
    if (ctx->pc == 0x1F20B4u) {
        ctx->pc = 0x1F20B8u;
        goto label_1f20b8;
    }
    ctx->pc = 0x1F20B0u;
    {
        const bool branch_taken_0x1f20b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f20b0) {
            ctx->pc = 0x1F20C8u;
            goto label_1f20c8;
        }
    }
    ctx->pc = 0x1F20B8u;
label_1f20b8:
    // 0x1f20b8: 0x97828824  lhu         $v0, -0x77DC($gp)
    ctx->pc = 0x1f20b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936612)));
label_1f20bc:
    // 0x1f20bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f20c0:
    // 0x1f20c0: 0xa7828824  sh          $v0, -0x77DC($gp)
    ctx->pc = 0x1f20c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936612), (uint16_t)GPR_U32(ctx, 2));
label_1f20c4:
    // 0x1f20c4: 0x0  nop
    ctx->pc = 0x1f20c4u;
    // NOP
label_1f20c8:
    // 0x1f20c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f20c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f20cc:
    // 0x1f20cc: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f20ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f20d0:
    // 0x1f20d0: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f20d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f20d4:
    // 0x1f20d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f20d8:
    // 0x1f20d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f20dc:
    if (ctx->pc == 0x1F20DCu) {
        ctx->pc = 0x1F20E0u;
        goto label_1f20e0;
    }
    ctx->pc = 0x1F20D8u;
    {
        const bool branch_taken_0x1f20d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f20d8) {
            ctx->pc = 0x1F20F0u;
            goto label_1f20f0;
        }
    }
    ctx->pc = 0x1F20E0u;
label_1f20e0:
    // 0x1f20e0: 0x97828820  lhu         $v0, -0x77E0($gp)
    ctx->pc = 0x1f20e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936608)));
label_1f20e4:
    // 0x1f20e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f20e8:
    // 0x1f20e8: 0xa7828820  sh          $v0, -0x77E0($gp)
    ctx->pc = 0x1f20e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936608), (uint16_t)GPR_U32(ctx, 2));
label_1f20ec:
    // 0x1f20ec: 0x0  nop
    ctx->pc = 0x1f20ecu;
    // NOP
label_1f20f0:
    // 0x1f20f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f20f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f20f4:
    // 0x1f20f4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f20f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f20f8:
    // 0x1f20f8: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f20f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f20fc:
    // 0x1f20fc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1f20fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1f2100:
    // 0x1f2100: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f2104:
    if (ctx->pc == 0x1F2104u) {
        ctx->pc = 0x1F2108u;
        goto label_1f2108;
    }
    ctx->pc = 0x1F2100u;
    {
        const bool branch_taken_0x1f2100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2100) {
            ctx->pc = 0x1F2130u;
            goto label_1f2130;
        }
    }
    ctx->pc = 0x1F2108u;
label_1f2108:
    // 0x1f2108: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1f2108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_1f210c:
    // 0x1f210c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_1f2110:
    // 0x1f2110: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x1f2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_1f2114:
    // 0x1f2114: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1f2118:
    // 0x1f2118: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x1f2118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
label_1f211c:
    // 0x1f211c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f211cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2120:
    // 0x1f2120: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1f2124:
    // 0x1f2124: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1f2124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_1f2128:
    // 0x1f2128: 0xc0ce66c  jal         func_3399B0
label_1f212c:
    if (ctx->pc == 0x1F212Cu) {
        ctx->pc = 0x1F212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2128u;
        // 0x1f212c: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2130u;
        goto label_1f2130;
    }
    ctx->pc = 0x1F2128u;
    SET_GPR_U32(ctx, 31, 0x1F2130u);
    ctx->pc = 0x1F212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2128u;
    // 0x1f212c: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3399B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3399B0u, 0x1F2128u, 0x1F2130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2130u;
label_1f2130:
    // 0x1f2130: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2134:
    // 0x1f2134: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f2138:
    // 0x1f2138: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f2138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f213c:
    // 0x1f213c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1f213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1f2140:
    // 0x1f2140: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f2144:
    if (ctx->pc == 0x1F2144u) {
        ctx->pc = 0x1F2148u;
        goto label_1f2148;
    }
    ctx->pc = 0x1F2140u;
    {
        const bool branch_taken_0x1f2140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2140) {
            ctx->pc = 0x1F2170u;
            goto label_1f2170;
        }
    }
    ctx->pc = 0x1F2148u;
label_1f2148:
    // 0x1f2148: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f214c:
    // 0x1f214c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_1f2150:
    // 0x1f2150: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f2150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f2154:
    // 0x1f2154: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1f2154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1f2158:
    // 0x1f2158: 0x8c25a3c0  lw          $a1, -0x5C40($at)
    ctx->pc = 0x1f2158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943680)));
label_1f215c:
    // 0x1f215c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f215cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2160:
    // 0x1f2160: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x1f2160u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_1f2164:
    // 0x1f2164: 0xc0cea54  jal         func_33A950
label_1f2168:
    if (ctx->pc == 0x1F2168u) {
        ctx->pc = 0x1F2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2164u;
        // 0x1f2168: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F216Cu;
        goto label_1f216c;
    }
    ctx->pc = 0x1F2164u;
    SET_GPR_U32(ctx, 31, 0x1F216Cu);
    ctx->pc = 0x1F2168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2164u;
    // 0x1f2168: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A950u, 0x1F2164u, 0x1F216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F216Cu;
label_1f216c:
    // 0x1f216c: 0x0  nop
    ctx->pc = 0x1f216cu;
    // NOP
label_1f2170:
    // 0x1f2170: 0x8f828834  lw          $v0, -0x77CC($gp)
    ctx->pc = 0x1f2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936628)));
label_1f2174:
    // 0x1f2174: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
label_1f2178:
    if (ctx->pc == 0x1F2178u) {
        ctx->pc = 0x1F217Cu;
        goto label_1f217c;
    }
    ctx->pc = 0x1F2174u;
    {
        const bool branch_taken_0x1f2174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1f2174) {
            ctx->pc = 0x1F21A0u;
            goto label_1f21a0;
        }
    }
    ctx->pc = 0x1F217Cu;
label_1f217c:
    // 0x1f217c: 0x97828830  lhu         $v0, -0x77D0($gp)
    ctx->pc = 0x1f217cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936624)));
label_1f2180:
    // 0x1f2180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f2184:
    if (ctx->pc == 0x1F2184u) {
        ctx->pc = 0x1F2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2180u;
        // 0x1f2184: 0xaf808834  sw          $zero, -0x77CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2188u;
        goto label_1f2188;
    }
    ctx->pc = 0x1F2180u;
    {
        const bool branch_taken_0x1f2180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2180u;
        // 0x1f2184: 0xaf808834  sw          $zero, -0x77CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2180) {
            ctx->pc = 0x1F2198u;
            goto label_1f2198;
        }
    }
    ctx->pc = 0x1F2188u;
label_1f2188:
    // 0x1f2188: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1f2188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_1f218c:
    // 0x1f218c: 0xc0957a0  jal         func_255E80
label_1f2190:
    if (ctx->pc == 0x1F2190u) {
        ctx->pc = 0x1F2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F218Cu;
        // 0x1f2190: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2194u;
        goto label_1f2194;
    }
    ctx->pc = 0x1F218Cu;
    SET_GPR_U32(ctx, 31, 0x1F2194u);
    ctx->pc = 0x1F2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F218Cu;
    // 0x1f2190: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x1F218Cu, 0x1F2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2194u;
label_1f2194:
    // 0x1f2194: 0x0  nop
    ctx->pc = 0x1f2194u;
    // NOP
label_1f2198:
    // 0x1f2198: 0xa7808830  sh          $zero, -0x77D0($gp)
    ctx->pc = 0x1f2198u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 0));
label_1f219c:
    // 0x1f219c: 0x0  nop
    ctx->pc = 0x1f219cu;
    // NOP
label_1f21a0:
    // 0x1f21a0: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
label_1f21a4:
    // 0x1f21a4: 0x24841390  addiu       $a0, $a0, 0x1390
    ctx->pc = 0x1f21a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
label_1f21a8:
    // 0x1f21a8: 0xc0a739c  jal         func_29CE70
label_1f21ac:
    if (ctx->pc == 0x1F21ACu) {
        ctx->pc = 0x1F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A8u;
        // 0x1f21ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21B0u;
        goto label_1f21b0;
    }
    ctx->pc = 0x1F21A8u;
    SET_GPR_U32(ctx, 31, 0x1F21B0u);
    ctx->pc = 0x1F21ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21A8u;
    // 0x1f21ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x1F21A8u, 0x1F21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21B0u;
label_1f21b0:
    // 0x1f21b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f21b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21b4:
    // 0x1f21b4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1f21b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f21b8:
    // 0x1f21b8: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x1f21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1f21bc:
    // 0x1f21bc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1f21c0:
    if (ctx->pc == 0x1F21C0u) {
        ctx->pc = 0x1F21C4u;
        goto label_1f21c4;
    }
    ctx->pc = 0x1F21BCu;
    {
        const bool branch_taken_0x1f21bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f21bc) {
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F21C4u;
label_1f21c4:
    // 0x1f21c4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1f21c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1f21c8:
    // 0x1f21c8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1f21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1f21cc:
    // 0x1f21cc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_1f21d0:
    if (ctx->pc == 0x1F21D0u) {
        ctx->pc = 0x1F21D4u;
        goto label_1f21d4;
    }
    ctx->pc = 0x1F21CCu;
    {
        const bool branch_taken_0x1f21cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f21cc) {
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F21D4u;
label_1f21d4:
    // 0x1f21d4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1f21d8:
    // 0x1f21d8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1f21dc:
    if (ctx->pc == 0x1F21DCu) {
        ctx->pc = 0x1F21E0u;
        goto label_1f21e0;
    }
    ctx->pc = 0x1F21D8u;
    {
        const bool branch_taken_0x1f21d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f21d8) {
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F21E0u;
label_1f21e0:
    // 0x1f21e0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f21e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f21e4:
    // 0x1f21e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f21e8:
    // 0x1f21e8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1f21ec:
    if (ctx->pc == 0x1F21ECu) {
        ctx->pc = 0x1F21F0u;
        goto label_1f21f0;
    }
    ctx->pc = 0x1F21E8u;
    {
        const bool branch_taken_0x1f21e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f21e8) {
            ctx->pc = 0x1F2218u;
            goto label_1f2218;
        }
    }
    ctx->pc = 0x1F21F0u;
label_1f21f0:
    // 0x1f21f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f21f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f21f4:
    // 0x1f21f4: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f21f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1f21f8:
    // 0x1f21f8: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f21f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f21fc:
    // 0x1f21fc: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f2200:
    // 0x1f2200: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f2200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f2204:
    // 0x1f2204: 0x320f809  jalr        $t9
label_1f2208:
    if (ctx->pc == 0x1F2208u) {
        ctx->pc = 0x1F2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2204u;
        // 0x1f2208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F220Cu;
        goto label_1f220c;
    }
    ctx->pc = 0x1F2204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F220Cu);
        ctx->pc = 0x1F2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2204u;
        // 0x1f2208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2204u, 0x1F220Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F220Cu;
label_1f220c:
    // 0x1f220c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f2210:
    if (ctx->pc == 0x1F2210u) {
        ctx->pc = 0x1F2214u;
        goto label_1f2214;
    }
    ctx->pc = 0x1F220Cu;
    {
        const bool branch_taken_0x1f220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f220c) {
            ctx->pc = 0x1F2228u;
            goto label_1f2228;
        }
    }
    ctx->pc = 0x1F2214u;
label_1f2214:
    // 0x1f2214: 0x0  nop
    ctx->pc = 0x1f2214u;
    // NOP
label_1f2218:
    // 0x1f2218: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x1f2218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_1f221c:
    // 0x1f221c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x1f221cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_1f2220:
    // 0x1f2220: 0x320f809  jalr        $t9
label_1f2224:
    if (ctx->pc == 0x1F2224u) {
        ctx->pc = 0x1F2228u;
        goto label_1f2228;
    }
    ctx->pc = 0x1F2220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F2228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2220u, 0x1F2228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2228u;
label_1f2228:
    // 0x1f2228: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f222c:
    // 0x1f222c: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x1f222cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_1f2230:
    // 0x1f2230: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1f2234:
    if (ctx->pc == 0x1F2234u) {
        ctx->pc = 0x1F2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2230u;
        // 0x1f2234: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2238u;
        goto label_1f2238;
    }
    ctx->pc = 0x1F2230u;
    {
        const bool branch_taken_0x1f2230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2230u;
        // 0x1f2234: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2230) {
            ctx->pc = 0x1F21B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f21b8;
        }
    }
    ctx->pc = 0x1F2238u;
label_1f2238:
    // 0x1f2238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f223c:
    // 0x1f223c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1f223cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f2240:
    // 0x1f2240: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2244:
    // 0x1f2244: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2244u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f2248:
    // 0x1f2248: 0x8c24a300  lw          $a0, -0x5D00($at)
    ctx->pc = 0x1f2248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943488)));
label_1f224c:
    // 0x1f224c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f2250:
    if (ctx->pc == 0x1F2250u) {
        ctx->pc = 0x1F2254u;
        goto label_1f2254;
    }
    ctx->pc = 0x1F224Cu;
    {
        const bool branch_taken_0x1f224c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f224c) {
            ctx->pc = 0x1F2260u;
            goto label_1f2260;
        }
    }
    ctx->pc = 0x1F2254u;
label_1f2254:
    // 0x1f2254: 0xc096c4c  jal         func_25B130
label_1f2258:
    if (ctx->pc == 0x1F2258u) {
        ctx->pc = 0x1F225Cu;
        goto label_1f225c;
    }
    ctx->pc = 0x1F2254u;
    SET_GPR_U32(ctx, 31, 0x1F225Cu);
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x1F2254u, 0x1F225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F225Cu;
label_1f225c:
    // 0x1f225c: 0x0  nop
    ctx->pc = 0x1f225cu;
    // NOP
label_1f2260:
    // 0x1f2260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f2264:
    // 0x1f2264: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1f2264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_1f2268:
    // 0x1f2268: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1f226c:
    if (ctx->pc == 0x1F226Cu) {
        ctx->pc = 0x1F226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2268u;
        // 0x1f226c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2270u;
        goto label_1f2270;
    }
    ctx->pc = 0x1F2268u;
    {
        const bool branch_taken_0x1f2268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2268u;
        // 0x1f226c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2268) {
            ctx->pc = 0x1F2240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2240;
        }
    }
    ctx->pc = 0x1F2270u;
label_1f2270:
    // 0x1f2270: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2274:
    // 0x1f2274: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f2274u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f2278:
    // 0x1f2278: 0x8c25a3cc  lw          $a1, -0x5C34($at)
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_1f227c:
    // 0x1f227c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1f2280:
    if (ctx->pc == 0x1F2280u) {
        ctx->pc = 0x1F2284u;
        goto label_1f2284;
    }
    ctx->pc = 0x1F227Cu;
    {
        const bool branch_taken_0x1f227c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f227c) {
            ctx->pc = 0x1F2290u;
            goto label_1f2290;
        }
    }
    ctx->pc = 0x1F2284u;
label_1f2284:
    // 0x1f2284: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1f2284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
label_1f2288:
    // 0x1f2288: 0xc069324  jal         func_1A4C90
label_1f228c:
    if (ctx->pc == 0x1F228Cu) {
        ctx->pc = 0x1F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2288u;
        // 0x1f228c: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2290u;
        goto label_1f2290;
    }
    ctx->pc = 0x1F2288u;
    SET_GPR_U32(ctx, 31, 0x1F2290u);
    ctx->pc = 0x1F228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2288u;
    // 0x1f228c: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x1F2288u, 0x1F2290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2290u;
label_1f2290:
    // 0x1f2290: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f2294:
    // 0x1f2294: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f2294u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f2298:
    // 0x1f2298: 0x8c25a3d0  lw          $a1, -0x5C30($at)
    ctx->pc = 0x1f2298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943696)));
label_1f229c:
    // 0x1f229c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1f22a0:
    if (ctx->pc == 0x1F22A0u) {
        ctx->pc = 0x1F22A4u;
        goto label_1f22a4;
    }
    ctx->pc = 0x1F229Cu;
    {
        const bool branch_taken_0x1f229c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f229c) {
            ctx->pc = 0x1F22B0u;
            goto label_1f22b0;
        }
    }
    ctx->pc = 0x1F22A4u;
label_1f22a4:
    // 0x1f22a4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1f22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
label_1f22a8:
    // 0x1f22a8: 0xc069324  jal         func_1A4C90
label_1f22ac:
    if (ctx->pc == 0x1F22ACu) {
        ctx->pc = 0x1F22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22A8u;
        // 0x1f22ac: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22B0u;
        goto label_1f22b0;
    }
    ctx->pc = 0x1F22A8u;
    SET_GPR_U32(ctx, 31, 0x1F22B0u);
    ctx->pc = 0x1F22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22A8u;
    // 0x1f22ac: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x1F22A8u, 0x1F22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22B0u;
label_1f22b0:
    // 0x1f22b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f22b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f22b4:
    // 0x1f22b4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f22b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f22b8:
    // 0x1f22b8: 0x9022a3d8  lbu         $v0, -0x5C28($at)
    ctx->pc = 0x1f22b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943704)));
label_1f22bc:
    // 0x1f22bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f22c0:
    if (ctx->pc == 0x1F22C0u) {
        ctx->pc = 0x1F22C4u;
        goto label_1f22c4;
    }
    ctx->pc = 0x1F22BCu;
    {
        const bool branch_taken_0x1f22bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f22bc) {
            ctx->pc = 0x1F22D0u;
            goto label_1f22d0;
        }
    }
    ctx->pc = 0x1F22C4u;
label_1f22c4:
    // 0x1f22c4: 0xc0acc18  jal         func_2B3060
label_1f22c8:
    if (ctx->pc == 0x1F22C8u) {
        ctx->pc = 0x1F22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22C4u;
        // 0x1f22c8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22CCu;
        goto label_1f22cc;
    }
    ctx->pc = 0x1F22C4u;
    SET_GPR_U32(ctx, 31, 0x1F22CCu);
    ctx->pc = 0x1F22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22C4u;
    // 0x1f22c8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3060u, 0x1F22C4u, 0x1F22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22CCu;
label_1f22cc:
    // 0x1f22cc: 0x0  nop
    ctx->pc = 0x1f22ccu;
    // NOP
label_1f22d0:
    // 0x1f22d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f22d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f22d4:
    // 0x1f22d4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x1f22d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_1f22d8:
    // 0x1f22d8: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f22d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f22dc:
    // 0x1f22dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f22dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f22e0:
    // 0x1f22e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f22e4:
    if (ctx->pc == 0x1F22E4u) {
        ctx->pc = 0x1F22E8u;
        goto label_1f22e8;
    }
    ctx->pc = 0x1F22E0u;
    {
        const bool branch_taken_0x1f22e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f22e0) {
            ctx->pc = 0x1F2300u;
            goto label_1f2300;
        }
    }
    ctx->pc = 0x1F22E8u;
label_1f22e8:
    // 0x1f22e8: 0x938289b4  lbu         $v0, -0x764C($gp)
    ctx->pc = 0x1f22e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937012)));
label_1f22ec:
    // 0x1f22ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f22f0:
    if (ctx->pc == 0x1F22F0u) {
        ctx->pc = 0x1F22F4u;
        goto label_1f22f4;
    }
    ctx->pc = 0x1F22ECu;
    {
        const bool branch_taken_0x1f22ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f22ec) {
            ctx->pc = 0x1F2300u;
            goto label_1f2300;
        }
    }
    ctx->pc = 0x1F22F4u;
label_1f22f4:
    // 0x1f22f4: 0xc0acb04  jal         func_2B2C10
label_1f22f8:
    if (ctx->pc == 0x1F22F8u) {
        ctx->pc = 0x1F22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22F4u;
        // 0x1f22f8: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22FCu;
        goto label_1f22fc;
    }
    ctx->pc = 0x1F22F4u;
    SET_GPR_U32(ctx, 31, 0x1F22FCu);
    ctx->pc = 0x1F22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22F4u;
    // 0x1f22f8: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C10u, 0x1F22F4u, 0x1F22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22FCu;
label_1f22fc:
    // 0x1f22fc: 0x0  nop
    ctx->pc = 0x1f22fcu;
    // NOP
label_1f2300:
    // 0x1f2300: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1f2300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f2304:
    // 0x1f2304: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f2304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
label_1f2308:
    // 0x1f2308: 0xc07cc14  jal         func_1F3050
label_1f230c:
    if (ctx->pc == 0x1F230Cu) {
        ctx->pc = 0x1F230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2308u;
        // 0x1f230c: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2310u;
        goto label_1f2310;
    }
    ctx->pc = 0x1F2308u;
    SET_GPR_U32(ctx, 31, 0x1F2310u);
    ctx->pc = 0x1F230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2308u;
    // 0x1f230c: 0x248414c0  addiu       $a0, $a0, 0x14C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3050u, 0x1F2308u, 0x1F2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2310u;
label_1f2310:
    // 0x1f2310: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2314:
    // 0x1f2314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2318:
    // 0x1f2318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f231c:
    // 0x1f231c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f231cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2320:
    // 0x1f2320: 0x3e00008  jr          $ra
label_1f2324:
    if (ctx->pc == 0x1F2324u) {
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2328u;
        goto label_fallthrough_0x1f2320;
    }
    ctx->pc = 0x1F2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f2320:
    ctx->pc = 0x1F2328u;
}
