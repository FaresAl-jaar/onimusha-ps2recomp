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

// Function: sub_00148BF0
// Address: 0x148bf0 - 0x148c88
void sub_00148BF0_0x148bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148BF0_0x148bf0");
#endif

    ctx->pc = 0x148bf0u;

    // 0x148bf0: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x148bf4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148BF4u;
    {
        const bool branch_taken_0x148bf4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x148bf4) {
            ctx->pc = 0x148C08u;
            goto label_148c08;
        }
    }
    ctx->pc = 0x148BFCu;
    // 0x148bfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x148bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x148c00: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x148c00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x148c04: 0x0  nop
    ctx->pc = 0x148c04u;
    // NOP
label_148c08:
    // 0x148c08: 0x84a80006  lh          $t0, 0x6($a1)
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x148c0c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148C0Cu;
    {
        const bool branch_taken_0x148c0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x148c0c) {
            ctx->pc = 0x148C30u;
            goto label_148c30;
        }
    }
    ctx->pc = 0x148C14u;
    // 0x148c14: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x148c14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x148c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x148c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c1c: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x148c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x148c20: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x148c20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x148c24: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x148c24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x148c28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x148C28u;
    {
        const bool branch_taken_0x148c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C28u;
        // 0x148c2c: 0xa4a00008  sh          $zero, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c28) {
            ctx->pc = 0x148C80u;
            goto label_148c80;
        }
    }
    ctx->pc = 0x148C30u;
label_148c30:
    // 0x148c30: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x148c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x148c34: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x148c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x148c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c3c: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x148c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x148c40: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x148c40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x148c44: 0x0  nop
    ctx->pc = 0x148c44u;
    // NOP
    // 0x148c48: 0x0  nop
    ctx->pc = 0x148c48u;
    // NOP
    // 0x148c4c: 0x1812  mflo        $v1
    ctx->pc = 0x148c4cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x148c50: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x148c50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x148c54: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x148c54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x148c58: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x148c5c: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x148c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x148c60: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x148c60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x148c64: 0x70c42018  mult1       $a0, $a2, $a0
    ctx->pc = 0x148c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x148c68: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x148c68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x148c6c: 0x0  nop
    ctx->pc = 0x148c6cu;
    // NOP
    // 0x148c70: 0x0  nop
    ctx->pc = 0x148c70u;
    // NOP
    // 0x148c74: 0x1812  mflo        $v1
    ctx->pc = 0x148c74u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x148c78: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x148c78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x148c7c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x148c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_148c80:
    // 0x148c80: 0x3e00008  jr          $ra
    ctx->pc = 0x148C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148C88u;
}
