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

// Function: sub_00249960
// Address: 0x249960 - 0x2499d8
void sub_00249960_0x249960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249960_0x249960");
#endif

    switch (ctx->pc) {
        case 0x249984u: goto label_249984;
        case 0x249998u: goto label_249998;
        case 0x2499acu: goto label_2499ac;
        default: break;
    }

    ctx->pc = 0x249960u;

    // 0x249960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249964: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x249964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x249968: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x249968u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
    // 0x24996c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x249974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x249978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x249978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24997c: 0xc094ece  jal         func_253B38
    ctx->pc = 0x24997Cu;
    SET_GPR_U32(ctx, 31, 0x249984u);
    ctx->pc = 0x249980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24997Cu;
    // 0x249980: 0x26640cf4  addiu       $a0, $s3, 0xCF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B38u, 0x24997Cu, 0x249984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249984u;
label_249984:
    // 0x249984: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249984u;
    {
        const bool branch_taken_0x249984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249984u;
        // 0x249988: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249984) {
            ctx->pc = 0x2499BCu;
            goto label_2499bc;
        }
    }
    ctx->pc = 0x24998Cu;
    // 0x24998c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24998cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249990: 0x24500d60  addiu       $s0, $v0, 0xD60
    ctx->pc = 0x249990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x249994: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x249994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_249998:
    // 0x249998: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x249998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24999c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24999Cu;
    {
        const bool branch_taken_0x24999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24999c) {
            ctx->pc = 0x2499A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24999Cu;
            // 0x2499a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2499B0u;
            goto label_2499b0;
        }
    }
    ctx->pc = 0x2499A4u;
    // 0x2499a4: 0xc092626  jal         func_249898
    ctx->pc = 0x2499A4u;
    SET_GPR_U32(ctx, 31, 0x2499ACu);
    ctx->pc = 0x2499A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499A4u;
    // 0x2499a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249898u, 0x2499A4u, 0x2499ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499ACu;
label_2499ac:
    // 0x2499ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2499acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2499b0:
    // 0x2499b0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2499B0u;
    {
        const bool branch_taken_0x2499b0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2499B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499B0u;
        // 0x2499b4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499b0) {
            ctx->pc = 0x249998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249998;
        }
    }
    ctx->pc = 0x2499B8u;
    // 0x2499b8: 0xae600cf4  sw          $zero, 0xCF4($s3)
    ctx->pc = 0x2499b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3316), GPR_U32(ctx, 0));
label_2499bc:
    // 0x2499bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2499bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2499c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2499c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2499c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2499c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2499c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2499c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2499cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2499ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2499d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2499D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2499D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499D0u;
        // 0x2499d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2499D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2499D8u;
}
