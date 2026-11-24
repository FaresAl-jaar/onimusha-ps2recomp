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

// Function: sub_002F3E70
// Address: 0x2f3e70 - 0x2f3ef0
void sub_002F3E70_0x2f3e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3E70_0x2f3e70");
#endif

    switch (ctx->pc) {
        case 0x2f3e84u: goto label_2f3e84;
        default: break;
    }

    ctx->pc = 0x2f3e70u;

    // 0x2f3e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f3e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3e7c: 0xc0bce70  jal         func_2F39C0
    ctx->pc = 0x2F3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F3E84u);
    ctx->pc = 0x2F3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E7Cu;
    // 0x2f3e80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39C0u, 0x2F3E7Cu, 0x2F3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E84u;
label_2f3e84:
    // 0x2f3e84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3E84u;
    {
        const bool branch_taken_0x2f3e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e84) {
            ctx->pc = 0x2F3E98u;
            goto label_2f3e98;
        }
    }
    ctx->pc = 0x2F3E8Cu;
    // 0x2f3e8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2F3E8Cu;
    {
        const bool branch_taken_0x2f3e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E8Cu;
        // 0x2f3e90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e8c) {
            ctx->pc = 0x2F3EE0u;
            goto label_2f3ee0;
        }
    }
    ctx->pc = 0x2F3E94u;
    // 0x2f3e94: 0x0  nop
    ctx->pc = 0x2f3e94u;
    // NOP
label_2f3e98:
    // 0x2f3e98: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2f3e98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3e9c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2f3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f3ea0: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x2f3ea0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2f3ea4: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x2f3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x2f3ea8: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x2f3ea8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x2f3eac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f3eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3eb0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x2f3eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x2f3eb4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2f3eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2f3eb8: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2f3eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f3ebc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2f3ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3ec0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2f3ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2f3ec4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f3ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f3ec8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2f3ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f3ecc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2f3eccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3ed0: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2f3ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f3ed4: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x2f3ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x2f3ed8: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f3ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3edc: 0x0  nop
    ctx->pc = 0x2f3edcu;
    // NOP
label_2f3ee0:
    // 0x2f3ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EE8u;
        // 0x2f3eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3EF0u;
}
