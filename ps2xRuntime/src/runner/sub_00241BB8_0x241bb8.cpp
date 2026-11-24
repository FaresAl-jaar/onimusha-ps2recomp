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

// Function: sub_00241BB8
// Address: 0x241bb8 - 0x241da8
void sub_00241BB8_0x241bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241BB8_0x241bb8");
#endif

    switch (ctx->pc) {
        case 0x241bd8u: goto label_241bd8;
        default: break;
    }

    ctx->pc = 0x241bb8u;

    // 0x241bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x241bbc: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x241bbcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241bc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x241bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x241bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x241bd4: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x241bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_241bd8:
    // 0x241bd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241bdc: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241bdcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241be0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241be4: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x241be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x241be8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241bec: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241bf0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241bf4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241bf8: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241bf8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241bfc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241bfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c00: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x241c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x241c04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c08: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c0c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c10: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241c14: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x241c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241c18: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c1c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c20: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241c20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c24: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241c28: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x241c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x241c2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c30: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241c30u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c34: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c38: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241c3c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241c40: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x241c40u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c44: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c48: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241c48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c4c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241c50: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241c54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c58: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x241c58u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c5c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c5cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c60: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x241c64: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x241c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x241c68: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241c68u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241c6c: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x241c6cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c70: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c74: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241c78: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c78u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c7c: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x241c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x241c80: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x241c84: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x241c84u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241c88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241c8c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241c90: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241c90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241c94: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x241c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x241c98: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x241c98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241c9c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ca0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241ca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241ca4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241ca8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ca8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241cac: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x241cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x241cb0: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241cb4: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x241cb4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241cb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241cb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241cbc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241cc0: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241cc4: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x241cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x241cc8: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ccc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241cd0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241cd4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241cd8: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x241cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x241cdc: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x241cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x241ce0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x241ce0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241ce4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241ce4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241ce8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241ce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241cec: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x241cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x241cf0: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x241cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x241cf4: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x241cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x241cf8: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x241cf8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241cfc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241cfcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241d00: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x241d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d04: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x241d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x241d08: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x241d08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x241d0c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x241d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x241d10: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241d14: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x241d18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d1c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x241d20: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x241d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x241d24: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x241d28: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x241d28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x241d2c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x241d30: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x241d30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x241d34: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x241d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x241d38: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x241d38u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x241d3c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x241d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x241d40: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x241d40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x241d44: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x241d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x241d48: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x241d48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x241d4c: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x241d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x241d50: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x241d50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x241d54: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x241d54u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x241d58: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x241d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x241d5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241D5Cu;
    {
        const bool branch_taken_0x241d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D5Cu;
        // 0x241d60: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d5c) {
            ctx->pc = 0x241D70u;
            goto label_241d70;
        }
    }
    ctx->pc = 0x241D64u;
    // 0x241d64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x241D64u;
    {
        const bool branch_taken_0x241d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D64u;
        // 0x241d68: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d64) {
            ctx->pc = 0x241D84u;
            goto label_241d84;
        }
    }
    ctx->pc = 0x241D6Cu;
    // 0x241d6c: 0x0  nop
    ctx->pc = 0x241d6cu;
    // NOP
label_241d70:
    // 0x241d70: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x241d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x241d74: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x241d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241d78: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x241D78u;
    {
        const bool branch_taken_0x241d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d78) {
            ctx->pc = 0x241D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241D78u;
            // 0x241d7c: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241D84u;
            goto label_241d84;
        }
    }
    ctx->pc = 0x241D80u;
    // 0x241d80: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_241d84:
    // 0x241d84: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x241d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x241d88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x241d8c: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x241D8Cu;
    {
        const bool branch_taken_0x241d8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x241D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D8Cu;
        // 0x241d90: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d8c) {
            ctx->pc = 0x241BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241bd8;
        }
    }
    ctx->pc = 0x241D94u;
    // 0x241d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x241d9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241da0: 0x3e00008  jr          $ra
    ctx->pc = 0x241DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DA0u;
        // 0x241da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241DA8u;
}
