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

// Function: sub_00339C80
// Address: 0x339c80 - 0x339d30
void sub_00339C80_0x339c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339C80_0x339c80");
#endif

    switch (ctx->pc) {
        case 0x339d0cu: goto label_339d0c;
        default: break;
    }

    ctx->pc = 0x339c80u;

    // 0x339c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339c84: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x339c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x339c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339c8c: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x339c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x339c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339c94: 0x24a54060  addiu       $a1, $a1, 0x4060
    ctx->pc = 0x339c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16480));
    // 0x339c98: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x339c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x339c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339ca0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x339ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x339ca4: 0x10e3001c  beq         $a3, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x339CA4u;
    {
        const bool branch_taken_0x339ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x339CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CA4u;
        // 0x339ca8: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ca4) {
            ctx->pc = 0x339D18u;
            goto label_339d18;
        }
    }
    ctx->pc = 0x339CACu;
    // 0x339cac: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x339CACu;
    {
        const bool branch_taken_0x339cac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x339CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CACu;
        // 0x339cb0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339cac) {
            ctx->pc = 0x339CC8u;
            goto label_339cc8;
        }
    }
    ctx->pc = 0x339CB4u;
    // 0x339cb4: 0x10e30004  beq         $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339CB4u;
    {
        const bool branch_taken_0x339cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x339cb4) {
            ctx->pc = 0x339CC8u;
            goto label_339cc8;
        }
    }
    ctx->pc = 0x339CBCu;
    // 0x339cbc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x339CBCu;
    {
        const bool branch_taken_0x339cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339cbc) {
            ctx->pc = 0x339D20u;
            goto label_339d20;
        }
    }
    ctx->pc = 0x339CC4u;
    // 0x339cc4: 0x0  nop
    ctx->pc = 0x339cc4u;
    // NOP
label_339cc8:
    // 0x339cc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x339cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339ccc: 0x14e30008  bne         $a3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x339CCCu;
    {
        const bool branch_taken_0x339ccc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x339ccc) {
            ctx->pc = 0x339CF0u;
            goto label_339cf0;
        }
    }
    ctx->pc = 0x339CD4u;
    // 0x339cd4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x339cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x339cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x339cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339cdc: 0x90840007  lbu         $a0, 0x7($a0)
    ctx->pc = 0x339cdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x339ce0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x339ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x339ce4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x339CE4u;
    {
        const bool branch_taken_0x339ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x339ce4) {
            ctx->pc = 0x339D20u;
            goto label_339d20;
        }
    }
    ctx->pc = 0x339CECu;
    // 0x339cec: 0x0  nop
    ctx->pc = 0x339cecu;
    // NOP
label_339cf0:
    // 0x339cf0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x339cf4: 0xac20f84c  sw          $zero, -0x7B4($at)
    ctx->pc = 0x339cf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F84Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x90F84Cu, _value); } while (0);
    // 0x339cf8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339cfc: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x339cfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x339d00: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339d04: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x339D04u;
    SET_GPR_U32(ctx, 31, 0x339D0Cu);
    ctx->pc = 0x339D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D04u;
    // 0x339d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x339D04u, 0x339D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D0Cu;
label_339d0c:
    // 0x339d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x339D0Cu;
    {
        const bool branch_taken_0x339d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D0Cu;
        // 0x339d10: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d0c) {
            ctx->pc = 0x339D20u;
            goto label_339d20;
        }
    }
    ctx->pc = 0x339D14u;
    // 0x339d14: 0x0  nop
    ctx->pc = 0x339d14u;
    // NOP
label_339d18:
    // 0x339d18: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x339d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339d1c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x339d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_339d20:
    // 0x339d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339d28: 0x3e00008  jr          $ra
    ctx->pc = 0x339D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D28u;
        // 0x339d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339D30u;
}
