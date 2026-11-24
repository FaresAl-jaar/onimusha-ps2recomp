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

// Function: sub_00241208
// Address: 0x241208 - 0x2413f8
void sub_00241208_0x241208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241208_0x241208");
#endif

    switch (ctx->pc) {
        case 0x241228u: goto label_241228;
        default: break;
    }

    ctx->pc = 0x241208u;

    // 0x241208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24120c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x24120cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241214: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24121c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24121cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241220: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241224: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241228:
    // 0x241228: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24122c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x24122cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241230: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241234: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241238: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x24123c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241240: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241244: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241248: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241248u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24124c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24124cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241250: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241254: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241258: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24125c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24125cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241260: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241264: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241268: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24126c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24126cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241270: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241270u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241274: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241278: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24127c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x24127cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241280: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241284: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241284u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241288: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x24128c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x24128cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241290: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241294: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241298: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24129c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x24129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2412a0: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x2412a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2412a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2412a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2412a8: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2412ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2412acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2412b0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2412b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2412b4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x2412b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2412b8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x2412b8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2412bc: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x2412bcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2412c0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2412c4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2412c8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2412cc: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x2412ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2412d0: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x2412d0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2412d4: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x2412d4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2412d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2412d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2412dc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2412dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2412e0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2412e4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x2412e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2412e8: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2412ec: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x2412ecu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2412f0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2412f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2412f4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2412f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2412f8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2412f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2412fc: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x2412fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x241300: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241300u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241304: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241308: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24130c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241310: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241314: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x241314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x241318: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24131c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24131cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241320: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241324: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x241324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x241328: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x24132c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x24132cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241330: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241334: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241334u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241338: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24133c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241340: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241340u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241344: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241348: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241348u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x24134c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x24134cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241350: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241354: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241358: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241358u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x24135c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x24135cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241360: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241364: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241364u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241368: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24136c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x24136cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241370: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241374: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241378: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241378u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24137c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x24137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241380: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241380u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241384: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241388: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241388u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x24138c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x24138cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241390: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241390u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241394: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241398: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241398u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x24139c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x24139cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x2413a0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x2413a0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x2413a4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x2413a4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x2413a8: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x2413a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x2413ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2413ACu;
    {
        const bool branch_taken_0x2413ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413ACu;
        // 0x2413b0: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413ac) {
            ctx->pc = 0x2413C0u;
            goto label_2413c0;
        }
    }
    ctx->pc = 0x2413B4u;
    // 0x2413b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2413B4u;
    {
        const bool branch_taken_0x2413b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413B4u;
        // 0x2413b8: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413b4) {
            ctx->pc = 0x2413D4u;
            goto label_2413d4;
        }
    }
    ctx->pc = 0x2413BCu;
    // 0x2413bc: 0x0  nop
    ctx->pc = 0x2413bcu;
    // NOP
label_2413c0:
    // 0x2413c0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x2413c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x2413c4: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x2413c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2413c8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2413C8u;
    {
        const bool branch_taken_0x2413c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413c8) {
            ctx->pc = 0x2413CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2413C8u;
            // 0x2413cc: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2413D4u;
            goto label_2413d4;
        }
    }
    ctx->pc = 0x2413D0u;
    // 0x2413d0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x2413d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_2413d4:
    // 0x2413d4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2413d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2413d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2413d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2413dc: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2413DCu;
    {
        const bool branch_taken_0x2413dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2413E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413DCu;
        // 0x2413e0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413dc) {
            ctx->pc = 0x241228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241228;
        }
    }
    ctx->pc = 0x2413E4u;
    // 0x2413e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2413e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2413e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2413e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2413ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2413ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2413f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2413F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413F0u;
        // 0x2413f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2413F8u;
}
