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

// Function: sub_00240E28
// Address: 0x240e28 - 0x241018
void sub_00240E28_0x240e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E28_0x240e28");
#endif

    switch (ctx->pc) {
        case 0x240e48u: goto label_240e48;
        default: break;
    }

    ctx->pc = 0x240e28u;

    // 0x240e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240e2c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x240e2cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240e34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x240e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240e44: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x240e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_240e48:
    // 0x240e48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x240e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e4c: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240e4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240e50: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240e54: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x240e58: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240e58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240e5c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240e60: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240e64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240e68: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x240e68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240e6c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240e70: 0xe4c818  mult        $t9, $a3, $a0
    ctx->pc = 0x240e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x240e74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240e78: 0x87060000  lh          $a2, 0x0($t8)
    ctx->pc = 0x240e78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240e7c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240e7cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240e80: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240e84: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x240e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240e88: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240e88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240e8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240e8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240e90: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240e90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240e94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240e98: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x240e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240e9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240e9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ea0: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x240ea0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ea4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ea8: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240eac: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x240eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240eb0: 0x870b0000  lh          $t3, 0x0($t8)
    ctx->pc = 0x240eb0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240eb4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240eb4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240eb8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ebc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240ec0: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x240ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240ec4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ec8: 0x870d0000  lh          $t5, 0x0($t8)
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ecc: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240ed0: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240ed4: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x240ed4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x240ed8: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x240ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x240edc: 0x870e0000  lh          $t6, 0x0($t8)
    ctx->pc = 0x240edcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ee0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ee4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240ee8: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240ee8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240eec: 0x1a46818  mult        $t5, $t5, $a0
    ctx->pc = 0x240eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x240ef0: 0x326c821  addu        $t9, $t9, $a2
    ctx->pc = 0x240ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x240ef4: 0x870f0000  lh          $t7, 0x0($t8)
    ctx->pc = 0x240ef4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240ef8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240efc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240f00: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f04: 0x1c37018  mult        $t6, $t6, $v1
    ctx->pc = 0x240f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x240f08: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x240f0c: 0x870c0000  lh          $t4, 0x0($t8)
    ctx->pc = 0x240f0cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f10: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240f14: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240f18: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f18u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f1c: 0x1e47818  mult        $t7, $t7, $a0
    ctx->pc = 0x240f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x240f20: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x240f20u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x240f24: 0x870a0000  lh          $t2, 0x0($t8)
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240f2c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240f30: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f34: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x240f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x240f38: 0x87090000  lh          $t1, 0x0($t8)
    ctx->pc = 0x240f38u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f3c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f40: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240f40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240f44: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x240f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x240f48: 0x32bc821  addu        $t9, $t9, $t3
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x240f4c: 0x1445018  mult        $t2, $t2, $a0
    ctx->pc = 0x240f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x240f50: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x240f50u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f54: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240f5c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x240f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x240f60: 0x32dc821  addu        $t9, $t9, $t5
    ctx->pc = 0x240f60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x240f64: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x240f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x240f68: 0x87070000  lh          $a3, 0x0($t8)
    ctx->pc = 0x240f68u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f6c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f70: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240f74: 0x2442f840  addiu       $v0, $v0, -0x7C0
    ctx->pc = 0x240f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965312));
    // 0x240f78: 0x32ec821  addu        $t9, $t9, $t6
    ctx->pc = 0x240f78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 14)));
    // 0x240f7c: 0x1044018  mult        $t0, $t0, $a0
    ctx->pc = 0x240f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240f80: 0x87050000  lh          $a1, 0x0($t8)
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f84: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x240f84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x240f88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x240f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240f8c: 0x32fc821  addu        $t9, $t9, $t7
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 15)));
    // 0x240f90: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x240f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240f94: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x240f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x240f98: 0x844600c0  lh          $a2, 0xC0($v0)
    ctx->pc = 0x240f98u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x240f9c: 0x3c0203ff  lui         $v0, 0x3FF
    ctx->pc = 0x240f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1023 << 16));
    // 0x240fa0: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x240fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x240fa4: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x240fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x240fa8: 0x32ac821  addu        $t9, $t9, $t2
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x240fac: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x240facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240fb0: 0x329c821  addu        $t9, $t9, $t1
    ctx->pc = 0x240fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
    // 0x240fb4: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x240fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x240fb8: 0x328c821  addu        $t9, $t9, $t0
    ctx->pc = 0x240fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x240fbc: 0x327c821  addu        $t9, $t9, $a3
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x240fc0: 0x325c821  addu        $t9, $t9, $a1
    ctx->pc = 0x240fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x240fc4: 0x323c821  addu        $t9, $t9, $v1
    ctx->pc = 0x240fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x240fc8: 0x59102a  slt         $v0, $v0, $t9
    ctx->pc = 0x240fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x240fcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240FCCu;
    {
        const bool branch_taken_0x240fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fcc) {
            ctx->pc = 0x240FE0u;
            goto label_240fe0;
        }
    }
    ctx->pc = 0x240FD4u;
    // 0x240fd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240FD4u;
    {
        const bool branch_taken_0x240fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FD4u;
        // 0x240fd8: 0x24027fff  addiu       $v0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fd4) {
            ctx->pc = 0x240FF4u;
            goto label_240ff4;
        }
    }
    ctx->pc = 0x240FDCu;
    // 0x240fdc: 0x0  nop
    ctx->pc = 0x240fdcu;
    // NOP
label_240fe0:
    // 0x240fe0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x240fe4: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x240fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240fe8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x240FE8u;
    {
        const bool branch_taken_0x240fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fe8) {
            ctx->pc = 0x240FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240FE8u;
            // 0x240fec: 0x1912c3  sra         $v0, $t9, 11 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FF4u;
            goto label_240ff4;
        }
    }
    ctx->pc = 0x240FF0u;
    // 0x240ff0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x240ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_240ff4:
    // 0x240ff4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x240ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x240ff8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x240ffc: 0x1640ff92  bnez        $s2, . + 4 + (-0x6E << 2)
    ctx->pc = 0x240FFCu;
    {
        const bool branch_taken_0x240ffc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x241000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FFCu;
        // 0x241000: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ffc) {
            ctx->pc = 0x240E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240e48;
        }
    }
    ctx->pc = 0x241004u;
    // 0x241004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x241008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24100c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24100cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241010: 0x3e00008  jr          $ra
    ctx->pc = 0x241010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241010u;
        // 0x241014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241018u;
}
