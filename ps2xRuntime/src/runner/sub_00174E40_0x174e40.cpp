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

// Function: sub_00174E40
// Address: 0x174e40 - 0x174f18
void sub_00174E40_0x174e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174E40_0x174e40");
#endif

    ctx->pc = 0x174e40u;

    // 0x174e40: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174e44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174e48: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x174e4c: 0x1446000c  bne         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x174E4Cu;
    {
        const bool branch_taken_0x174e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x174E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E4Cu;
        // 0x174e50: 0x24880010  addiu       $t0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e4c) {
            ctx->pc = 0x174E80u;
            goto label_174e80;
        }
    }
    ctx->pc = 0x174E54u;
    // 0x174e54: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174e58: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x174E58u;
    {
        const bool branch_taken_0x174e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x174E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E58u;
        // 0x174e5c: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e58) {
            ctx->pc = 0x174E68u;
            goto label_174e68;
        }
    }
    ctx->pc = 0x174E60u;
    // 0x174e60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x174E60u;
    {
        const bool branch_taken_0x174e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E60u;
        // 0x174e64: 0xa486000a  sh          $a2, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e60) {
            ctx->pc = 0x174EB8u;
            goto label_174eb8;
        }
    }
    ctx->pc = 0x174E68u;
label_174e68:
    // 0x174e68: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174e6c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x174e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174e70: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x174e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x174e74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x174E74u;
    {
        const bool branch_taken_0x174e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E74u;
        // 0x174e78: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e74) {
            ctx->pc = 0x174EB8u;
            goto label_174eb8;
        }
    }
    ctx->pc = 0x174E7Cu;
    // 0x174e7c: 0x0  nop
    ctx->pc = 0x174e7cu;
    // NOP
label_174e80:
    // 0x174e80: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x174e80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174e84: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x174e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174e88: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x174e8c: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x174E8Cu;
    {
        const bool branch_taken_0x174e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x174E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E8Cu;
        // 0x174e90: 0xa4430002  sh          $v1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e8c) {
            ctx->pc = 0x174EA0u;
            goto label_174ea0;
        }
    }
    ctx->pc = 0x174E94u;
    // 0x174e94: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x174e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174e98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x174E98u;
    {
        const bool branch_taken_0x174e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E98u;
        // 0x174e9c: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e98) {
            ctx->pc = 0x174EB8u;
            goto label_174eb8;
        }
    }
    ctx->pc = 0x174EA0u;
label_174ea0:
    // 0x174ea0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174ea4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x174ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174ea8: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x174ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174eac: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x174eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x174eb0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x174eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x174eb4: 0x0  nop
    ctx->pc = 0x174eb4u;
    // NOP
label_174eb8:
    // 0x174eb8: 0x8483000c  lh          $v1, 0xC($a0)
    ctx->pc = 0x174eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x174ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174ec0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174EC0u;
    {
        const bool branch_taken_0x174ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174ec0) {
            ctx->pc = 0x174EE0u;
            goto label_174ee0;
        }
    }
    ctx->pc = 0x174EC8u;
    // 0x174ec8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x174ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x174ecc: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x174eccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x174ed0: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x174ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x174ed4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174ED4u;
    {
        const bool branch_taken_0x174ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ED4u;
        // 0x174ed8: 0xa482000c  sh          $v0, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ed4) {
            ctx->pc = 0x174F08u;
            goto label_174f08;
        }
    }
    ctx->pc = 0x174EDCu;
    // 0x174edc: 0x0  nop
    ctx->pc = 0x174edcu;
    // NOP
label_174ee0:
    // 0x174ee0: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x174ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x174ee4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x174ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x174ee8: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x174ee8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x174eec: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x174eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x174ef0: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x174ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174ef4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x174ef8: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x174ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x174efc: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x174efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x174f00: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x174f00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x174f04: 0x0  nop
    ctx->pc = 0x174f04u;
    // NOP
label_174f08:
    // 0x174f08: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174f08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x174f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174f10: 0x3e00008  jr          $ra
    ctx->pc = 0x174F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F10u;
        // 0x174f14: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174F18u;
}
