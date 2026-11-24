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

// Function: sub_00213EC0
// Address: 0x213ec0 - 0x213f50
void sub_00213EC0_0x213ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213EC0_0x213ec0");
#endif

    switch (ctx->pc) {
        case 0x213efcu: goto label_213efc;
        case 0x213f14u: goto label_213f14;
        case 0x213f2cu: goto label_213f2c;
        default: break;
    }

    ctx->pc = 0x213ec0u;

    // 0x213ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213ec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213ed4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ed8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213edc: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x213edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x213ee0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x213ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x213ee4: 0x26301f74  addiu       $s0, $s1, 0x1F74
    ctx->pc = 0x213ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
    // 0x213ee8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x213ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x213eec: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x213EECu;
    {
        const bool branch_taken_0x213eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x213EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EECu;
        // 0x213ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213eec) {
            ctx->pc = 0x213F00u;
            goto label_213f00;
        }
    }
    ctx->pc = 0x213EF4u;
    // 0x213ef4: 0xc084074  jal         func_2101D0
    ctx->pc = 0x213EF4u;
    SET_GPR_U32(ctx, 31, 0x213EFCu);
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x213EF4u, 0x213EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EFCu;
label_213efc:
    // 0x213efc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x213efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213f00:
    // 0x213f00: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x213f04: 0x50b30005  beql        $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x213F04u;
    {
        const bool branch_taken_0x213f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x213f04) {
            ctx->pc = 0x213F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F04u;
            // 0x213f08: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F1Cu;
            goto label_213f1c;
        }
    }
    ctx->pc = 0x213F0Cu;
    // 0x213f0c: 0xc084074  jal         func_2101D0
    ctx->pc = 0x213F0Cu;
    SET_GPR_U32(ctx, 31, 0x213F14u);
    ctx->pc = 0x213F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F0Cu;
    // 0x213f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x213F0Cu, 0x213F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F14u;
label_213f14:
    // 0x213f14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x213f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x213f18: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x213f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_213f1c:
    // 0x213f1c: 0x10b30005  beq         $a1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x213F1Cu;
    {
        const bool branch_taken_0x213f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x213F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F1Cu;
        // 0x213f20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f1c) {
            ctx->pc = 0x213F34u;
            goto label_213f34;
        }
    }
    ctx->pc = 0x213F24u;
    // 0x213f24: 0xc084074  jal         func_2101D0
    ctx->pc = 0x213F24u;
    SET_GPR_U32(ctx, 31, 0x213F2Cu);
    ctx->pc = 0x213F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F24u;
    // 0x213f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x213F24u, 0x213F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F2Cu;
label_213f2c:
    // 0x213f2c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x213f2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x213f30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x213f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_213f34:
    // 0x213f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213f44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213f48: 0x3e00008  jr          $ra
    ctx->pc = 0x213F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F48u;
        // 0x213f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213F50u;
}
