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

// Function: sub_00249F68
// Address: 0x249f68 - 0x249ffc
void sub_00249F68_0x249f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249F68_0x249f68");
#endif

    switch (ctx->pc) {
        case 0x249f84u: goto label_249f84;
        default: break;
    }

    ctx->pc = 0x249f68u;

    // 0x249f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249f6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x249f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249f70: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x249F70u;
    {
        const bool branch_taken_0x249f70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x249F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F70u;
        // 0x249f74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f70) {
            ctx->pc = 0x249F90u;
            goto label_249f90;
        }
    }
    ctx->pc = 0x249F78u;
    // 0x249f78: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x249f7c: 0xc0925d4  jal         func_249750
    ctx->pc = 0x249F7Cu;
    SET_GPR_U32(ctx, 31, 0x249F84u);
    ctx->pc = 0x249F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249F7Cu;
    // 0x249f80: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x249F7Cu, 0x249F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F84u;
label_249f84:
    // 0x249f84: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x249F84u;
    {
        const bool branch_taken_0x249f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F84u;
        // 0x249f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f84) {
            ctx->pc = 0x249FF0u;
            goto label_249ff0;
        }
    }
    ctx->pc = 0x249F8Cu;
    // 0x249f8c: 0x0  nop
    ctx->pc = 0x249f8cu;
    // NOP
label_249f90:
    // 0x249f90: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x249F90u;
    {
        const bool branch_taken_0x249f90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x249F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F90u;
        // 0x249f94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f90) {
            ctx->pc = 0x249FA0u;
            goto label_249fa0;
        }
    }
    ctx->pc = 0x249F98u;
    // 0x249f98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x249F98u;
    {
        const bool branch_taken_0x249f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F98u;
        // 0x249f9c: 0xace5001c  sw          $a1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f98) {
            ctx->pc = 0x249FD0u;
            goto label_249fd0;
        }
    }
    ctx->pc = 0x249FA0u;
label_249fa0:
    // 0x249fa0: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249FA0u;
    {
        const bool branch_taken_0x249fa0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x249FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA0u;
        // 0x249fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa0) {
            ctx->pc = 0x249FB8u;
            goto label_249fb8;
        }
    }
    ctx->pc = 0x249FA8u;
    // 0x249fa8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x249fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x249fac: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x249facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x249fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x249FB0u;
    {
        const bool branch_taken_0x249fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FB0u;
        // 0x249fb4: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fb0) {
            ctx->pc = 0x249FD4u;
            goto label_249fd4;
        }
    }
    ctx->pc = 0x249FB8u;
label_249fb8:
    // 0x249fb8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x249FB8u;
    {
        const bool branch_taken_0x249fb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x249FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FB8u;
        // 0x249fbc: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fb8) {
            ctx->pc = 0x249FD4u;
            goto label_249fd4;
        }
    }
    ctx->pc = 0x249FC0u;
    // 0x249fc0: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x249fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x249fc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x249fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x249fc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x249FC8u;
    {
        const bool branch_taken_0x249fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FC8u;
        // 0x249fcc: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fc8) {
            ctx->pc = 0x249FD4u;
            goto label_249fd4;
        }
    }
    ctx->pc = 0x249FD0u;
label_249fd0:
    // 0x249fd0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_249fd4:
    // 0x249fd4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x249fd8: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x249fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x249fdc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x249fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249fe0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x249fe0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x249fe4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x249fe4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x249fe8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x249fe8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x249fec: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x249fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_249ff0:
    // 0x249ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x249FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FF4u;
        // 0x249ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FFCu;
}
