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

// Function: sub_0028F660
// Address: 0x28f660 - 0x28f6e0
void sub_0028F660_0x28f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F660_0x28f660");
#endif

    ctx->pc = 0x28f660u;

    // 0x28f660: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x28f660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x28f664: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x28f664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x28f668: 0x410c3  sra         $v0, $a0, 3
    ctx->pc = 0x28f668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 3));
    // 0x28f66c: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x28f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x28f670: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x28f670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28f678: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F678u;
    {
        const bool branch_taken_0x28f678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F678u;
        // 0x28f67c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f678) {
            ctx->pc = 0x28F6B0u;
            goto label_28f6b0;
        }
    }
    ctx->pc = 0x28F680u;
    // 0x28f680: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28F680u;
    {
        const bool branch_taken_0x28f680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f680) {
            ctx->pc = 0x28F6A8u;
            goto label_28f6a8;
        }
    }
    ctx->pc = 0x28F688u;
    // 0x28f688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f68c: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F68Cu;
    {
        const bool branch_taken_0x28f68c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f68c) {
            ctx->pc = 0x28F6A0u;
            goto label_28f6a0;
        }
    }
    ctx->pc = 0x28F694u;
    // 0x28f694: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28F694u;
    {
        const bool branch_taken_0x28f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f694) {
            ctx->pc = 0x28F6D8u;
            goto label_28f6d8;
        }
    }
    ctx->pc = 0x28F69Cu;
    // 0x28f69c: 0x0  nop
    ctx->pc = 0x28f69cu;
    // NOP
label_28f6a0:
    // 0x28f6a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28F6A0u;
    {
        const bool branch_taken_0x28f6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6A0u;
        // 0x28f6a4: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6a0) {
            ctx->pc = 0x28F6D8u;
            goto label_28f6d8;
        }
    }
    ctx->pc = 0x28F6A8u;
label_28f6a8:
    // 0x28f6a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28F6A8u;
    {
        const bool branch_taken_0x28f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6A8u;
        // 0x28f6ac: 0xa5060000  sh          $a2, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6a8) {
            ctx->pc = 0x28F6D8u;
            goto label_28f6d8;
        }
    }
    ctx->pc = 0x28F6B0u;
label_28f6b0:
    // 0x28f6b0: 0x41143  sra         $v0, $a0, 5
    ctx->pc = 0x28f6b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
    // 0x28f6b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f6b8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F6B8u;
    {
        const bool branch_taken_0x28f6b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6B8u;
        // 0x28f6bc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6b8) {
            ctx->pc = 0x28F6C8u;
            goto label_28f6c8;
        }
    }
    ctx->pc = 0x28F6C0u;
    // 0x28f6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F6C0u;
    {
        const bool branch_taken_0x28f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6C0u;
        // 0x28f6c4: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6c0) {
            ctx->pc = 0x28F6D8u;
            goto label_28f6d8;
        }
    }
    ctx->pc = 0x28F6C8u;
label_28f6c8:
    // 0x28f6c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f6cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x28f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28f6d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28f6d4: 0x0  nop
    ctx->pc = 0x28f6d4u;
    // NOP
label_28f6d8:
    // 0x28f6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F6D8u;
        // 0x28f6dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F6E0u;
}
