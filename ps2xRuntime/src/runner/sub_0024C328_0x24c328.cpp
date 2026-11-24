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

// Function: sub_0024C328
// Address: 0x24c328 - 0x24c3ec
void sub_0024C328_0x24c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C328_0x24c328");
#endif

    switch (ctx->pc) {
        case 0x24c378u: goto label_24c378;
        case 0x24c3c0u: goto label_24c3c0;
        default: break;
    }

    ctx->pc = 0x24c328u;

    // 0x24c328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24c33c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x24c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24c340: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C340u;
    {
        const bool branch_taken_0x24c340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c340) {
            ctx->pc = 0x24C344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C340u;
            // 0x24c344: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C368u;
            goto label_24c368;
        }
    }
    ctx->pc = 0x24C348u;
    // 0x24c348: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24c348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24c34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c354: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x24c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x24c358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c35c: 0x8093008  j           func_24C020
    ctx->pc = 0x24C35Cu;
    ctx->pc = 0x24C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C35Cu;
    // 0x24c360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24C364u;
    // 0x24c364: 0x0  nop
    ctx->pc = 0x24c364u;
    // NOP
label_24c368:
    // 0x24c368: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24c368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24c36c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c370: 0xc08dd84  jal         func_237610
    ctx->pc = 0x24C370u;
    SET_GPR_U32(ctx, 31, 0x24C378u);
    ctx->pc = 0x24C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C370u;
    // 0x24c374: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x24C370u, 0x24C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C378u;
label_24c378:
    // 0x24c378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c37c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24c380: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C380u;
    {
        const bool branch_taken_0x24c380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x24C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C380u;
        // 0x24c384: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c380) {
            ctx->pc = 0x24C3C8u;
            goto label_24c3c8;
        }
    }
    ctx->pc = 0x24C388u;
    // 0x24c388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C388u;
    {
        const bool branch_taken_0x24c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C388u;
        // 0x24c38c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c388) {
            ctx->pc = 0x24C3A8u;
            goto label_24c3a8;
        }
    }
    ctx->pc = 0x24C390u;
    // 0x24c390: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c394: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C394u;
    {
        const bool branch_taken_0x24c394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c394) {
            ctx->pc = 0x24C3B8u;
            goto label_24c3b8;
        }
    }
    ctx->pc = 0x24C39Cu;
    // 0x24c39c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24C39Cu;
    {
        const bool branch_taken_0x24c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C39Cu;
        // 0x24c3a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c39c) {
            ctx->pc = 0x24C3DCu;
            goto label_24c3dc;
        }
    }
    ctx->pc = 0x24C3A4u;
    // 0x24c3a4: 0x0  nop
    ctx->pc = 0x24c3a4u;
    // NOP
label_24c3a8:
    // 0x24c3a8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24C3A8u;
    {
        const bool branch_taken_0x24c3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c3a8) {
            ctx->pc = 0x24C3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C3A8u;
            // 0x24c3ac: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C3D8u;
            goto label_24c3d8;
        }
    }
    ctx->pc = 0x24C3B0u;
    // 0x24c3b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24C3B0u;
    {
        const bool branch_taken_0x24c3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3B0u;
        // 0x24c3b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3b0) {
            ctx->pc = 0x24C3DCu;
            goto label_24c3dc;
        }
    }
    ctx->pc = 0x24C3B8u;
label_24c3b8:
    // 0x24c3b8: 0xc08ddae  jal         func_2376B8
    ctx->pc = 0x24C3B8u;
    SET_GPR_U32(ctx, 31, 0x24C3C0u);
    ctx->pc = 0x24C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3B8u;
    // 0x24c3bc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2376B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376B8u, 0x24C3B8u, 0x24C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3C0u;
label_24c3c0:
    // 0x24c3c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24C3C0u;
    {
        const bool branch_taken_0x24c3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3C0u;
        // 0x24c3c4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3c0) {
            ctx->pc = 0x24C3D8u;
            goto label_24c3d8;
        }
    }
    ctx->pc = 0x24C3C8u;
label_24c3c8:
    // 0x24c3c8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x24c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x24c3cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c3d0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x24c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x24c3d4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x24c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_24c3d8:
    // 0x24c3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c3dc:
    // 0x24c3dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E4u;
        // 0x24c3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C3ECu;
}
