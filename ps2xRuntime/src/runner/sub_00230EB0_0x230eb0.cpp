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

// Function: sub_00230EB0
// Address: 0x230eb0 - 0x230f74
void sub_00230EB0_0x230eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230EB0_0x230eb0");
#endif

    switch (ctx->pc) {
        case 0x230edcu: goto label_230edc;
        case 0x230ef0u: goto label_230ef0;
        case 0x230f2cu: goto label_230f2c;
        case 0x230f40u: goto label_230f40;
        case 0x230f5cu: goto label_230f5c;
        default: break;
    }

    ctx->pc = 0x230eb0u;

    // 0x230eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ec0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ec4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x230ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230ec8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x230ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230ed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230ed4: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230ED4u;
    SET_GPR_U32(ctx, 31, 0x230EDCu);
    ctx->pc = 0x230ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230ED4u;
    // 0x230ed8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230ED4u, 0x230EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EDCu;
label_230edc:
    // 0x230edc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230ee0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230EE0u;
    {
        const bool branch_taken_0x230ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x230EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EE0u;
        // 0x230ee4: 0x2484a7d0  addiu       $a0, $a0, -0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ee0) {
            ctx->pc = 0x230EF8u;
            goto label_230ef8;
        }
    }
    ctx->pc = 0x230EE8u;
    // 0x230ee8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x230EE8u;
    SET_GPR_U32(ctx, 31, 0x230EF0u);
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230EE8u, 0x230EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EF0u;
label_230ef0:
    // 0x230ef0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x230EF0u;
    {
        const bool branch_taken_0x230ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EF0u;
        // 0x230ef4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ef0) {
            ctx->pc = 0x230F60u;
            goto label_230f60;
        }
    }
    ctx->pc = 0x230EF8u;
label_230ef8:
    // 0x230ef8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x230ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x230efc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x230efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230f00: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x230F00u;
    {
        const bool branch_taken_0x230f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x230F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F00u;
        // 0x230f04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f00) {
            ctx->pc = 0x230F5Cu;
            goto label_230f5c;
        }
    }
    ctx->pc = 0x230F08u;
    // 0x230f08: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230F08u;
    {
        const bool branch_taken_0x230f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230f08) {
            ctx->pc = 0x230F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F08u;
            // 0x230f0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F18u;
            goto label_230f18;
        }
    }
    ctx->pc = 0x230F10u;
    // 0x230f10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x230F10u;
    {
        const bool branch_taken_0x230f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F10u;
        // 0x230f14: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f10) {
            ctx->pc = 0x230F5Cu;
            goto label_230f5c;
        }
    }
    ctx->pc = 0x230F18u;
label_230f18:
    // 0x230f18: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230F18u;
    {
        const bool branch_taken_0x230f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x230f18) {
            ctx->pc = 0x230F38u;
            goto label_230f38;
        }
    }
    ctx->pc = 0x230F20u;
    // 0x230f20: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x230f24: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x230F24u;
    SET_GPR_U32(ctx, 31, 0x230F2Cu);
    ctx->pc = 0x230F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F24u;
    // 0x230f28: 0x2484a7f8  addiu       $a0, $a0, -0x5808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x230F24u, 0x230F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F2Cu;
label_230f2c:
    // 0x230f2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x230F2Cu;
    {
        const bool branch_taken_0x230f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F2Cu;
        // 0x230f30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f2c) {
            ctx->pc = 0x230F60u;
            goto label_230f60;
        }
    }
    ctx->pc = 0x230F34u;
    // 0x230f34: 0x0  nop
    ctx->pc = 0x230f34u;
    // NOP
label_230f38:
    // 0x230f38: 0xc08de12  jal         func_237848
    ctx->pc = 0x230F38u;
    SET_GPR_U32(ctx, 31, 0x230F40u);
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x230F38u, 0x230F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F40u;
label_230f40:
    // 0x230f40: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x230f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x230f44: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x230f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230f4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f50: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x230f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230f54: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230F54u;
    SET_GPR_U32(ctx, 31, 0x230F5Cu);
    ctx->pc = 0x230F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F54u;
    // 0x230f58: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230F54u, 0x230F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F5Cu;
label_230f5c:
    // 0x230f5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x230f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_230f60:
    // 0x230f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x230F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F6Cu;
        // 0x230f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230F74u;
}
