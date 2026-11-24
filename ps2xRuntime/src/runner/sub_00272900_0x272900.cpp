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

// Function: sub_00272900
// Address: 0x272900 - 0x2729a0
void sub_00272900_0x272900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272900_0x272900");
#endif

    switch (ctx->pc) {
        case 0x27292cu: goto label_27292c;
        case 0x27294cu: goto label_27294c;
        case 0x272964u: goto label_272964;
        case 0x27296cu: goto label_27296c;
        case 0x272980u: goto label_272980;
        case 0x27298cu: goto label_27298c;
        default: break;
    }

    ctx->pc = 0x272900u;

    // 0x272900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x272904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27290c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x272914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272918: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272918u;
    {
        const bool branch_taken_0x272918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272918u;
        // 0x27291c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272918) {
            ctx->pc = 0x272930u;
            goto label_272930;
        }
    }
    ctx->pc = 0x272920u;
    // 0x272920: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x272920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x272924: 0xc09c9ec  jal         func_2727B0
    ctx->pc = 0x272924u;
    SET_GPR_U32(ctx, 31, 0x27292Cu);
    ctx->pc = 0x272928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272924u;
    // 0x272928: 0xa2260001  sb          $a2, 0x1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2727B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2727B0u, 0x272924u, 0x27292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27292Cu;
label_27292c:
    // 0x27292c: 0x0  nop
    ctx->pc = 0x27292cu;
    // NOP
label_272930:
    // 0x272930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272934: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x272934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x272938: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x272938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x27293c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x27293cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x272940: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x272940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x272944: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x272944u;
    SET_GPR_U32(ctx, 31, 0x27294Cu);
    ctx->pc = 0x272948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272944u;
    // 0x272948: 0xa2200004  sb          $zero, 0x4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x272944u, 0x27294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27294Cu;
label_27294c:
    // 0x27294c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x27294cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x272950: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x272950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x272954: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x272954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x272958: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x272958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x27295c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x27295Cu;
    SET_GPR_U32(ctx, 31, 0x272964u);
    ctx->pc = 0x272960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27295Cu;
    // 0x272960: 0x34461012  ori         $a2, $v0, 0x1012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x27295Cu, 0x272964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272964u;
label_272964:
    // 0x272964: 0xc09c424  jal         func_271090
    ctx->pc = 0x272964u;
    SET_GPR_U32(ctx, 31, 0x27296Cu);
    ctx->pc = 0x272968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272964u;
    // 0x272968: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271090u, 0x272964u, 0x27296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27296Cu;
label_27296c:
    // 0x27296c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x272970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272974: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x272974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x272978: 0xc095130  jal         func_2544C0
    ctx->pc = 0x272978u;
    SET_GPR_U32(ctx, 31, 0x272980u);
    ctx->pc = 0x27297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272978u;
    // 0x27297c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x272978u, 0x272980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272980u;
label_272980:
    // 0x272980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272984: 0xc09cad8  jal         func_272B60
    ctx->pc = 0x272984u;
    SET_GPR_U32(ctx, 31, 0x27298Cu);
    ctx->pc = 0x272988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272984u;
    // 0x272988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272B60u, 0x272984u, 0x27298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27298Cu;
label_27298c:
    // 0x27298c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272998: 0x3e00008  jr          $ra
    ctx->pc = 0x272998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272998u;
        // 0x27299c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2729A0u;
}
