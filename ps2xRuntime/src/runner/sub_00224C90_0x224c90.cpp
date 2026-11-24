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

// Function: sub_00224C90
// Address: 0x224c90 - 0x224d14
void sub_00224C90_0x224c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224C90_0x224c90");
#endif

    switch (ctx->pc) {
        case 0x224cc0u: goto label_224cc0;
        case 0x224cd8u: goto label_224cd8;
        default: break;
    }

    ctx->pc = 0x224c90u;

    // 0x224c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224c94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224c98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x224c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x224ca0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x224ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224ca8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224ca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224cac: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x224cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x224cb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x224cb8: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224CB8u;
    SET_GPR_U32(ctx, 31, 0x224CC0u);
    ctx->pc = 0x224CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CB8u;
    // 0x224cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224CB8u, 0x224CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CC0u;
label_224cc0:
    // 0x224cc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x224CC8u;
    {
        const bool branch_taken_0x224cc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CC8u;
        // 0x224ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cc8) {
            ctx->pc = 0x224CF8u;
            goto label_224cf8;
        }
    }
    ctx->pc = 0x224CD0u;
    // 0x224cd0: 0xc089396  jal         func_224E58
    ctx->pc = 0x224CD0u;
    SET_GPR_U32(ctx, 31, 0x224CD8u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224CD0u, 0x224CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CD8u;
label_224cd8:
    // 0x224cd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x224CD8u;
    {
        const bool branch_taken_0x224cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD8u;
        // 0x224cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cd8) {
            ctx->pc = 0x224CFCu;
            goto label_224cfc;
        }
    }
    ctx->pc = 0x224CE0u;
    // 0x224ce0: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x224ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x224ce4: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x224ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x224ce8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x224CE8u;
    {
        const bool branch_taken_0x224ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CE8u;
        // 0x224cec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ce8) {
            ctx->pc = 0x224CF4u;
            goto label_224cf4;
        }
    }
    ctx->pc = 0x224CF0u;
    // 0x224cf0: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x224cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_224cf4:
    // 0x224cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224cf8:
    // 0x224cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224cfc:
    // 0x224cfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224d08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x224D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D0Cu;
        // 0x224d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224D14u;
}
