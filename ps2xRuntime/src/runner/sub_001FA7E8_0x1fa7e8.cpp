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

// Function: sub_001FA7E8
// Address: 0x1fa7e8 - 0x1fa898
void sub_001FA7E8_0x1fa7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA7E8_0x1fa7e8");
#endif

    switch (ctx->pc) {
        case 0x1fa80cu: goto label_1fa80c;
        case 0x1fa83cu: goto label_1fa83c;
        case 0x1fa850u: goto label_1fa850;
        default: break;
    }

    ctx->pc = 0x1fa7e8u;

    // 0x1fa7e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa7ec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1fa7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa7f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa7f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fa7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa800: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fa800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fa804: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1FA804u;
    SET_GPR_U32(ctx, 31, 0x1FA80Cu);
    ctx->pc = 0x1FA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA804u;
    // 0x1fa808: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1FA804u, 0x1FA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA80Cu;
label_1fa80c:
    // 0x1fa80c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa810: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FA810u;
    {
        const bool branch_taken_0x1fa810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA810u;
        // 0x1fa814: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa810) {
            ctx->pc = 0x1FA880u;
            goto label_1fa880;
        }
    }
    ctx->pc = 0x1FA818u;
    // 0x1fa818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa81c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1fa81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1fa820: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1fa820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa824: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1fa824u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fa828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa82c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA82Cu;
    {
        const bool branch_taken_0x1fa82c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1FA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA82Cu;
        // 0x1fa830: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa82c) {
            ctx->pc = 0x1FA880u;
            goto label_1fa880;
        }
    }
    ctx->pc = 0x1FA834u;
    // 0x1fa834: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1FA834u;
    SET_GPR_U32(ctx, 31, 0x1FA83Cu);
    ctx->pc = 0x1FA838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA834u;
    // 0x1fa838: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1FA834u, 0x1FA83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA83Cu;
label_1fa83c:
    // 0x1fa83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa840: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA840u;
    {
        const bool branch_taken_0x1fa840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA840u;
        // 0x1fa844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa840) {
            ctx->pc = 0x1FA880u;
            goto label_1fa880;
        }
    }
    ctx->pc = 0x1FA848u;
    // 0x1fa848: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x1FA848u;
    SET_GPR_U32(ctx, 31, 0x1FA850u);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1FA848u, 0x1FA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA850u;
label_1fa850:
    // 0x1fa850: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x1fa850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1fa854: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA854u;
    {
        const bool branch_taken_0x1fa854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA854u;
        // 0x1fa858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa854) {
            ctx->pc = 0x1FA880u;
            goto label_1fa880;
        }
    }
    ctx->pc = 0x1FA85Cu;
    // 0x1fa85c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fa85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fa860: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1fa860u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1fa864: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fa868: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA868u;
    {
        const bool branch_taken_0x1fa868 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x1fa868) {
            ctx->pc = 0x1FA86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA868u;
            // 0x1fa86c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA884u;
            goto label_1fa884;
        }
    }
    ctx->pc = 0x1FA870u;
    // 0x1fa870: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1fa870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa874: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1fa878: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fa878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fa87c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fa880:
    // 0x1fa880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa884:
    // 0x1fa884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa88c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa890: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA890u;
        // 0x1fa894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA898u;
}
