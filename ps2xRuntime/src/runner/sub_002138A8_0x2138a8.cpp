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

// Function: sub_002138A8
// Address: 0x2138a8 - 0x213914
void sub_002138A8_0x2138a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002138A8_0x2138a8");
#endif

    switch (ctx->pc) {
        case 0x2138a8u: goto label_2138a8;
        case 0x2138acu: goto label_2138ac;
        case 0x2138b0u: goto label_2138b0;
        case 0x2138b4u: goto label_2138b4;
        case 0x2138b8u: goto label_2138b8;
        case 0x2138bcu: goto label_2138bc;
        case 0x2138c0u: goto label_2138c0;
        case 0x2138c4u: goto label_2138c4;
        case 0x2138c8u: goto label_2138c8;
        case 0x2138ccu: goto label_2138cc;
        case 0x2138d0u: goto label_2138d0;
        case 0x2138d4u: goto label_2138d4;
        case 0x2138d8u: goto label_2138d8;
        case 0x2138dcu: goto label_2138dc;
        case 0x2138e0u: goto label_2138e0;
        case 0x2138e4u: goto label_2138e4;
        case 0x2138e8u: goto label_2138e8;
        case 0x2138ecu: goto label_2138ec;
        case 0x2138f0u: goto label_2138f0;
        case 0x2138f4u: goto label_2138f4;
        case 0x2138f8u: goto label_2138f8;
        case 0x2138fcu: goto label_2138fc;
        case 0x213900u: goto label_213900;
        case 0x213904u: goto label_213904;
        case 0x213908u: goto label_213908;
        case 0x21390cu: goto label_21390c;
        case 0x213910u: goto label_213910;
        default: break;
    }

    ctx->pc = 0x2138a8u;

label_2138a8:
    // 0x2138a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2138a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2138ac:
    // 0x2138ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2138acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2138b0:
    // 0x2138b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2138b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2138b4:
    // 0x2138b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2138b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2138b8:
    // 0x2138b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2138b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2138bc:
    // 0x2138bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2138bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2138c0:
    // 0x2138c0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2138c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2138c4:
    // 0x2138c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2138c8:
    // 0x2138c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2138c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2138cc:
    // 0x2138cc: 0x40f809  jalr        $v0
label_2138d0:
    if (ctx->pc == 0x2138D0u) {
        ctx->pc = 0x2138D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138CCu;
        // 0x2138d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2138D4u;
        goto label_2138d4;
    }
    ctx->pc = 0x2138CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2138D4u);
        ctx->pc = 0x2138D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138CCu;
        // 0x2138d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2138CCu, 0x2138D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2138D4u;
label_2138d4:
    // 0x2138d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2138d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2138d8:
    // 0x2138d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2138d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2138dc:
    // 0x2138dc: 0xc07eb68  jal         func_1FADA0
label_2138e0:
    if (ctx->pc == 0x2138E0u) {
        ctx->pc = 0x2138E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138DCu;
        // 0x2138e0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2138E4u;
        goto label_2138e4;
    }
    ctx->pc = 0x2138DCu;
    SET_GPR_U32(ctx, 31, 0x2138E4u);
    ctx->pc = 0x2138E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138DCu;
    // 0x2138e0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x2138DCu, 0x2138E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138E4u;
label_2138e4:
    // 0x2138e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2138e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2138e8:
    // 0x2138e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2138e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2138ec:
    // 0x2138ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2138ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2138f0:
    // 0x2138f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2138f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2138f4:
    // 0x2138f4: 0x40f809  jalr        $v0
label_2138f8:
    if (ctx->pc == 0x2138F8u) {
        ctx->pc = 0x2138F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138F4u;
        // 0x2138f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2138FCu;
        goto label_2138fc;
    }
    ctx->pc = 0x2138F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2138FCu);
        ctx->pc = 0x2138F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138F4u;
        // 0x2138f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2138F4u, 0x2138FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2138FCu;
label_2138fc:
    // 0x2138fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2138fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_213900:
    // 0x213900: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x213900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_213904:
    // 0x213904: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x213904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_213908:
    // 0x213908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21390c:
    // 0x21390c: 0x3e00008  jr          $ra
label_213910:
    if (ctx->pc == 0x213910u) {
        ctx->pc = 0x213910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21390Cu;
        // 0x213910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213914u;
        goto label_fallthrough_0x21390c;
    }
    ctx->pc = 0x21390Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21390Cu;
        // 0x213910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21390Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21390c:
    ctx->pc = 0x213914u;
}
