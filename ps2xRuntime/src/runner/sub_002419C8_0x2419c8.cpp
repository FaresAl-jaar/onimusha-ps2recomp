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

// Function: sub_002419C8
// Address: 0x2419c8 - 0x241bb8
void sub_002419C8_0x2419c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002419C8_0x2419c8");
#endif

    switch (ctx->pc) {
        case 0x2419e8u: goto label_2419e8;
        default: break;
    }

    ctx->pc = 0x2419c8u;

    // 0x2419c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2419c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2419cc: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2419ccu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2419d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2419d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2419d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2419d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2419dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2419dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2419e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2419e4: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x2419e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2419e8:
    // 0x2419e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2419e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2419ec: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x2419ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2419f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2419f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2419f4: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x2419f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2419f8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x2419f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x2419fc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2419fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241a00: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a04: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241a08: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a0c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a10: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241a14: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a18: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241a18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a1c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a20: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241a24: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241a28: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241a28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a2c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a30: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a34: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241a38: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x241a3c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a40: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a44: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a48: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241a4c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241a50: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241a50u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a54: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a58: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a5c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241a60: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241a64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a68: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x241a68u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a6c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a70: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241a74: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x241a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x241a78: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241a78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241a7c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x241a7cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a84: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x241a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x241a88: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241a8c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x241a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x241a90: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x241a94: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x241a94u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241a98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241a9c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241aa0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241aa0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241aa4: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x241aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x241aa8: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x241aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241aac: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x241aacu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ab0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ab4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241ab8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ab8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241abc: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x241abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x241ac0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241ac4: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x241ac4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ac8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241acc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241ad0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ad4: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x241ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x241ad8: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x241ad8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241adc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ae0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ae4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241ae8: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x241aec: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x241aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241af0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241af4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241af4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241af8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241afc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241b00: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241b00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241b04: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241b08: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241b08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241b0c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241b10: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241b14: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241b18: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241b18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x241b1c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241b20: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241b20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241b24: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241b24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241b28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241b2c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x241b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241b30: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241b34: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241b38: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241b38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x241b3c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x241b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241b40: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241b44: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241b48: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241b48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x241b4c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x241b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241b50: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241b50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241b54: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241b58: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241b5c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x241b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241b60: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241b64: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x241b64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x241b68: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x241b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x241b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241B6Cu;
    {
        const bool branch_taken_0x241b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B6Cu;
        // 0x241b70: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b6c) {
            ctx->pc = 0x241B80u;
            goto label_241b80;
        }
    }
    ctx->pc = 0x241B74u;
    // 0x241b74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x241B74u;
    {
        const bool branch_taken_0x241b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B74u;
        // 0x241b78: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b74) {
            ctx->pc = 0x241B94u;
            goto label_241b94;
        }
    }
    ctx->pc = 0x241B7Cu;
    // 0x241b7c: 0x0  nop
    ctx->pc = 0x241b7cu;
    // NOP
label_241b80:
    // 0x241b80: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x241b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x241b84: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x241b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241b88: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x241B88u;
    {
        const bool branch_taken_0x241b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241b88) {
            ctx->pc = 0x241B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241B88u;
            // 0x241b8c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B94u;
            goto label_241b94;
        }
    }
    ctx->pc = 0x241B90u;
    // 0x241b90: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_241b94:
    // 0x241b94: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x241b94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x241b98: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x241b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x241b9c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x241B9Cu;
    {
        const bool branch_taken_0x241b9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x241BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B9Cu;
        // 0x241ba0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b9c) {
            ctx->pc = 0x2419E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2419e8;
        }
    }
    ctx->pc = 0x241BA4u;
    // 0x241ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x241BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BB0u;
        // 0x241bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241BB8u;
}
