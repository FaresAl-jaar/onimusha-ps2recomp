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

// Function: sub_003F5760
// Address: 0x3f5760 - 0x3f57d4
void sub_003F5760_0x3f5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5760_0x3f5760");
#endif

    switch (ctx->pc) {
        case 0x3f57a4u: goto label_3f57a4;
        case 0x3f57c8u: goto label_3f57c8;
        default: break;
    }

    ctx->pc = 0x3f5760u;

    // 0x3f5760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f5760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f5764: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3f5764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3f5768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f5768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f576c: 0x24635a80  addiu       $v1, $v1, 0x5A80
    ctx->pc = 0x3f576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23168));
    // 0x3f5770: 0x90820239  lbu         $v0, 0x239($a0)
    ctx->pc = 0x3f5770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
    // 0x3f5774: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f5774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f5778: 0x9085023a  lbu         $a1, 0x23A($a0)
    ctx->pc = 0x3f5778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
    // 0x3f577c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3f577cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3f5780: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3f5780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3f5784: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3f5784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3f5788: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x3f5788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3f578c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3f5790: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3f5790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3f5794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3f5798: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x3f5798u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f579c: 0xc052d94  jal         func_14B650
    ctx->pc = 0x3F579Cu;
    SET_GPR_U32(ctx, 31, 0x3F57A4u);
    ctx->pc = 0x3F57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F579Cu;
    // 0x3f57a0: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B650u, 0x3F579Cu, 0x3F57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57A4u;
label_3f57a4:
    // 0x3f57a4: 0x240619e9  addiu       $a2, $zero, 0x19E9
    ctx->pc = 0x3f57a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6633));
    // 0x3f57a8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f57a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f57ac: 0xac2640b4  sw          $a2, 0x40B4($at)
    ctx->pc = 0x3f57acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x3f57b0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f57b4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f57b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f57b8: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x3f57b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x3f57bc: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x3f57bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x3f57c0: 0xc0ce400  jal         func_339000
    ctx->pc = 0x3F57C0u;
    SET_GPR_U32(ctx, 31, 0x3F57C8u);
    ctx->pc = 0x3F57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F57C0u;
    // 0x3f57c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x3F57C0u, 0x3F57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F57C8u;
label_3f57c8:
    // 0x3f57c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f57c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f57cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F57CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F57CCu;
        // 0x3f57d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F57CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F57D4u;
}
