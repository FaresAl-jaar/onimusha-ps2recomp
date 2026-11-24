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

// Function: sub_002116A8
// Address: 0x2116a8 - 0x211760
void sub_002116A8_0x2116a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002116A8_0x2116a8");
#endif

    switch (ctx->pc) {
        case 0x2116f4u: goto label_2116f4;
        case 0x21170cu: goto label_21170c;
        case 0x211724u: goto label_211724;
        case 0x21173cu: goto label_21173c;
        default: break;
    }

    ctx->pc = 0x2116a8u;

    // 0x2116a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2116ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2116b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2116b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2116b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2116b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2116b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2116bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2116bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2116c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2116c4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2116c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116c8: 0x2610fffa  addiu       $s0, $s0, -0x6
    ctx->pc = 0x2116c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x2116cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2116ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2116d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2116d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2116d4: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x2116d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x2116d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2116d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2116dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2116e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2116e4: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2116E4u;
    {
        const bool branch_taken_0x2116e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2116E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116E4u;
        // 0x2116e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116e4) {
            ctx->pc = 0x211744u;
            goto label_211744;
        }
    }
    ctx->pc = 0x2116ECu;
    // 0x2116ec: 0xc0845d8  jal         func_211760
    ctx->pc = 0x2116ECu;
    SET_GPR_U32(ctx, 31, 0x2116F4u);
    ctx->pc = 0x211760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211760u, 0x2116ECu, 0x2116F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2116F4u;
label_2116f4:
    // 0x2116f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2116F4u;
    {
        const bool branch_taken_0x2116f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2116f4) {
            ctx->pc = 0x2116F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2116F4u;
            // 0x2116f8: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211714u;
            goto label_211714;
        }
    }
    ctx->pc = 0x2116FCu;
    // 0x2116fc: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x2116fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x211700: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x211700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x211704: 0xc0845d8  jal         func_211760
    ctx->pc = 0x211704u;
    SET_GPR_U32(ctx, 31, 0x21170Cu);
    ctx->pc = 0x211708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211704u;
    // 0x211708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211760u, 0x211704u, 0x21170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21170Cu;
label_21170c:
    // 0x21170c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21170Cu;
    {
        const bool branch_taken_0x21170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21170Cu;
        // 0x211710: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21170c) {
            ctx->pc = 0x211744u;
            goto label_211744;
        }
    }
    ctx->pc = 0x211714u;
label_211714:
    // 0x211714: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x211714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x211718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21171c: 0xc0845ee  jal         func_2117B8
    ctx->pc = 0x21171Cu;
    SET_GPR_U32(ctx, 31, 0x211724u);
    ctx->pc = 0x211720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21171Cu;
    // 0x211720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2117B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2117B8u, 0x21171Cu, 0x211724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211724u;
label_211724:
    // 0x211724: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x211724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21172c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21172Cu;
    {
        const bool branch_taken_0x21172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21172Cu;
        // 0x211730: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21172c) {
            ctx->pc = 0x211744u;
            goto label_211744;
        }
    }
    ctx->pc = 0x211734u;
    // 0x211734: 0xc084604  jal         func_211810
    ctx->pc = 0x211734u;
    SET_GPR_U32(ctx, 31, 0x21173Cu);
    ctx->pc = 0x211810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211810u, 0x211734u, 0x21173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21173Cu;
label_21173c:
    // 0x21173c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21173cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x211740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211744:
    // 0x211744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21174c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21174cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x211754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211758: 0x3e00008  jr          $ra
    ctx->pc = 0x211758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211758u;
        // 0x21175c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211760u;
}
