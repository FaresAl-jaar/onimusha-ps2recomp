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

// Function: sub_0020E680
// Address: 0x20e680 - 0x20e710
void sub_0020E680_0x20e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E680_0x20e680");
#endif

    switch (ctx->pc) {
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        case 0x20e6d4u: goto label_20e6d4;
        case 0x20e6d8u: goto label_20e6d8;
        case 0x20e6dcu: goto label_20e6dc;
        case 0x20e6e0u: goto label_20e6e0;
        case 0x20e6e4u: goto label_20e6e4;
        case 0x20e6e8u: goto label_20e6e8;
        case 0x20e6ecu: goto label_20e6ec;
        case 0x20e6f0u: goto label_20e6f0;
        case 0x20e6f4u: goto label_20e6f4;
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        default: break;
    }

    ctx->pc = 0x20e680u;

label_20e680:
    // 0x20e680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20e684:
    // 0x20e684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e688:
    // 0x20e688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e68c:
    // 0x20e68c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20e690:
    // 0x20e690: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e694:
    // 0x20e694: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20e698:
    // 0x20e698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20e69c:
    // 0x20e69c: 0xc084968  jal         func_2125A0
label_20e6a0:
    if (ctx->pc == 0x20E6A0u) {
        ctx->pc = 0x20E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E69Cu;
        // 0x20e6a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6A4u;
        goto label_20e6a4;
    }
    ctx->pc = 0x20E69Cu;
    SET_GPR_U32(ctx, 31, 0x20E6A4u);
    ctx->pc = 0x20E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E69Cu;
    // 0x20e6a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x20E69Cu, 0x20E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6A4u;
label_20e6a4:
    // 0x20e6a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_20e6a8:
    // 0x20e6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e6ac:
    // 0x20e6ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20e6b0:
    if (ctx->pc == 0x20E6B0u) {
        ctx->pc = 0x20E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ACu;
        // 0x20e6b0: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6B4u;
        goto label_20e6b4;
    }
    ctx->pc = 0x20E6ACu;
    {
        const bool branch_taken_0x20e6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6ACu;
        // 0x20e6b0: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6ac) {
            ctx->pc = 0x20E6D0u;
            goto label_20e6d0;
        }
    }
    ctx->pc = 0x20E6B4u;
label_20e6b4:
    // 0x20e6b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e6b8:
    // 0x20e6b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20e6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e6bc:
    // 0x20e6bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e6c0:
    // 0x20e6c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20e6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e6c4:
    // 0x20e6c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20e6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20e6c8:
    // 0x20e6c8: 0x80848e0  j           func_212380
label_20e6cc:
    if (ctx->pc == 0x20E6CCu) {
        ctx->pc = 0x20E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6C8u;
        // 0x20e6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6D0u;
        goto label_20e6d0;
    }
    ctx->pc = 0x20E6C8u;
    ctx->pc = 0x20E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E6C8u;
    // 0x20e6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20E6D0u;
label_20e6d0:
    // 0x20e6d0: 0xc087ed0  jal         func_21FB40
label_20e6d4:
    if (ctx->pc == 0x20E6D4u) {
        ctx->pc = 0x20E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6D0u;
        // 0x20e6d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6D8u;
        goto label_20e6d8;
    }
    ctx->pc = 0x20E6D0u;
    SET_GPR_U32(ctx, 31, 0x20E6D8u);
    ctx->pc = 0x20E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E6D0u;
    // 0x20e6d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20E6D0u, 0x20E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6D8u;
label_20e6d8:
    // 0x20e6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e6dc:
    // 0x20e6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20e6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e6e0:
    // 0x20e6e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20e6e4:
    if (ctx->pc == 0x20E6E4u) {
        ctx->pc = 0x20E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E0u;
        // 0x20e6e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6E8u;
        goto label_20e6e8;
    }
    ctx->pc = 0x20E6E0u;
    {
        const bool branch_taken_0x20e6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E0u;
        // 0x20e6e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6e0) {
            ctx->pc = 0x20E6F8u;
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20E6E8u;
label_20e6e8:
    // 0x20e6e8: 0x8e022114  lw          $v0, 0x2114($s0)
    ctx->pc = 0x20e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8468)));
label_20e6ec:
    // 0x20e6ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20e6f0:
    // 0x20e6f0: 0x60f809  jalr        $v1
label_20e6f4:
    if (ctx->pc == 0x20E6F4u) {
        ctx->pc = 0x20E6F8u;
        goto label_20e6f8;
    }
    ctx->pc = 0x20E6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20E6F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6F0u, 0x20E6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E6F8u;
label_20e6f8:
    // 0x20e6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e6fc:
    // 0x20e6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e700:
    // 0x20e700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20e700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e704:
    // 0x20e704: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20e704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20e708:
    // 0x20e708: 0x3e00008  jr          $ra
label_20e70c:
    if (ctx->pc == 0x20E70Cu) {
        ctx->pc = 0x20E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E708u;
        // 0x20e70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E710u;
        goto label_fallthrough_0x20e708;
    }
    ctx->pc = 0x20E708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E708u;
        // 0x20e70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e708:
    ctx->pc = 0x20E710u;
}
