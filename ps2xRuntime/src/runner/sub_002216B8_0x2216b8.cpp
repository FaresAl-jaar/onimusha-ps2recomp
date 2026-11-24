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

// Function: sub_002216B8
// Address: 0x2216b8 - 0x22177c
void sub_002216B8_0x2216b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002216B8_0x2216b8");
#endif

    switch (ctx->pc) {
        case 0x2216e8u: goto label_2216e8;
        case 0x22175cu: goto label_22175c;
        default: break;
    }

    ctx->pc = 0x2216b8u;

    // 0x2216b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2216b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2216bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2216bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2216c0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2216c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2216c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2216c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2216c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2216ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2216d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2216d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2216d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2216d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2216d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2216dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2216e0: 0xc084968  jal         func_2125A0
    ctx->pc = 0x2216E0u;
    SET_GPR_U32(ctx, 31, 0x2216E8u);
    ctx->pc = 0x2216E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216E0u;
    // 0x2216e4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x2216E0u, 0x2216E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216E8u;
label_2216e8:
    // 0x2216e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2216e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216ec: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2216ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2216f0: 0x26060a0c  addiu       $a2, $s0, 0xA0C
    ctx->pc = 0x2216f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
    // 0x2216f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2216F4u;
    {
        const bool branch_taken_0x2216f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216F4u;
        // 0x2216f8: 0x34a50126  ori         $a1, $a1, 0x126 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)294);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216f4) {
            ctx->pc = 0x221718u;
            goto label_221718;
        }
    }
    ctx->pc = 0x2216FCu;
    // 0x2216fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2216fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x221708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22170c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221710: 0x80848e0  j           func_212380
    ctx->pc = 0x221710u;
    ctx->pc = 0x221714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221710u;
    // 0x221714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x221718u;
label_221718:
    // 0x221718: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x221718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x22171c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22171Cu;
    {
        const bool branch_taken_0x22171c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22171c) {
            ctx->pc = 0x221720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22171Cu;
            // 0x221720: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221730u;
            goto label_221730;
        }
    }
    ctx->pc = 0x221724u;
    // 0x221724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221728: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x221728u;
    {
        const bool branch_taken_0x221728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221728u;
        // 0x22172c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221728) {
            ctx->pc = 0x221760u;
            goto label_221760;
        }
    }
    ctx->pc = 0x221730u;
label_221730:
    // 0x221730: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x221730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221734: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x221734u;
    {
        const bool branch_taken_0x221734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x221734) {
            ctx->pc = 0x221738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221734u;
            // 0x221738: 0x8cc800b4  lw          $t0, 0xB4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221748u;
            goto label_221748;
        }
    }
    ctx->pc = 0x22173Cu;
    // 0x22173c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22173Cu;
    {
        const bool branch_taken_0x22173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22173Cu;
        // 0x221740: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22173c) {
            ctx->pc = 0x221760u;
            goto label_221760;
        }
    }
    ctx->pc = 0x221744u;
    // 0x221744: 0x0  nop
    ctx->pc = 0x221744u;
    // NOP
label_221748:
    // 0x221748: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x221748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22174c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x221750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221754: 0xc0885e0  jal         func_221780
    ctx->pc = 0x221754u;
    SET_GPR_U32(ctx, 31, 0x22175Cu);
    ctx->pc = 0x221758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221754u;
    // 0x221758: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221780u, 0x221754u, 0x22175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22175Cu;
label_22175c:
    // 0x22175c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22175cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221760:
    // 0x221760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22176c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22176cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x221770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221774: 0x3e00008  jr          $ra
    ctx->pc = 0x221774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221774u;
        // 0x221778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22177Cu;
}
