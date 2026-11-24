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

// Function: sub_00251820
// Address: 0x251820 - 0x2518f8
void sub_00251820_0x251820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251820_0x251820");
#endif

    switch (ctx->pc) {
        case 0x251888u: goto label_251888;
        case 0x2518d0u: goto label_2518d0;
        default: break;
    }

    ctx->pc = 0x251820u;

    // 0x251820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x251824: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x251824u;
    {
        const bool branch_taken_0x251824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251824u;
        // 0x251828: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251824) {
            ctx->pc = 0x251848u;
            goto label_251848;
        }
    }
    ctx->pc = 0x25182Cu;
    // 0x25182c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25182cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x251830: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x251834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251838: 0x2484ed10  addiu       $a0, $a0, -0x12F0
    ctx->pc = 0x251838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962448));
    // 0x25183c: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x25183cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x251840: 0x80944dc  j           func_251370
    ctx->pc = 0x251840u;
    ctx->pc = 0x251844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251840u;
    // 0x251844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x251848u;
label_251848:
    // 0x251848: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x251848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25184c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25184Cu;
    {
        const bool branch_taken_0x25184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25184c) {
            ctx->pc = 0x251850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25184Cu;
            // 0x251850: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251870u;
            goto label_251870;
        }
    }
    ctx->pc = 0x251854u;
    // 0x251854: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x251858: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x25185c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251860: 0x2484ed20  addiu       $a0, $a0, -0x12E0
    ctx->pc = 0x251860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962464));
    // 0x251864: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
    // 0x251868: 0x80944dc  j           func_251370
    ctx->pc = 0x251868u;
    ctx->pc = 0x25186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251868u;
    // 0x25186c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x251870u;
label_251870:
    // 0x251870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x251870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251874: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x251874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x251878: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x251878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25187c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25187Cu;
    {
        const bool branch_taken_0x25187c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x251880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25187Cu;
        // 0x251880: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25187c) {
            ctx->pc = 0x2518B0u;
            goto label_2518b0;
        }
    }
    ctx->pc = 0x251884u;
    // 0x251884: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x251884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_251888:
    // 0x251888: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x251888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x25188c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25188cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x251890: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x251890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x251894: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x251894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x251898: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x251898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25189c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x25189cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2518a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2518a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2518a4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2518a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2518a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2518A8u;
    {
        const bool branch_taken_0x2518a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2518ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518A8u;
        // 0x2518ac: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518a8) {
            ctx->pc = 0x251888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251888;
        }
    }
    ctx->pc = 0x2518B0u;
label_2518b0:
    // 0x2518b0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2518b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2518b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2518b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2518b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2518b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2518bc: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2518bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2518c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2518c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2518c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2518c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2518c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2518c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2518cc: 0x0  nop
    ctx->pc = 0x2518ccu;
    // NOP
label_2518d0:
    // 0x2518d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2518d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2518d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2518d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2518d8: 0x0  nop
    ctx->pc = 0x2518d8u;
    // NOP
    // 0x2518dc: 0x0  nop
    ctx->pc = 0x2518dcu;
    // NOP
    // 0x2518e0: 0x0  nop
    ctx->pc = 0x2518e0u;
    // NOP
    // 0x2518e4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2518E4u;
    {
        const bool branch_taken_0x2518e4 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x2518E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518E4u;
        // 0x2518e8: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518e4) {
            ctx->pc = 0x2518D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2518d0;
        }
    }
    ctx->pc = 0x2518ECu;
    // 0x2518ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2518ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2518f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2518F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2518F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518F0u;
        // 0x2518f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2518F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2518F8u;
}
