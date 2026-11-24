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

// Function: sub_0020A510
// Address: 0x20a510 - 0x20a5f8
void sub_0020A510_0x20a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A510_0x20a510");
#endif

    switch (ctx->pc) {
        case 0x20a540u: goto label_20a540;
        case 0x20a588u: goto label_20a588;
        case 0x20a590u: goto label_20a590;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b8u: goto label_20a5b8;
        default: break;
    }

    ctx->pc = 0x20a510u;

    // 0x20a510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a51c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a524: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20a524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a52c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20a52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a530: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20a534: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20a538: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A538u;
    SET_GPR_U32(ctx, 31, 0x20A540u);
    ctx->pc = 0x20A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A538u;
    // 0x20a53c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A538u, 0x20A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A540u;
label_20a540:
    // 0x20a540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a54c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A54Cu;
    {
        const bool branch_taken_0x20a54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A54Cu;
        // 0x20a550: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a54c) {
            ctx->pc = 0x20A580u;
            goto label_20a580;
        }
    }
    ctx->pc = 0x20A554u;
    // 0x20a554: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a55c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a560: 0x24848460  addiu       $a0, $a0, -0x7BA0
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935648));
    // 0x20a564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a56c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20a56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a570: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20a570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a574: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A574u;
    ctx->pc = 0x20A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A574u;
    // 0x20a578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A57Cu;
    // 0x20a57c: 0x0  nop
    ctx->pc = 0x20a57cu;
    // NOP
label_20a580:
    // 0x20a580: 0xc081a0a  jal         func_206828
    ctx->pc = 0x20A580u;
    SET_GPR_U32(ctx, 31, 0x20A588u);
    ctx->pc = 0x206828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206828u, 0x20A580u, 0x20A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A588u;
label_20a588:
    // 0x20a588: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x20A588u;
    SET_GPR_U32(ctx, 31, 0x20A590u);
    ctx->pc = 0x20A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A588u;
    // 0x20a58c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x20A588u, 0x20A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A590u;
label_20a590:
    // 0x20a590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a594: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20a594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a598: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x20a598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a59c: 0xc082922  jal         func_20A488
    ctx->pc = 0x20A59Cu;
    SET_GPR_U32(ctx, 31, 0x20A5A4u);
    ctx->pc = 0x20A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A59Cu;
    // 0x20a5a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A488u, 0x20A59Cu, 0x20A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5A4u;
label_20a5a4:
    // 0x20a5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5a8: 0xc08283e  jal         func_20A0F8
    ctx->pc = 0x20A5A8u;
    SET_GPR_U32(ctx, 31, 0x20A5B0u);
    ctx->pc = 0x20A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5A8u;
    // 0x20a5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A0F8u, 0x20A5A8u, 0x20A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5B0u;
label_20a5b0:
    // 0x20a5b0: 0xc082816  jal         func_20A058
    ctx->pc = 0x20A5B0u;
    SET_GPR_U32(ctx, 31, 0x20A5B8u);
    ctx->pc = 0x20A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5B0u;
    // 0x20a5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A058u, 0x20A5B0u, 0x20A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5B8u;
label_20a5b8:
    // 0x20a5b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a5bc: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x20a5c0: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x20a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x20a5c4: 0xae1302f4  sw          $s3, 0x2F4($s0)
    ctx->pc = 0x20a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 19));
    // 0x20a5c8: 0xae1402f8  sw          $s4, 0x2F8($s0)
    ctx->pc = 0x20a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 20));
    // 0x20a5cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A5CCu;
    {
        const bool branch_taken_0x20a5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5CCu;
        // 0x20a5d0: 0xae1102dc  sw          $s1, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5cc) {
            ctx->pc = 0x20A5D8u;
            goto label_20a5d8;
        }
    }
    ctx->pc = 0x20A5D4u;
    // 0x20a5d4: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x20a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_20a5d8:
    // 0x20a5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a5dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a5dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a5e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a5e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a5e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a5e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20a5e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a5ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20a5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5F0u;
        // 0x20a5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A5F8u;
}
