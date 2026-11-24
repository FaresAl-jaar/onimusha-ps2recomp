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

// Function: sub_0034DA90
// Address: 0x34da90 - 0x34db44
void sub_0034DA90_0x34da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DA90_0x34da90");
#endif

    switch (ctx->pc) {
        case 0x34dab8u: goto label_34dab8;
        case 0x34dad0u: goto label_34dad0;
        case 0x34db2cu: goto label_34db2c;
        default: break;
    }

    ctx->pc = 0x34da90u;

    // 0x34da90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34da94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34da94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34da9c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x34da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34daa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34daa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34daa4: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x34daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x34daa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34daa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34daac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34dab0: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34DAB0u;
    SET_GPR_U32(ctx, 31, 0x34DAB8u);
    ctx->pc = 0x34DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DAB0u;
    // 0x34dab4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34DAB0u, 0x34DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAB8u;
label_34dab8:
    // 0x34dab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34dab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dabc: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x34DABCu;
    {
        const bool branch_taken_0x34dabc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DABCu;
        // 0x34dac0: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dabc) {
            ctx->pc = 0x34DB30u;
            goto label_34db30;
        }
    }
    ctx->pc = 0x34DAC4u;
    // 0x34dac4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x34dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34dac8: 0xc0d3838  jal         func_34E0E0
    ctx->pc = 0x34DAC8u;
    SET_GPR_U32(ctx, 31, 0x34DAD0u);
    ctx->pc = 0x34DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DAC8u;
    // 0x34dacc: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E0E0u, 0x34DAC8u, 0x34DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DAD0u;
label_34dad0:
    // 0x34dad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34dad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dad4: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34DAD4u;
    {
        const bool branch_taken_0x34dad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dad4) {
            ctx->pc = 0x34DB30u;
            goto label_34db30;
        }
    }
    ctx->pc = 0x34DADCu;
    // 0x34dadc: 0x92030017  lbu         $v1, 0x17($s0)
    ctx->pc = 0x34dadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x34dae0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x34dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34dae4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34DAE4u;
    {
        const bool branch_taken_0x34dae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DAE4u;
        // 0x34dae8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dae4) {
            ctx->pc = 0x34DB10u;
            goto label_34db10;
        }
    }
    ctx->pc = 0x34DAECu;
    // 0x34daec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34DAECu;
    {
        const bool branch_taken_0x34daec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34daec) {
            ctx->pc = 0x34DB10u;
            goto label_34db10;
        }
    }
    ctx->pc = 0x34DAF4u;
    // 0x34daf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34daf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34DAF8u;
    {
        const bool branch_taken_0x34daf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34daf8) {
            ctx->pc = 0x34DB08u;
            goto label_34db08;
        }
    }
    ctx->pc = 0x34DB00u;
    // 0x34db00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34DB00u;
    {
        const bool branch_taken_0x34db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db00) {
            ctx->pc = 0x34DB18u;
            goto label_34db18;
        }
    }
    ctx->pc = 0x34DB08u;
label_34db08:
    // 0x34db08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34DB08u;
    {
        const bool branch_taken_0x34db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB08u;
        // 0x34db0c: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db08) {
            ctx->pc = 0x34DB18u;
            goto label_34db18;
        }
    }
    ctx->pc = 0x34DB10u;
label_34db10:
    // 0x34db10: 0x64030006  daddiu      $v1, $zero, 0x6
    ctx->pc = 0x34db10u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x34db14: 0x0  nop
    ctx->pc = 0x34db14u;
    // NOP
label_34db18:
    // 0x34db18: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x34db18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
    // 0x34db1c: 0xa0a00013  sb          $zero, 0x13($a1)
    ctx->pc = 0x34db1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x34db20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34db24: 0xc0d4420  jal         func_351080
    ctx->pc = 0x34DB24u;
    SET_GPR_U32(ctx, 31, 0x34DB2Cu);
    ctx->pc = 0x34DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DB24u;
    // 0x34db28: 0xa0a30014  sb          $v1, 0x14($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 20), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351080u, 0x34DB24u, 0x34DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DB2Cu;
label_34db2c:
    // 0x34db2c: 0x0  nop
    ctx->pc = 0x34db2cu;
    // NOP
label_34db30:
    // 0x34db30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34db30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34db34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34db34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34db38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34db38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB3Cu;
        // 0x34db40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DB44u;
}
