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

// Function: sub_0020A7A8
// Address: 0x20a7a8 - 0x20a868
void sub_0020A7A8_0x20a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A7A8_0x20a7a8");
#endif

    switch (ctx->pc) {
        case 0x20a7c4u: goto label_20a7c4;
        case 0x20a824u: goto label_20a824;
        case 0x20a838u: goto label_20a838;
        case 0x20a844u: goto label_20a844;
        case 0x20a850u: goto label_20a850;
        default: break;
    }

    ctx->pc = 0x20a7a8u;

    // 0x20a7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a7bc: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A7BCu;
    SET_GPR_U32(ctx, 31, 0x20A7C4u);
    ctx->pc = 0x20A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7BCu;
    // 0x20a7c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A7BCu, 0x20A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7C4u;
label_20a7c4:
    // 0x20a7c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20a7c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a7cc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a7d0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A7D0u;
    {
        const bool branch_taken_0x20a7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7D0u;
        // 0x20a7d4: 0x248484f0  addiu       $a0, $a0, -0x7B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7d0) {
            ctx->pc = 0x20A7F0u;
            goto label_20a7f0;
        }
    }
    ctx->pc = 0x20A7D8u;
    // 0x20a7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a7e4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A7E4u;
    ctx->pc = 0x20A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7E4u;
    // 0x20a7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A7ECu;
    // 0x20a7ec: 0x0  nop
    ctx->pc = 0x20a7ecu;
    // NOP
label_20a7f0:
    // 0x20a7f0: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x20a7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20a7f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A7F4u;
    {
        const bool branch_taken_0x20a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7F4u;
        // 0x20a7f8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7f4) {
            ctx->pc = 0x20A808u;
            goto label_20a808;
        }
    }
    ctx->pc = 0x20A7FCu;
    // 0x20a7fc: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A7FCu;
    {
        const bool branch_taken_0x20a7fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a7fc) {
            ctx->pc = 0x20A800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A7FCu;
            // 0x20a800: 0xa2020071  sb          $v0, 0x71($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A804u;
            goto label_20a804;
        }
    }
    ctx->pc = 0x20A804u;
label_20a804:
    // 0x20a804: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x20a804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_20a808:
    // 0x20a808: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20A808u;
    {
        const bool branch_taken_0x20a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a808) {
            ctx->pc = 0x20A80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A808u;
            // 0x20a80c: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A83Cu;
            goto label_20a83c;
        }
    }
    ctx->pc = 0x20A810u;
    // 0x20a810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a814: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A814u;
    {
        const bool branch_taken_0x20a814 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a814) {
            ctx->pc = 0x20A818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A814u;
            // 0x20a818: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A83Cu;
            goto label_20a83c;
        }
    }
    ctx->pc = 0x20A81Cu;
    // 0x20a81c: 0xc08412c  jal         func_2104B0
    ctx->pc = 0x20A81Cu;
    SET_GPR_U32(ctx, 31, 0x20A824u);
    ctx->pc = 0x2104B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2104B0u, 0x20A81Cu, 0x20A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A824u;
label_20a824:
    // 0x20a824: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A828u;
    {
        const bool branch_taken_0x20a828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A828u;
        // 0x20a82c: 0x24848520  addiu       $a0, $a0, -0x7AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a828) {
            ctx->pc = 0x20A838u;
            goto label_20a838;
        }
    }
    ctx->pc = 0x20A830u;
    // 0x20a830: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20A830u;
    SET_GPR_U32(ctx, 31, 0x20A838u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20A830u, 0x20A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A838u;
label_20a838:
    // 0x20a838: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x20a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
label_20a83c:
    // 0x20a83c: 0xc082c76  jal         func_20B1D8
    ctx->pc = 0x20A83Cu;
    SET_GPR_U32(ctx, 31, 0x20A844u);
    ctx->pc = 0x20A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A83Cu;
    // 0x20a840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1D8u, 0x20A83Cu, 0x20A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A844u;
label_20a844:
    // 0x20a844: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x20a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x20a848: 0xc082c76  jal         func_20B1D8
    ctx->pc = 0x20A848u;
    SET_GPR_U32(ctx, 31, 0x20A850u);
    ctx->pc = 0x20A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A848u;
    // 0x20a84c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1D8u, 0x20A848u, 0x20A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A850u;
label_20a850:
    // 0x20a850: 0xa2110070  sb          $s1, 0x70($s0)
    ctx->pc = 0x20a850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 17));
    // 0x20a854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a85c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a860: 0x3e00008  jr          $ra
    ctx->pc = 0x20A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A860u;
        // 0x20a864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A868u;
}
