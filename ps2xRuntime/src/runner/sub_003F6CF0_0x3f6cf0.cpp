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

// Function: sub_003F6CF0
// Address: 0x3f6cf0 - 0x3f6d68
void sub_003F6CF0_0x3f6cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6CF0_0x3f6cf0");
#endif

    switch (ctx->pc) {
        case 0x3f6d30u: goto label_3f6d30;
        case 0x3f6d48u: goto label_3f6d48;
        case 0x3f6d50u: goto label_3f6d50;
        case 0x3f6d58u: goto label_3f6d58;
        default: break;
    }

    ctx->pc = 0x3f6cf0u;

    // 0x3f6cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6cf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f6cfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f6d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6d04: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3f6d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f6d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f6d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6d0c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3f6d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6d10: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3f6d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6d14: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3f6d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6d18: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x3f6d18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3f6d1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3f6d20: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x3f6d20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6d24: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f6d28: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3F6D28u;
    SET_GPR_U32(ctx, 31, 0x3F6D30u);
    ctx->pc = 0x3F6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D28u;
    // 0x3f6d2c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3F6D28u, 0x3F6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D30u;
label_3f6d30:
    // 0x3f6d30: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f6d34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f6d38: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3f6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3f6d3c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3f6d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3f6d40: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3F6D40u;
    SET_GPR_U32(ctx, 31, 0x3F6D48u);
    ctx->pc = 0x3F6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D40u;
    // 0x3f6d44: 0x34461012  ori         $a2, $v0, 0x1012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3F6D40u, 0x3F6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D48u;
label_3f6d48:
    // 0x3f6d48: 0xc09c424  jal         func_271090
    ctx->pc = 0x3F6D48u;
    SET_GPR_U32(ctx, 31, 0x3F6D50u);
    ctx->pc = 0x3F6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D48u;
    // 0x3f6d4c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271090u, 0x3F6D48u, 0x3F6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D50u;
label_3f6d50:
    // 0x3f6d50: 0xc0fdb90  jal         func_3F6E40
    ctx->pc = 0x3F6D50u;
    SET_GPR_U32(ctx, 31, 0x3F6D58u);
    ctx->pc = 0x3F6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D50u;
    // 0x3f6d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6E40u, 0x3F6D50u, 0x3F6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D58u;
label_3f6d58:
    // 0x3f6d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6d60: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D60u;
        // 0x3f6d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6D68u;
}
