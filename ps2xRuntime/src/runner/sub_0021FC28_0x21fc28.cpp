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

// Function: sub_0021FC28
// Address: 0x21fc28 - 0x21fcc8
void sub_0021FC28_0x21fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FC28_0x21fc28");
#endif

    switch (ctx->pc) {
        case 0x21fc44u: goto label_21fc44;
        case 0x21fc74u: goto label_21fc74;
        default: break;
    }

    ctx->pc = 0x21fc28u;

    // 0x21fc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21fc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fc38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21fc3c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21FC3Cu;
    SET_GPR_U32(ctx, 31, 0x21FC44u);
    ctx->pc = 0x21FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC3Cu;
    // 0x21fc40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21FC3Cu, 0x21FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC44u;
label_21fc44:
    // 0x21fc44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FC44u;
    {
        const bool branch_taken_0x21fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC44u;
        // 0x21fc48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc44) {
            ctx->pc = 0x21FC68u;
            goto label_21fc68;
        }
    }
    ctx->pc = 0x21FC4Cu;
    // 0x21fc4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21fc50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fc54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fc58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21fc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fc5c: 0x34a50119  ori         $a1, $a1, 0x119
    ctx->pc = 0x21fc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)281);
    // 0x21fc60: 0x80848e0  j           func_212380
    ctx->pc = 0x21FC60u;
    ctx->pc = 0x21FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC60u;
    // 0x21fc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21FC68u;
label_21fc68:
    // 0x21fc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc6c: 0x260209f0  addiu       $v0, $s0, 0x9F0
    ctx->pc = 0x21fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    // 0x21fc70: 0x26040950  addiu       $a0, $s0, 0x950
    ctx->pc = 0x21fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
label_21fc74:
    // 0x21fc74: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x21fc74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21fc78: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x21fc78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21fc7c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x21fc7cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21fc80: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x21fc80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21fc84: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x21fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x21fc88: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x21fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x21fc8c: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x21fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x21fc90: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x21fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x21fc94: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x21fc98: 0x0  nop
    ctx->pc = 0x21fc98u;
    // NOP
    // 0x21fc9c: 0x0  nop
    ctx->pc = 0x21fc9cu;
    // NOP
    // 0x21fca0: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21FCA0u;
    {
        const bool branch_taken_0x21fca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCA0u;
        // 0x21fca4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fca0) {
            ctx->pc = 0x21FC74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fc74;
        }
    }
    ctx->pc = 0x21FCA8u;
    // 0x21fca8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x21fca8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21fcac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fcb0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x21fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x21fcb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fcb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fcb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCC0u;
        // 0x21fcc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FCC8u;
}
