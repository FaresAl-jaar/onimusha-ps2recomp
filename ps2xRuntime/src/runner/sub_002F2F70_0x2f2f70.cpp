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

// Function: sub_002F2F70
// Address: 0x2f2f70 - 0x2f3014
void sub_002F2F70_0x2f2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2F70_0x2f2f70");
#endif

    switch (ctx->pc) {
        case 0x2f2fdcu: goto label_2f2fdc;
        case 0x2f2fecu: goto label_2f2fec;
        default: break;
    }

    ctx->pc = 0x2f2f70u;

    // 0x2f2f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f2f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f2f74: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2f2f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f2f78: 0x24020942  addiu       $v0, $zero, 0x942
    ctx->pc = 0x2f2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2370));
    // 0x2f2f7c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F2F7Cu;
    {
        const bool branch_taken_0x2f2f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F7Cu;
        // 0x2f2f80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f7c) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2F84u;
    // 0x2f2f84: 0x24020940  addiu       $v0, $zero, 0x940
    ctx->pc = 0x2f2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2368));
    // 0x2f2f88: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F2F88u;
    {
        const bool branch_taken_0x2f2f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F88u;
        // 0x2f2f8c: 0x24020966  addiu       $v0, $zero, 0x966 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2406));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f88) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2F90u;
    // 0x2f2f90: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F2F90u;
    {
        const bool branch_taken_0x2f2f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F90u;
        // 0x2f2f94: 0x30830f00  andi        $v1, $a0, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f90) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2F98u;
    // 0x2f2f98: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f2f98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f2f9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f2f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f2fa0: 0x2861000e  slti        $at, $v1, 0xE
    ctx->pc = 0x2f2fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2f2fa4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F2FA4u;
    {
        const bool branch_taken_0x2f2fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FA4u;
        // 0x2f2fa8: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fa4) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2FACu;
    // 0x2f2fac: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2f2facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f2fb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2f2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f2fb4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f2fb8: 0x24428f96  addiu       $v0, $v0, -0x706A
    ctx->pc = 0x2f2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938518));
    // 0x2f2fbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f2fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2fc0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2f2fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2fc4: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2f2fc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f2fc8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2FC8u;
    {
        const bool branch_taken_0x2f2fc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FC8u;
        // 0x2f2fcc: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fc8) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2FD0u;
    // 0x2f2fd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2fd4: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x2F2FD4u;
    SET_GPR_U32(ctx, 31, 0x2F2FDCu);
    ctx->pc = 0x2F2FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FD4u;
    // 0x2f2fd8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x2F2FD4u, 0x2F2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FDCu;
label_2f2fdc:
    // 0x2f2fdc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f2fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2fe4: 0xc095824  jal         func_256090
    ctx->pc = 0x2F2FE4u;
    SET_GPR_U32(ctx, 31, 0x2F2FECu);
    ctx->pc = 0x2F2FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2FE4u;
    // 0x2f2fe8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256090u, 0x2F2FE4u, 0x2F2FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2FECu;
label_2f2fec:
    // 0x2f2fec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2FECu;
    {
        const bool branch_taken_0x2f2fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fec) {
            ctx->pc = 0x2F3000u;
            goto label_2f3000;
        }
    }
    ctx->pc = 0x2F2FF4u;
    // 0x2f2ff4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2FF4u;
    {
        const bool branch_taken_0x2f2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2FF4u;
        // 0x2f2ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ff4) {
            ctx->pc = 0x2F3008u;
            goto label_2f3008;
        }
    }
    ctx->pc = 0x2F2FFCu;
    // 0x2f2ffc: 0x0  nop
    ctx->pc = 0x2f2ffcu;
    // NOP
label_2f3000:
    // 0x2f3000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3004: 0x0  nop
    ctx->pc = 0x2f3004u;
    // NOP
label_2f3008:
    // 0x2f3008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f300c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F300Cu;
        // 0x2f3010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3014u;
}
