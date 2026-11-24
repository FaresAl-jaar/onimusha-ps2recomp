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

// Function: sub_00227F78
// Address: 0x227f78 - 0x227fe8
void sub_00227F78_0x227f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227F78_0x227f78");
#endif

    ctx->pc = 0x227f78u;

    // 0x227f78: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x227f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x227f7c: 0x2464aac0  addiu       $a0, $v1, -0x5540
    ctx->pc = 0x227f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945472));
    // 0x227f80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x227f80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BAAC0u));
    // 0x227f84: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x227f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x227f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x227f8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x227f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BAAC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BAAC0u, _value); } while (0);
    // 0x227f90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x227f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BAAC0u));
    // 0x227f94: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x227F94u;
    {
        const bool branch_taken_0x227f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F94u;
        // 0x227f98: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f94) {
            ctx->pc = 0x227FD4u;
            goto label_227fd4;
        }
    }
    ctx->pc = 0x227F9Cu;
    // 0x227f9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x227f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227fa0: 0x8c45aac4  lw          $a1, -0x553C($v0)
    ctx->pc = 0x227fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945476)));
    // 0x227fa4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x227FA4u;
    {
        const bool branch_taken_0x227fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x227FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FA4u;
        // 0x227fa8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fa4) {
            ctx->pc = 0x227FD4u;
            goto label_227fd4;
        }
    }
    ctx->pc = 0x227FACu;
    // 0x227fac: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x227facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x227fb0: 0x8c43aac8  lw          $v1, -0x5538($v0)
    ctx->pc = 0x227fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945480)));
    // 0x227fb4: 0x38660c00  xori        $a2, $v1, 0xC00
    ctx->pc = 0x227fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3072);
    // 0x227fb8: 0x306300c7  andi        $v1, $v1, 0xC7
    ctx->pc = 0x227fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)199);
    // 0x227fbc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227FBCu;
    {
        const bool branch_taken_0x227fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x227FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FBCu;
        // 0x227fc0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fbc) {
            ctx->pc = 0x227FD4u;
            goto label_227fd4;
        }
    }
    ctx->pc = 0x227FC4u;
    // 0x227fc4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x227fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x227fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227fcc: 0x8c6395b0  lw          $v1, -0x6A50($v1)
    ctx->pc = 0x227fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940080)));
    // 0x227fd0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x227fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_227fd4:
    // 0x227fd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x227fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x227fd8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x227FD8u;
    {
        const bool branch_taken_0x227fd8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x227fd8) {
            ctx->pc = 0x227FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227FD8u;
            // 0x227fdc: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227FE0u;
            goto label_227fe0;
        }
    }
    ctx->pc = 0x227FE0u;
label_227fe0:
    // 0x227fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x227FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FE8u;
}
