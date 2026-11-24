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

// Function: sub_002041F8
// Address: 0x2041f8 - 0x204300
void sub_002041F8_0x2041f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002041F8_0x2041f8");
#endif

    switch (ctx->pc) {
        case 0x20422cu: goto label_20422c;
        case 0x204244u: goto label_204244;
        case 0x204264u: goto label_204264;
        case 0x204278u: goto label_204278;
        case 0x204280u: goto label_204280;
        case 0x20429cu: goto label_20429c;
        case 0x2042b4u: goto label_2042b4;
        case 0x2042c4u: goto label_2042c4;
        case 0x2042e0u: goto label_2042e0;
        default: break;
    }

    ctx->pc = 0x2041f8u;

    // 0x2041f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2041fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2041fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x204200: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x204200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204204: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x204204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x204208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20420c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x204210: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x204210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204214: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x204214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x204218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20421c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x204220: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x204220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x204224: 0xc049590  jal         func_125640
    ctx->pc = 0x204224u;
    SET_GPR_U32(ctx, 31, 0x20422Cu);
    ctx->pc = 0x204228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204224u;
    // 0x204228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x204224u, 0x20422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20422Cu;
label_20422c:
    // 0x20422c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204230: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x204230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x204234: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20423c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20423Cu;
    SET_GPR_U32(ctx, 31, 0x204244u);
    ctx->pc = 0x204240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20423Cu;
    // 0x204240: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20423Cu, 0x204244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204244u;
label_204244:
    // 0x204244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204248: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x204248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20424c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204250: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204250u;
    {
        const bool branch_taken_0x204250 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x204254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204250u;
        // 0x204254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204250) {
            ctx->pc = 0x204270u;
            goto label_204270;
        }
    }
    ctx->pc = 0x204258u;
    // 0x204258: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20425c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20425Cu;
    SET_GPR_U32(ctx, 31, 0x204264u);
    ctx->pc = 0x204260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20425Cu;
    // 0x204260: 0x24846b20  addiu       $a0, $a0, 0x6B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20425Cu, 0x204264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204264u;
label_204264:
    // 0x204264: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x204264u;
    {
        const bool branch_taken_0x204264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204264u;
        // 0x204268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204264) {
            ctx->pc = 0x2042E4u;
            goto label_2042e4;
        }
    }
    ctx->pc = 0x20426Cu;
    // 0x20426c: 0x0  nop
    ctx->pc = 0x20426cu;
    // NOP
label_204270:
    // 0x204270: 0xc08111a  jal         func_204468
    ctx->pc = 0x204270u;
    SET_GPR_U32(ctx, 31, 0x204278u);
    ctx->pc = 0x204468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204468u, 0x204270u, 0x204278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204278u;
label_204278:
    // 0x204278: 0xc081c12  jal         func_207048
    ctx->pc = 0x204278u;
    SET_GPR_U32(ctx, 31, 0x204280u);
    ctx->pc = 0x20427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204278u;
    // 0x20427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x204278u, 0x204280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204280u;
label_204280:
    // 0x204280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204288: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x204288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20428c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20428Cu;
    {
        const bool branch_taken_0x20428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20428Cu;
        // 0x204290: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20428c) {
            ctx->pc = 0x2042E4u;
            goto label_2042e4;
        }
    }
    ctx->pc = 0x204294u;
    // 0x204294: 0xc087876  jal         func_21E1D8
    ctx->pc = 0x204294u;
    SET_GPR_U32(ctx, 31, 0x20429Cu);
    ctx->pc = 0x21E1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E1D8u, 0x204294u, 0x20429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20429Cu;
label_20429c:
    // 0x20429c: 0x54530012  bnel        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x20429Cu;
    {
        const bool branch_taken_0x20429c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x20429c) {
            ctx->pc = 0x2042A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20429Cu;
            // 0x2042a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2042E8u;
            goto label_2042e8;
        }
    }
    ctx->pc = 0x2042A4u;
    // 0x2042a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2042a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042ac: 0xc081242  jal         func_204908
    ctx->pc = 0x2042ACu;
    SET_GPR_U32(ctx, 31, 0x2042B4u);
    ctx->pc = 0x2042B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042ACu;
    // 0x2042b0: 0xae050078  sw          $a1, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204908u, 0x2042ACu, 0x2042B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042B4u;
label_2042b4:
    // 0x2042b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2042b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2042bc: 0xc081140  jal         func_204500
    ctx->pc = 0x2042BCu;
    SET_GPR_U32(ctx, 31, 0x2042C4u);
    ctx->pc = 0x2042C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042BCu;
    // 0x2042c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204500u, 0x2042BCu, 0x2042C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042C4u;
label_2042c4:
    // 0x2042c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2042c8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2042cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2042ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2042d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2042d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2042d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042d8: 0xc08112c  jal         func_2044B0
    ctx->pc = 0x2042D8u;
    SET_GPR_U32(ctx, 31, 0x2042E0u);
    ctx->pc = 0x2042DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2042D8u;
    // 0x2042dc: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2044B0u, 0x2042D8u, 0x2042E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042E0u;
label_2042e0:
    // 0x2042e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2042e4:
    // 0x2042e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2042e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2042e8:
    // 0x2042e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2042e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2042ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2042ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2042f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2042f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2042f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2042f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2042f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2042F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2042FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2042F8u;
        // 0x2042fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2042F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204300u;
}
