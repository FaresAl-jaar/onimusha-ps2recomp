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

// Function: sub_00241DA8
// Address: 0x241da8 - 0x241f98
void sub_00241DA8_0x241da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241DA8_0x241da8");
#endif

    switch (ctx->pc) {
        case 0x241dc8u: goto label_241dc8;
        default: break;
    }

    ctx->pc = 0x241da8u;

    // 0x241da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x241dac: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x241dacu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241db0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241db4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241db8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241dc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241dc4: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241dc8:
    // 0x241dc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241dcc: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241dccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241dd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241dd4: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241dd8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ddc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241de0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241de4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241de8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241de8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241dec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241decu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241df0: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241df4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241df8: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241df8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241dfc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241dfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e00: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241e04: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241e08: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241e08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e0c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e10: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e14: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241e18: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x241e1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e20: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241e20u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e24: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e28: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241e2c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241e30: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241e30u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e34: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e38: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241e38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e3c: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x241e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x241e40: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241e44: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e48: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e4c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e50: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241e54: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x241e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x241e58: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241e58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241e5c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x241e5cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e60: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241e68: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e6c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x241e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x241e70: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x241e70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x241e74: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x241e74u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e7c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241e80: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e80u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e84: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x241e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x241e88: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x241e88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241e8c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x241e8cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241e90: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241e90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241e98: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241e98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241e9c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x241e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x241ea0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241ea4: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x241ea4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ea8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241eac: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241eb0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241eb0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241eb4: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x241eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x241eb8: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ebc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ebcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ec0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ec4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241ec8: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x241ecc: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x241eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241ed0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241ed0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ed4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ed8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241edc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241ee0: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241ee4: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241ee8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241eec: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ef0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ef4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241ef8: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x241efc: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241f00: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241f04: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241f04u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241f08: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241f0c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x241f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241f10: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241f14: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241f18: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241f18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x241f1c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x241f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241f20: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241f24: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241f28: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241f28u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x241f2c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x241f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241f30: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241f34: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241f38: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241f38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241f3c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x241f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241f40: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241f40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241f44: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x241f44u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x241f48: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x241f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x241f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241F4Cu;
    {
        const bool branch_taken_0x241f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F4Cu;
        // 0x241f50: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f4c) {
            ctx->pc = 0x241F60u;
            goto label_241f60;
        }
    }
    ctx->pc = 0x241F54u;
    // 0x241f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x241F54u;
    {
        const bool branch_taken_0x241f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F54u;
        // 0x241f58: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f54) {
            ctx->pc = 0x241F74u;
            goto label_241f74;
        }
    }
    ctx->pc = 0x241F5Cu;
    // 0x241f5c: 0x0  nop
    ctx->pc = 0x241f5cu;
    // NOP
label_241f60:
    // 0x241f60: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x241f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x241f64: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x241f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241f68: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x241F68u;
    {
        const bool branch_taken_0x241f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241f68) {
            ctx->pc = 0x241F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241F68u;
            // 0x241f6c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241F74u;
            goto label_241f74;
        }
    }
    ctx->pc = 0x241F70u;
    // 0x241f70: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x241f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_241f74:
    // 0x241f74: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x241f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x241f78: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x241f7c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x241F7Cu;
    {
        const bool branch_taken_0x241f7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x241F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F7Cu;
        // 0x241f80: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f7c) {
            ctx->pc = 0x241DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241dc8;
        }
    }
    ctx->pc = 0x241F84u;
    // 0x241f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241f90: 0x3e00008  jr          $ra
    ctx->pc = 0x241F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F90u;
        // 0x241f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241F98u;
}
