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

// Function: sub_003F5D30
// Address: 0x3f5d30 - 0x3f5d98
void sub_003F5D30_0x3f5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5D30_0x3f5d30");
#endif

    switch (ctx->pc) {
        case 0x3f5d50u: goto label_3f5d50;
        case 0x3f5d64u: goto label_3f5d64;
        default: break;
    }

    ctx->pc = 0x3f5d30u;

    // 0x3f5d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f5d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f5d34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f5d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f5d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f5d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f5d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f5d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f5d40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f5d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f5d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f5d48: 0x24110f12  addiu       $s1, $zero, 0xF12
    ctx->pc = 0x3f5d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3858));
    // 0x3f5d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f5d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d50:
    // 0x3f5d50: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f5d54: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3f5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3f5d58: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3f5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3f5d5c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3F5D5Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D64u);
    ctx->pc = 0x3F5D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5D5Cu;
    // 0x3f5d60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3F5D5Cu, 0x3F5D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5D64u;
label_3f5d64:
    // 0x3f5d64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f5d68: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x3f5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x3f5d6c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x3f5d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3f5d70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3f5d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3f5d74: 0x2e43000e  sltiu       $v1, $s2, 0xE
    ctx->pc = 0x3f5d74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x3f5d78: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3F5D78u;
    {
        const bool branch_taken_0x3f5d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D78u;
        // 0x3f5d7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5d78) {
            ctx->pc = 0x3F5D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f5d50;
        }
    }
    ctx->pc = 0x3F5D80u;
    // 0x3f5d80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f5d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f5d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f5d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f5d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f5d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5d90: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5D90u;
        // 0x3f5d94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5D98u;
}
