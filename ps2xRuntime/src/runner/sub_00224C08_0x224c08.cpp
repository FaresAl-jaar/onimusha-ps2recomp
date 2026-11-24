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

// Function: sub_00224C08
// Address: 0x224c08 - 0x224c8c
void sub_00224C08_0x224c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224C08_0x224c08");
#endif

    switch (ctx->pc) {
        case 0x224c38u: goto label_224c38;
        case 0x224c50u: goto label_224c50;
        default: break;
    }

    ctx->pc = 0x224c08u;

    // 0x224c08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224c0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224c10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x224c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x224c18: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x224c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224c20: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224c24: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x224c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x224c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224c2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x224c30: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224C30u;
    SET_GPR_U32(ctx, 31, 0x224C38u);
    ctx->pc = 0x224C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C30u;
    // 0x224c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224C30u, 0x224C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C38u;
label_224c38:
    // 0x224c38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c40: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x224C40u;
    {
        const bool branch_taken_0x224c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C40u;
        // 0x224c44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c40) {
            ctx->pc = 0x224C70u;
            goto label_224c70;
        }
    }
    ctx->pc = 0x224C48u;
    // 0x224c48: 0xc089396  jal         func_224E58
    ctx->pc = 0x224C48u;
    SET_GPR_U32(ctx, 31, 0x224C50u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224C48u, 0x224C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C50u;
label_224c50:
    // 0x224c50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x224C50u;
    {
        const bool branch_taken_0x224c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C50u;
        // 0x224c54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c50) {
            ctx->pc = 0x224C74u;
            goto label_224c74;
        }
    }
    ctx->pc = 0x224C58u;
    // 0x224c58: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x224c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x224c5c: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x224c5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x224c60: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x224C60u;
    {
        const bool branch_taken_0x224c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C60u;
        // 0x224c64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c60) {
            ctx->pc = 0x224C6Cu;
            goto label_224c6c;
        }
    }
    ctx->pc = 0x224C68u;
    // 0x224c68: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x224c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_224c6c:
    // 0x224c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224c70:
    // 0x224c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224c74:
    // 0x224c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224c78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224c7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224c84: 0x3e00008  jr          $ra
    ctx->pc = 0x224C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C84u;
        // 0x224c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224C8Cu;
}
