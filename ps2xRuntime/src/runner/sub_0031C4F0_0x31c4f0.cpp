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

// Function: sub_0031C4F0
// Address: 0x31c4f0 - 0x31c560
void sub_0031C4F0_0x31c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C4F0_0x31c4f0");
#endif

    switch (ctx->pc) {
        case 0x31c530u: goto label_31c530;
        case 0x31c538u: goto label_31c538;
        case 0x31c540u: goto label_31c540;
        default: break;
    }

    ctx->pc = 0x31c4f0u;

    // 0x31c4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31c4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31c4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c4fc: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x31c4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C500u;
    {
        const bool branch_taken_0x31c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C500u;
        // 0x31c504: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c500) {
            ctx->pc = 0x31C510u;
            goto label_31c510;
        }
    }
    ctx->pc = 0x31C508u;
    // 0x31c508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C508u;
    {
        const bool branch_taken_0x31c508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C508u;
        // 0x31c50c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c508) {
            ctx->pc = 0x31C514u;
            goto label_31c514;
        }
    }
    ctx->pc = 0x31C510u;
label_31c510:
    // 0x31c510: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31c514:
    // 0x31c514: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x31c514u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31c518: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31c518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31c51c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x31c51cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c520: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31c524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c528: 0xc0c9a20  jal         func_326880
    ctx->pc = 0x31C528u;
    SET_GPR_U32(ctx, 31, 0x31C530u);
    ctx->pc = 0x31C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C528u;
    // 0x31c52c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326880u, 0x31C528u, 0x31C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C530u;
label_31c530:
    // 0x31c530: 0xc040d08  jal         func_103420
    ctx->pc = 0x31C530u;
    SET_GPR_U32(ctx, 31, 0x31C538u);
    ctx->pc = 0x31C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C530u;
    // 0x31c534: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x31C530u, 0x31C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C538u;
label_31c538:
    // 0x31c538: 0xc040d08  jal         func_103420
    ctx->pc = 0x31C538u;
    SET_GPR_U32(ctx, 31, 0x31C540u);
    ctx->pc = 0x31C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C538u;
    // 0x31c53c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x31C538u, 0x31C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C540u;
label_31c540:
    // 0x31c540: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x31c540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x31c544: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x31c544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x31c548: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x31c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x31c54c: 0xa02340b2  sb          $v1, 0x40B2($at)
    ctx->pc = 0x31c54cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x9140B2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9140B2u, _value); } while (0);
    // 0x31c550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31c554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c558: 0x3e00008  jr          $ra
    ctx->pc = 0x31C558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C558u;
        // 0x31c55c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C560u;
}
