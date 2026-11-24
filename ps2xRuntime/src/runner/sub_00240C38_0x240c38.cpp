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

// Function: sub_00240C38
// Address: 0x240c38 - 0x240e28
void sub_00240C38_0x240c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240C38_0x240c38");
#endif

    switch (ctx->pc) {
        case 0x240c58u: goto label_240c58;
        default: break;
    }

    ctx->pc = 0x240c38u;

    // 0x240c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240c3c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x240c3cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240c44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x240c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240c54: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x240c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_240c58:
    // 0x240c58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x240c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c5c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240c5cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240c60: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240c64: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x240c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x240c68: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240c68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240c6c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240c70: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240c74: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240c78: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x240c78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240c7c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240c7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240c80: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x240c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x240c84: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240c88: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x240c88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240c8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240c90: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240c94: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x240c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240c98: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240c98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240c9c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240c9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ca0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ca4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240ca8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x240ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240cac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240cb0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x240cb0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240cb4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240cb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240cb8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240cbc: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x240cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240cc0: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x240cc0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240cc4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240cc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240cc8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240cc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ccc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240cd0: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x240cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240cd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240cd8: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240cdc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240cdcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ce0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240ce4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x240ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x240ce8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x240ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x240cec: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x240cecu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240cf0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240cf4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240cf8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240cf8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240cfc: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x240cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x240d00: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x240d00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x240d04: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x240d04u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d08: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d0c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240d10: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d14: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x240d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x240d18: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x240d18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x240d1c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x240d1cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d20: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d24: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240d28: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d28u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d2c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x240d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x240d30: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x240d30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x240d34: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x240d34u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d3c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240d40: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d44: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x240d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x240d48: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x240d48u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d4c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d50: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d54: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240d58: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x240d58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x240d5c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x240d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x240d60: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x240d60u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d64: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d6c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240d70: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x240d70u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x240d74: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x240d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x240d78: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240d78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d7c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d84: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240d88: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x240d88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x240d8c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x240d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240d90: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x240d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240d94: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240d94u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240d98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240d9c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x240d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x240da0: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x240da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240da4: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x240da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240da8: 0x8446f8c0  lh          $a2, -0x740($v0)
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965440)));
    // 0x240dac: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x240dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x240db0: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x240db0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x240db4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x240db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240db8: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x240dbc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x240dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240dc0: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x240dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x240dc4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x240dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x240dc8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x240dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x240dcc: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x240dccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x240dd0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x240dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x240dd4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x240dd4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x240dd8: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x240dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x240ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240DDCu;
    {
        const bool branch_taken_0x240ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DDCu;
        // 0x240de0: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ddc) {
            ctx->pc = 0x240DF0u;
            goto label_240df0;
        }
    }
    ctx->pc = 0x240DE4u;
    // 0x240de4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240DE4u;
    {
        const bool branch_taken_0x240de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE4u;
        // 0x240de8: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240de4) {
            ctx->pc = 0x240E04u;
            goto label_240e04;
        }
    }
    ctx->pc = 0x240DECu;
    // 0x240dec: 0x0  nop
    ctx->pc = 0x240decu;
    // NOP
label_240df0:
    // 0x240df0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x240df4: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x240df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240df8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x240DF8u;
    {
        const bool branch_taken_0x240df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240df8) {
            ctx->pc = 0x240DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240DF8u;
            // 0x240dfc: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240E04u;
            goto label_240e04;
        }
    }
    ctx->pc = 0x240E00u;
    // 0x240e00: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_240e04:
    // 0x240e04: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x240e04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x240e08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x240e0c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x240E0Cu;
    {
        const bool branch_taken_0x240e0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E0Cu;
        // 0x240e10: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e0c) {
            ctx->pc = 0x240C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240c58;
        }
    }
    ctx->pc = 0x240E14u;
    // 0x240e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240e1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240e1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240e20: 0x3e00008  jr          $ra
    ctx->pc = 0x240E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E20u;
        // 0x240e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240E28u;
}
