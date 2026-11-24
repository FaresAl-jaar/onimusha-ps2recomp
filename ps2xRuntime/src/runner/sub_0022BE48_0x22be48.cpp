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

// Function: sub_0022BE48
// Address: 0x22be48 - 0x22bf48
void sub_0022BE48_0x22be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE48_0x22be48");
#endif

    switch (ctx->pc) {
        case 0x22be9cu: goto label_22be9c;
        case 0x22beb4u: goto label_22beb4;
        default: break;
    }

    ctx->pc = 0x22be48u;

    // 0x22be48: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x22be48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22be4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22be4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22be50: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x22be50u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x22be54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22be58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22be5c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x22be5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22be60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22be64: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x22be64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x22be68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x22be6c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x22be6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be70: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x22be70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be74: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x22BE74u;
    {
        const bool branch_taken_0x22be74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE74u;
        // 0x22be78: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be74) {
            ctx->pc = 0x22BF20u;
            goto label_22bf20;
        }
    }
    ctx->pc = 0x22BE7Cu;
    // 0x22be7c: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x22be7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x22be80: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x22BE80u;
    {
        const bool branch_taken_0x22be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be80) {
            ctx->pc = 0x22BE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE80u;
            // 0x22be84: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BEC0u;
            goto label_22bec0;
        }
    }
    ctx->pc = 0x22BE88u;
    // 0x22be88: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22be8c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x22be8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be90: 0x24a5a230  addiu       $a1, $a1, -0x5DD0
    ctx->pc = 0x22be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943280));
    // 0x22be94: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x22BE94u;
    SET_GPR_U32(ctx, 31, 0x22BE9Cu);
    ctx->pc = 0x22BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE94u;
    // 0x22be98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x22BE94u, 0x22BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE9Cu;
label_22be9c:
    // 0x22be9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22bea0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22bea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bea8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22bea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22beac: 0xc08ac64  jal         func_22B190
    ctx->pc = 0x22BEACu;
    SET_GPR_U32(ctx, 31, 0x22BEB4u);
    ctx->pc = 0x22BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEACu;
    // 0x22beb0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B190u, 0x22BEACu, 0x22BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEB4u;
label_22beb4:
    // 0x22beb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22BEB4u;
    {
        const bool branch_taken_0x22beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEB4u;
        // 0x22beb8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22beb4) {
            ctx->pc = 0x22BF30u;
            goto label_22bf30;
        }
    }
    ctx->pc = 0x22BEBCu;
    // 0x22bebc: 0x0  nop
    ctx->pc = 0x22bebcu;
    // NOP
label_22bec0:
    // 0x22bec0: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x22BEC0u;
    {
        const bool branch_taken_0x22bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bec0) {
            ctx->pc = 0x22BEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BEC0u;
            // 0x22bec4: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF24u;
            goto label_22bf24;
        }
    }
    ctx->pc = 0x22BEC8u;
    // 0x22bec8: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x22bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x22becc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22BECCu;
    {
        const bool branch_taken_0x22becc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22becc) {
            ctx->pc = 0x22BED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BECCu;
            // 0x22bed0: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF08u;
            goto label_22bf08;
        }
    }
    ctx->pc = 0x22BED4u;
    // 0x22bed4: 0x856200a4  lh          $v0, 0xA4($t3)
    ctx->pc = 0x22bed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x22bed8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22BED8u;
    {
        const bool branch_taken_0x22bed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bed8) {
            ctx->pc = 0x22BEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BED8u;
            // 0x22bedc: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF08u;
            goto label_22bf08;
        }
    }
    ctx->pc = 0x22BEE0u;
    // 0x22bee0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22bee4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22bee8: 0x9443b2fc  lhu         $v1, -0x4D04($v0)
    ctx->pc = 0x22bee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x4BB2FCu));
    // 0x22beec: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x22beecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x22bef0: 0xa56300a0  sh          $v1, 0xA0($t3)
    ctx->pc = 0x22bef0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bef4: 0x9482b2fe  lhu         $v0, -0x4D02($a0)
    ctx->pc = 0x22bef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x4BB2FEu));
    // 0x22bef8: 0xa56200a2  sh          $v0, 0xA2($t3)
    ctx->pc = 0x22bef8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x22befc: 0x94a3b300  lhu         $v1, -0x4D00($a1)
    ctx->pc = 0x22befcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x4BB300u));
    // 0x22bf00: 0xa56300a4  sh          $v1, 0xA4($t3)
    ctx->pc = 0x22bf00u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bf04: 0x956200a0  lhu         $v0, 0xA0($t3)
    ctx->pc = 0x22bf04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
label_22bf08:
    // 0x22bf08: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x22bf08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22bf0c: 0x956300a2  lhu         $v1, 0xA2($t3)
    ctx->pc = 0x22bf0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 162)));
    // 0x22bf10: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x22bf10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bf14: 0x956200a4  lhu         $v0, 0xA4($t3)
    ctx->pc = 0x22bf14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x22bf18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22BF18u;
    {
        const bool branch_taken_0x22bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF18u;
        // 0x22bf1c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf18) {
            ctx->pc = 0x22BF2Cu;
            goto label_22bf2c;
        }
    }
    ctx->pc = 0x22BF20u;
label_22bf20:
    // 0x22bf20: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x22bf20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_22bf24:
    // 0x22bf24: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x22bf24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22bf28: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x22bf28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_22bf2c:
    // 0x22bf2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22bf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22bf30:
    // 0x22bf30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22bf30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22bf34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bf38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22bf38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bf3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22bf3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22bf40: 0x3e00008  jr          $ra
    ctx->pc = 0x22BF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF40u;
        // 0x22bf44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BF48u;
}
