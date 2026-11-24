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

// Function: sub_0025B470
// Address: 0x25b470 - 0x25b4fc
void sub_0025B470_0x25b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B470_0x25b470");
#endif

    switch (ctx->pc) {
        case 0x25b494u: goto label_25b494;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4e4u: goto label_25b4e4;
        default: break;
    }

    ctx->pc = 0x25b470u;

    // 0x25b470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25b474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b480: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x25b480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25b484: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25B484u;
    {
        const bool branch_taken_0x25b484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B484u;
        // 0x25b488: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b484) {
            ctx->pc = 0x25B4D0u;
            goto label_25b4d0;
        }
    }
    ctx->pc = 0x25B48Cu;
    // 0x25b48c: 0xc096d04  jal         func_25B410
    ctx->pc = 0x25B48Cu;
    SET_GPR_U32(ctx, 31, 0x25B494u);
    ctx->pc = 0x25B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B48Cu;
    // 0x25b490: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x25B48Cu, 0x25B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B494u;
label_25b494:
    // 0x25b494: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x25b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25b498: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x25b498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x25b49c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x25b49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x25b4a0: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x25b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x25b4a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b4b0: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x25B4B0u;
    SET_GPR_U32(ctx, 31, 0x25B4B8u);
    ctx->pc = 0x25B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4B0u;
    // 0x25b4b4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x25B4B0u, 0x25B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4B8u;
label_25b4b8:
    // 0x25b4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4bc: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x25B4BCu;
    SET_GPR_U32(ctx, 31, 0x25B4C4u);
    ctx->pc = 0x25B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4BCu;
    // 0x25b4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x25B4BCu, 0x25B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4C4u;
label_25b4c4:
    // 0x25b4c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25B4C4u;
    {
        const bool branch_taken_0x25b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b4c4) {
            ctx->pc = 0x25B4E8u;
            goto label_25b4e8;
        }
    }
    ctx->pc = 0x25B4CCu;
    // 0x25b4cc: 0x0  nop
    ctx->pc = 0x25b4ccu;
    // NOP
label_25b4d0:
    // 0x25b4d0: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x25B4D0u;
    SET_GPR_U32(ctx, 31, 0x25B4D8u);
    ctx->pc = 0x25B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4D0u;
    // 0x25b4d4: 0x84a500c2  lh          $a1, 0xC2($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x25B4D0u, 0x25B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4D8u;
label_25b4d8:
    // 0x25b4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b4dc: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x25B4DCu;
    SET_GPR_U32(ctx, 31, 0x25B4E4u);
    ctx->pc = 0x25B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B4DCu;
    // 0x25b4e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x25B4DCu, 0x25B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B4E4u;
label_25b4e4:
    // 0x25b4e4: 0x0  nop
    ctx->pc = 0x25b4e4u;
    // NOP
label_25b4e8:
    // 0x25b4e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b4ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B4F4u;
        // 0x25b4f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B4FCu;
}
