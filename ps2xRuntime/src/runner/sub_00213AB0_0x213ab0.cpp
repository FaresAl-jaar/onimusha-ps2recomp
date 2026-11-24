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

// Function: sub_00213AB0
// Address: 0x213ab0 - 0x213b38
void sub_00213AB0_0x213ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213AB0_0x213ab0");
#endif

    switch (ctx->pc) {
        case 0x213aecu: goto label_213aec;
        case 0x213b00u: goto label_213b00;
        case 0x213b14u: goto label_213b14;
        default: break;
    }

    ctx->pc = 0x213ab0u;

    // 0x213ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ac0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213ac4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x213ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x213ac8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213acc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x213accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ad0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x213ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x213ad4: 0x26301f74  addiu       $s0, $s1, 0x1F74
    ctx->pc = 0x213ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
    // 0x213ad8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x213ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x213adc: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x213ADCu;
    {
        const bool branch_taken_0x213adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x213AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213ADCu;
        // 0x213ae0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213adc) {
            ctx->pc = 0x213AECu;
            goto label_213aec;
        }
    }
    ctx->pc = 0x213AE4u;
    // 0x213ae4: 0xc084082  jal         func_210208
    ctx->pc = 0x213AE4u;
    SET_GPR_U32(ctx, 31, 0x213AECu);
    ctx->pc = 0x213AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AE4u;
    // 0x213ae8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210208u, 0x213AE4u, 0x213AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AECu;
label_213aec:
    // 0x213aec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x213aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x213af0: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x213AF0u;
    {
        const bool branch_taken_0x213af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x213AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AF0u;
        // 0x213af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213af0) {
            ctx->pc = 0x213B00u;
            goto label_213b00;
        }
    }
    ctx->pc = 0x213AF8u;
    // 0x213af8: 0xc084082  jal         func_210208
    ctx->pc = 0x213AF8u;
    SET_GPR_U32(ctx, 31, 0x213B00u);
    ctx->pc = 0x213AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AF8u;
    // 0x213afc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210208u, 0x213AF8u, 0x213B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B00u;
label_213b00:
    // 0x213b00: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x213b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x213b04: 0x10b20003  beq         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x213B04u;
    {
        const bool branch_taken_0x213b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x213B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B04u;
        // 0x213b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b04) {
            ctx->pc = 0x213B14u;
            goto label_213b14;
        }
    }
    ctx->pc = 0x213B0Cu;
    // 0x213b0c: 0xc084082  jal         func_210208
    ctx->pc = 0x213B0Cu;
    SET_GPR_U32(ctx, 31, 0x213B14u);
    ctx->pc = 0x213B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B0Cu;
    // 0x213b10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210208u, 0x213B0Cu, 0x213B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B14u;
label_213b14:
    // 0x213b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213b1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x213b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213b28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213b28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213b30: 0x8086e0e  j           func_21B838
    ctx->pc = 0x213B30u;
    ctx->pc = 0x213B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B30u;
    // 0x213b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B838u;
    sub_0021B838_0x21b838(rdram, ctx, runtime); return;
    ctx->pc = 0x213B38u;
}
