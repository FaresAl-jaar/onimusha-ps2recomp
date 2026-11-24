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

// Function: sub_0021C668
// Address: 0x21c668 - 0x21c710
void sub_0021C668_0x21c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C668_0x21c668");
#endif

    switch (ctx->pc) {
        case 0x21c698u: goto label_21c698;
        case 0x21c6acu: goto label_21c6ac;
        case 0x21c6d0u: goto label_21c6d0;
        case 0x21c6e4u: goto label_21c6e4;
        default: break;
    }

    ctx->pc = 0x21c668u;

    // 0x21c668: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c66c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c67c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c680: 0x26300a0c  addiu       $s0, $s1, 0xA0C
    ctx->pc = 0x21c680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x21c684: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x21c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21c688: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x21C688u;
    {
        const bool branch_taken_0x21c688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21c688) {
            ctx->pc = 0x21C68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C688u;
            // 0x21c68c: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C6B8u;
            goto label_21c6b8;
        }
    }
    ctx->pc = 0x21C690u;
    // 0x21c690: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x21C690u;
    SET_GPR_U32(ctx, 31, 0x21C698u);
    ctx->pc = 0x21C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C690u;
    // 0x21c694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x21C690u, 0x21C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C698u;
label_21c698:
    // 0x21c698: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C698u;
    {
        const bool branch_taken_0x21c698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c698) {
            ctx->pc = 0x21C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C698u;
            // 0x21c69c: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C6B8u;
            goto label_21c6b8;
        }
    }
    ctx->pc = 0x21C6A0u;
    // 0x21c6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6a4: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x21C6A4u;
    SET_GPR_U32(ctx, 31, 0x21C6ACu);
    ctx->pc = 0x21C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6A4u;
    // 0x21c6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA20u, 0x21C6A4u, 0x21C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6ACu;
label_21c6ac:
    // 0x21c6ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21C6ACu;
    {
        const bool branch_taken_0x21c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6ac) {
            ctx->pc = 0x21C6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C6ACu;
            // 0x21c6b0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C6B4u;
            goto label_21c6b4;
        }
    }
    ctx->pc = 0x21C6B4u;
label_21c6b4:
    // 0x21c6b4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x21c6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_21c6b8:
    // 0x21c6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c6bc: 0x54c2000e  bnel        $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21C6BCu;
    {
        const bool branch_taken_0x21c6bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21c6bc) {
            ctx->pc = 0x21C6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C6BCu;
            // 0x21c6c0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C6F8u;
            goto label_21c6f8;
        }
    }
    ctx->pc = 0x21C6C4u;
    // 0x21c6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6c8: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x21C6C8u;
    SET_GPR_U32(ctx, 31, 0x21C6D0u);
    ctx->pc = 0x21C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6C8u;
    // 0x21c6cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x21C6C8u, 0x21C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6D0u;
label_21c6d0:
    // 0x21c6d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C6D0u;
    {
        const bool branch_taken_0x21c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c6d0) {
            ctx->pc = 0x21C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C6D0u;
            // 0x21c6d4: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C6F4u;
            goto label_21c6f4;
        }
    }
    ctx->pc = 0x21C6D8u;
    // 0x21c6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6dc: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x21C6DCu;
    SET_GPR_U32(ctx, 31, 0x21C6E4u);
    ctx->pc = 0x21C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C6DCu;
    // 0x21c6e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA20u, 0x21C6DCu, 0x21C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6E4u;
label_21c6e4:
    // 0x21c6e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C6E4u;
    {
        const bool branch_taken_0x21c6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c6e4) {
            ctx->pc = 0x21C6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C6E4u;
            // 0x21c6e8: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C6F4u;
            goto label_21c6f4;
        }
    }
    ctx->pc = 0x21C6ECu;
    // 0x21c6ec: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x21c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x21c6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21c6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c6f4:
    // 0x21c6f4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x21c6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_21c6f8:
    // 0x21c6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c708: 0x8087b52  j           func_21ED48
    ctx->pc = 0x21C708u;
    ctx->pc = 0x21C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C708u;
    // 0x21c70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED48u;
    sub_0021ED48_0x21ed48(rdram, ctx, runtime); return;
    ctx->pc = 0x21C710u;
}
