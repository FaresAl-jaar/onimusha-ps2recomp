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

// Function: sub_003D9F00
// Address: 0x3d9f00 - 0x3d9f88
void sub_003D9F00_0x3d9f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9F00_0x3d9f00");
#endif

    switch (ctx->pc) {
        case 0x3d9f40u: goto label_3d9f40;
        case 0x3d9f58u: goto label_3d9f58;
        default: break;
    }

    ctx->pc = 0x3d9f00u;

    // 0x3d9f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d9f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d9f10: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3d9f10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d9f14: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D9F14u;
    {
        const bool branch_taken_0x3d9f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D9F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F14u;
        // 0x3d9f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f14) {
            ctx->pc = 0x3D9F50u;
            goto label_3d9f50;
        }
    }
    ctx->pc = 0x3D9F1Cu;
    // 0x3d9f1c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9F1Cu;
    {
        const bool branch_taken_0x3d9f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9f1c) {
            ctx->pc = 0x3D9F30u;
            goto label_3d9f30;
        }
    }
    ctx->pc = 0x3D9F24u;
    // 0x3d9f24: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D9F24u;
    {
        const bool branch_taken_0x3d9f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9f24) {
            ctx->pc = 0x3D9F78u;
            goto label_3d9f78;
        }
    }
    ctx->pc = 0x3D9F2Cu;
    // 0x3d9f2c: 0x0  nop
    ctx->pc = 0x3d9f2cu;
    // NOP
label_3d9f30:
    // 0x3d9f30: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3d9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3d9f34: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3d9f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d9f38: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3D9F38u;
    SET_GPR_U32(ctx, 31, 0x3D9F40u);
    ctx->pc = 0x3D9F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9F38u;
    // 0x3d9f3c: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3D9F38u, 0x3D9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9F40u;
label_3d9f40:
    // 0x3d9f40: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3d9f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3d9f44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9f48: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d9f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9f4c: 0x0  nop
    ctx->pc = 0x3d9f4cu;
    // NOP
label_3d9f50:
    // 0x3d9f50: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3D9F50u;
    SET_GPR_U32(ctx, 31, 0x3D9F58u);
    ctx->pc = 0x3D9F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9F50u;
    // 0x3d9f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3D9F50u, 0x3D9F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9F58u;
label_3d9f58:
    // 0x3d9f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D9F58u;
    {
        const bool branch_taken_0x3d9f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F58u;
        // 0x3d9f5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f58) {
            ctx->pc = 0x3D9F78u;
            goto label_3d9f78;
        }
    }
    ctx->pc = 0x3D9F60u;
    // 0x3d9f60: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d9f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9f64: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9f68: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3d9f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3d9f6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9f70: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d9f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9f74: 0x0  nop
    ctx->pc = 0x3d9f74u;
    // NOP
label_3d9f78:
    // 0x3d9f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9f80: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F80u;
        // 0x3d9f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9F88u;
}
